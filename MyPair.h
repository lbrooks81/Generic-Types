//
// Created by Glog on 9/12/2024.
//

#ifndef MYPAIR_H
#define MYPAIR_H


namespace PairNS
{
    template<typename T1, typename T2>
    class MyPair
    {
    private:
        T1 first;
        T2 second;
    public:
        MyPair(T1 first, T2 second);
        T1 getFirst() const;
        T2 getSecond() const;
    };


}

#endif //MYPAIR_H
