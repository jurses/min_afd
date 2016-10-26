#ifndef _TRANSICION_H_
#define _TRANSICION_H_
#include "estado.hpp"
#include <map>
namespace CYA{
    class transicion_t{
        private:
            std::map<char, estado_t*> est_trans_;
            estado_t* est_orig_;
        public:
            transicion_t(void);
            estado_t* obt_estado(char);
            void dar_estado(char, estado_t*);
            bool trans_vacio(void);
            bool trans_simismo(void);
    };
}
#endif  // _TRANSICION_H_
