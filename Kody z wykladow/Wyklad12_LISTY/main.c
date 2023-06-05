#include <stdio.h>
#include <stdlib.h>
//Listy jednokierunkowe – jest to pewna złożona konstrukcja, która w sposób elastyczny pozwala nam trzymać elementy określonego typu.
//W odróżnieniu od tablic nie określamy z góry jego rozmiaru, więc z punktu widzenia programisty konstrukcja jest bardziej bezpieczna.


//podwalina listy:
//struktura o nazwie element
struct element
{
    //element w typie int
    int i;

    //element bedacy wskaznikiem na ten sam typ o nazwie next (bedziemy go nazywac nastepnikiem)
    struct element * next;
};



