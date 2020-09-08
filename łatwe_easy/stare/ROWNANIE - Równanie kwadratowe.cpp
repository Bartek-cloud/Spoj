SPOJ submission 26181776 (CPP) plaintext list. Status: AC, problem ROWNANIE, contest SPOJPL. By bartekpl1997 (), 2020-06-22 15:29:57.

    #include <iostream>
    void delta(float a,float b,float c){
        float delta =b* b - 4 * a * c;
        if (delta > 0) { std::cout << '2' << std::endl; }
        else if(delta==0){ std::cout << '1' << std::endl; }
        else if (delta < 0) { std::cout << '0' << std::endl; }
    }
    int main()
    {
        float a, b, c;
        while (std::cin >> a >> b >> c) { delta(a, b, c); }
        return 0;
    }
     