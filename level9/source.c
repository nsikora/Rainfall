#include <string.h>
class N {
    char    _str[64];
    int     _nb;
    public:
        N(int nb) {
            _nb = nb;
        }
        void    *setAnnotation(char *str) {
            int len = strlen(str);
            return (memcpy(this->_str, str, len))
        }
        virtual void    operator+(N *n) {
            return(this->_nb + n->_nb);
        }
        virtual void    operator-(N *n) {
            return(n->_nb -this->_nb); 
        }
}
int main(int ac, char ** av) {
    if (ac < 2)
        _exit(1);
    
    N *tmp1 = new N(5);
    N *tmp2 = new N(6);
    tmp1->setAnnotation(av[1]);
    tmp2->operator+(tmp1);          //  ->  mov (%eax),%eax .. mov (%eax),%edx
    return (0);
}
