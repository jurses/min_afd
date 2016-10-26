#ifndef _ESTADO_H_
#define _ESTADO_H_
#include "transicion.hpp"
namespace CYA{
    class estado_t{
        private:
            int id_;
            transicion_t trans(this);
        public:
            estado_t(void);

    };
}
#endif  // _ESTADO_H_
