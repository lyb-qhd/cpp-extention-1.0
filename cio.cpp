#pragma once

#include"base.cpp"
#define rett return self
struct : object{
    auto& cin=std::cin;
    auto& cout=std::cout;
    TmplT auto& operator<<(const T& x) 
        { cout<<x; rett; }
    TmplT auto& operator>>(T& x)
        { cin>>x; rett; }
    TmplT const auto get() 
        { return cin.get(); }
    TmplT auto& get(char& ch)
        { cin.get(ch); rett; }
} cio;

struct {
    TmplT auto& operator()(T obj) 
    { cout<<obj; return self; }
    template<class... Args> 
        auto& operator()(const char* fmt,Args... args)
            { printf(fmt,args...); rett; }
} coutf;
#undef rett