
using 
    int16=short,int32=int,
    int64=long long,
    uint16=unsigned short,
    uint32=unsigned int,
    uint64=unsigned long long,

    float32=float,
    float64=double,
    float128=long double,

    char16=char16_t,
    char32=char32_t,
    uchar=unsigned char,

    ushort=unsigned short,
    uint=unsigned int,
    ulong=unsigned long long,

    ;
#define long int64

using 
    DementionT=int64,
    SizeT=int64,
    PurePointerT=void*;

template<class T>
    using CArray=T*;

template<class T,DementionT D>
    using CMat=CMat<T,D-1>*;
template<class T>
    using CMat<T,1>=T*;

template<class T>
    using Array=std::vector<T>;

template<class T,DementionT D>
    using DemArray=Array<DemArray<T,D-1> >;
template<class T>
    using DemArray<T,1>=std::vector<T>;
/*
template<class T,class U> use tep=std::is_same<T,U>;
TmplT  constexpr bool is_char(){
    return 
        teq<T,char>||tep<T,char16>||
        teq<T,char32>||teq<T,wchar_t>;    
}
*/

