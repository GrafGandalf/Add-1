#include <iostream>
#include <algorithm>

int main()
{
    int Q1, P1, Q2, P2, A, minA, minItog = 2147483647, SUM=0, G, D=0, i = 0, i2 = 0;
    std::cin >> Q1 >> P1 >> Q2 >> P2 >> A;
    
    if (Q2 > Q1)
    {
        std::swap(Q2, Q1); std::swap(P2, P1);
    }
    
    minA = A;
    while (minA > 0)
    {
        i++; minA -= Q1;
    }
    
    G = i;
    while (G != 0)
    {
        SUM = G * P1 + D * P2;
        minItog = std::min(SUM, minItog);
        G--;
        while (G * Q1 + D * Q2 < A)
        {
            D++;
        }
    }
    while (i2 * Q2 < A)
    {
        i2++;
    }
    
    minItog = std::min(i2*P2, minItog);
    std::cout << '\n' << minItog;
}
