#ifndef _ESTADO_H_
#define _ESTADO_H_
#include "transicion.hpp"
namespace CYA{
    class estado_t{
        private:
            int id_;
            transicion_t trans(this);
			bool acepta_;
			bool muerte_;
        public:
            estado_t(void);
			int obt_id(void);
			estado_t* obt_sig(char);
			void estoy_muerto(void);
    };
}
#endif  // _ESTADO_H_
