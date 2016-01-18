#ifndef BLOCKINGQUEUE_H_INCLUDED
#define BLOCKINGQUEUE_H_INCLUDED

#include <pthread.h>
#include <list>


//Attention : ceci est une structure de liste pas de pile !!!
template <typename T> class BlockingQueue{
    private:
        std::list<T> m_queue;
        pthread_mutex_t m_mutex;
        pthread_cond_t  m_condv;

    public :
    BlockingQueue(){
        pthread_mutex_init(&m_mutex, NULL);
        pthread_cond_init(&m_condv, NULL);
    }

    ~BlockingQueue(){
        pthread_mutex_destroy(&m_mutex);
        pthread_cond_destroy(&m_condv);
    };

    void add(T item){
        pthread_mutex_lock(&m_mutex);
        m_queue.push_back(item);
        pthread_cond_signal(&m_condv);
        pthread_mutex_unlock(&m_mutex);
    };

    T pop(){
        pthread_mutex_lock(&m_mutex);
        while(m_queue.size() == 0){
            pthread_cond_wait(&m_condv, &m_mutex);
        }
        T item = m_queue.front();
        m_queue.pop_front();
        pthread_mutex_unlock(&m_mutex);
        return item;
    };
    
    /*T pop(int time){
        time_t ts;
        clock_gettime(CLOCK_REALTIME, &ts);   //seulement sous linux, à tester
        ts.tv_sec += time;
        pthread_mutex_lock(&m_mutex);
        while(m_queue.size() == 0){
            pthread_cond_wait(&m_condv, &m_mutex);
            //pthread_cond_timedwait(&m_condv, &m_mutex, &ts);
        }
        
        T item = m_queue.front();
        m_queue.pop_front();
        pthread_mutex_unlock(&m_mutex);
        return item;
        // à écrire
    }*/
    
    
    int size(){
        pthread_mutex_lock(&m_mutex);
        int size = m_queue.size();
        pthread_mutex_unlock(&m_mutex);
        return size;
    };



};

#endif // BLOCKINGQUEUE_H_INCLUDED
