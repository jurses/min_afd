#include "estado.hpp"
namespace CYA{
	estado_t::estado_t(void){}
	
	void estado_t::dar_id(int id){
		id_=id;
	}

	int estado_t::obt_id(void){
		return id_;
	}

	estado_t* estado_t::obt_sig(char a){
		return trans[a];
	}

	void estado_t::estoy_muerto(void){
		if(!acepta_)
			if(trans.trans_vacio())
				muerte_ = true;
			else if(trans.trans_simismo())
				muerte_ = true;				
	}
}
