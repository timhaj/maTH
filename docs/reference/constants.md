# 😳 Constants

Here are some predefined constants you can direcly use in your code:

```cpp
std::cout << PI;                    //3.14159
std::cout << E;                     //2.71828
std::cout << PHI;                   //1.61803
std::cout << TAU;                   //0.61803
std::cout << SQRT2;                 //1.41421
std::cout << SQRT3;                 //1.73205
std::cout << SQRT5;                 //2.23606
std::cout << SILVER;                //2.41421
std::cout << CUBE_ROOT_2;           //1.25992
std::cout << CUBE_ROOT_3;           //1.44224
std::cout << TWELFTH_ROOT_2;        //1.05946
std::cout << SUPERGOLDEN;           //1.46557
std::cout << CONNECTIVE;            //1.84775
std::cout << KEPLER_BOUWKAMP;       //0.11494
std::cout << WALLIS;                //2.09455
std::cout << LN_2;                  //0.69314
std::cout << LEMNISCATE;            //2.62205
std::cout << EULER_CONSTANT;        //0.57721
std::cout << ERDOS_BORWEIN;         //1.60669
std::cout << OMEGA;                 //0.56714
std::cout << APERY;                 //1.20205
std::cout << SOLDNER;               //1.45136
std::cout << GAUSS;                 //0.83462
std::cout << SECOND_HERMITE;        //1.15470
std::cout << LIOUVILLE;             //0.11000
std::cout << RAMANUJAN;             //262537412640768743.99999
std::cout << GLAISHER_KINKELIN;     //1.28242
std::cout << CATALAN;               //0.91596
std::cout << DOTTIE;                //0.73908
std::cout << MEISSEL_MERTENS;       //0.26149
std::cout << UNIVERSAL_PARABOLIC;   //2.29558
std::cout << CAHEN;                 //0.64341
std::cout << GELFOND;               //23.14069
std::cout << GELFOND_SCHNEIDER;     //2.66514
std::cout << SECOND_FAVARD;         //1.23370
std::cout << GOLDEN_ANGLE;          //2.39996
std::cout << SIERPINSKI;            //2.58498
std::cout << LANDAU_RAMANUJAN;      //0.76422
std::cout << GIESEKING;             //1.01494
std::cout << BERNSTEIN;             //0.28016
std::cout << TRIBONACCI;            //1.83928
std::cout << BRUN;                  //1.90216
std::cout << TWIN_PRIMES;           //0.66016
std::cout << PLASTIC_RATIO;         //1.32471
std::cout << PROUHET_THUE_MORSE;    //0.41245
std::cout << GOLOMB_DICKMAN;        //0.62432
std::cout << FELLER_TORNIER;        //0.66131
std::cout << SALEM;                 //1.17628
std::cout << KHINCHIN;              //2.68545
std::cout << LEVY_1;                //1.18656
std::cout << LEVY_2;                //3.27582
std::cout << COPELAND_ERDOS;        //0.23571
std::cout << MILLS;                 //1.30637
std::cout << VAN_DER_PAUW;          //4.53236
std::cout << MAGIC_ANGLE;           //0.95531
std::cout << ARTIN;                 //0.37395
std::cout << PORTER;                //1.46707
std::cout << LOCH;                  //0.97027
std::cout << LIEB_SQUARE_ICE;       //1.53960
std::cout << NIVEN;                 //1.70521
std::cout << STEPHENS;              //0.57595
std::cout << FIBONACCI;             //3.35988
std::cout << FEIGENBAUM;            //4.66920
std::cout << FRANSEN_ROBINSON;      //2.80777
std::cout << SECOND_BOIS_REYMOND;   //0.19452
std::cout << ERDOS_TENENBAUM_FORD;  //0.08607
std::cout << CONWAY;                //1.30357
std::cout << HAFNER_SARNAK_MCCURLEY;//0.35323
std::cout << BACKHOUSE;             //1.45607
std::cout << VISWANATH;             //1.13198
std::cout << KOMORNIK_LORETI;       //1.78723
std::cout << EMBREE_TREFETHEN;      //0.70258
std::cout << HEATH_BROWN_MOROZ;     //0.00131
std::cout << MRB_CONSTANT;          //0.18785
std::cout << SOMOS;                 //1.66168
std::cout << FOIAS;                 //1.18745
```

{% hint style="info" %}
With `setprecision(n)`you can display n digits of a number on screen. In the library, all constants are defined to the limits of `long double` (size varies from compiler to compiler, read more about this here: [https://stackoverflow.com/questions/3454576/long-double-vs-double](https://stackoverflow.com/questions/3454576/long-double-vs-double)).  See example below:
{% endhint %}

```cpp
#include <iomanip>
std::cout << setprecision(8) << PI; //3.1415927
```

