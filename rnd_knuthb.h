#include "defs.h"
#include <MiscCPP/m_limits.h>
#include <random>

class RndKnuthB : public std::knuth_b {
public:
    RndKnuthB( std::knuth_b::result_type __sd) : std::knuth_b(__sd) {
    }
    static TMRND_RESULT max() {
        return MLimits<TMRND_RESULT>::max();
    }
    TMRND_RESULT operator()() {
        return static_cast<TMRND_RESULT>( std::knuth_b::operator ()() );
    }
    TMRND_RESULT range(CMRND_RESULT _min, CMRND_RESULT _max) {
        return (*this)() % (_max - _min + 1) + _min;
    }
    TMRND_RESULT range(CMRND_RESULT _max) {
        return range(0,_max);
    }
    //Get float between <_min,_max>
    TMRND_FLOAT getFloat(CMRND_FLOAT _min, CMRND_FLOAT _max) {
        return ( _max - _min ) * (*this)() / max() + _min;
    }
    //Get float between <0,_max>
    TMRND_FLOAT getFloat(CMRND_FLOAT _max=1) {
        return getFloat(0,_max);
    }

};


