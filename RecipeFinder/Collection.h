#ifndef COLLECTION_H
#define COLLECTION_H
#include <vector>
#include <fstream>
#include "Reciple.h"
#include <iostream>

class Collection
{
    private:
        std::vector<Reciple*> m_reciples;
    public:
        void file(Reciple& reciple) const;
        void search(Reciple& reciple);
        void save(Reciple& reciple); 
};




#endif //COLLECTION_H