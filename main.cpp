#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    
    int *b = new int[N_ELEMENTS];//Hianyzik az alulvonas

    std::cout << "1-100 ertekek duplazasa" << std::endl;    // Nincsen pontosvesszo a sor vegen, rossz aposztrof  
    
    for (int i = 0; i < N_ELEMENTS; i++)// csak a for ciklus kezdoerteke van
                                        // 0-tól 99-ig duplaz... 1től 100-ig lenne helyes    
    {
    
         b[i] = (i + 1) * 2;
    }
    
    for (int i = 0; i < N_ELEMENTS; i++)// a ciklus vezerlo hibas, mindig hamis lesz az eredmenye, igy nem lep be a ciklusba
    {
     
        std::cout << "Ertek:" << b[i] << std::endl; // Nem irjuk ki az erteket, es hianyzik a pontosvesszo  
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//nincs kezdoerteke az atlag valtozonak
    
    for (int i = 0; i < N_ELEMENTS; i++)//az N_ELEMENTS utan ; kell nem pedig vesszo
    {
     
        atlag += b[i];// hianyzik egy pontosvesszo   
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
