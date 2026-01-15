#ifndef CAPITALCITY_H
#define CAPITALCITY_H
#include "../City.h"

namespace World {
    class CapitalCity : public City {
        private:

        public:
            void visitLandMark() override;
            void goShopping() override;
            

    };
}

#endif
