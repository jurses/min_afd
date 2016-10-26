#ifndef _DFA_H_
#define _DFA_H_
#include <vector>
#include <ifstream>
#include <cstdlib>
#include "estado.hpp"
namespace CYA{
	class dfa_t{
		private:
			void eliminar_dfa(void);
			std::vector<estado_t*> cjt_est_;
			estado_t* est_inic_;
			int n_est_;
			int id_inic_;
		public:
			dfa_t(void);
			void lee(std::ifstream&);
			~dfa_t(void);
	};
}
#endif	// _DFA_H_
