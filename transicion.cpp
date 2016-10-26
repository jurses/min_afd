#include "transicion.hpp"
namespace CYA{
    transicion_t::transicion_t(void){}
		
    estado_t* transicion_t::obt_estado(char a){
        return est_trans_[a];
    }

    void dar_estado(char a, estado_t* estado){
        est_trans_[a]=estado;
    }

    bool transicion_t::trans_vacio(void){
        return est_trans_.empty();
    }

    bool transicion_t::trans_simismo(void){
        std::map<char, estado_t*>::iterator it=est_trans_.begin();
        while(it!=est_trans_.end()){
            if(it->second!=est_orig_)
                return false;
            it++;
        }
        return true;
    }
}
