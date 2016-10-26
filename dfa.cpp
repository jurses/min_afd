#include "dfa.hpp"
namespace CYA{
	dfa_t::dfa_t(void){
	}

	dfa_t::lee(std::ifstream& ifs){
        if(!ifs.is_open()){
            std::cerr << "Error al abrir el archivo" << std::endl;
            exit(EXIT_FAILURE);
        }
        ifs >> n_est_;
        cjt_est_.resize(n_est_);
        for()
        ifs >> id_inic_;

	}
}
