/** ExaTN:: Reconstructor of an approximate tensor network expansion from a given tensor network expansion
REVISION: 2020/01/24

Copyright (C) 2018-2020 Dmitry I. Lyakh (Liakh)
Copyright (C) 2018-2020 Oak Ridge National Laboratory (UT-Battelle) **/

#include "reconstructor.hpp"

#include <cassert>

namespace exatn{

TensorNetworkReconstructor::TensorNetworkReconstructor(std::shared_ptr<TensorExpansion> expansion,
                                                       std::shared_ptr<TensorExpansion> approximant,
                                                       double tolerance):
 expansion_(expansion), approximant_(approximant), tolerance_(tolerance), fidelity_(0.0)
{
}


std::shared_ptr<TensorExpansion> TensorNetworkReconstructor::getSolution(double * fidelity)
{
 if(fidelity_ == 0.0) return std::shared_ptr<TensorExpansion>(nullptr);
 if(fidelity != nullptr) *fidelity = fidelity_;
 return approximant_;
}


bool TensorNetworkReconstructor::reconstruct(double * fidelity)
{
 assert(fidelity != nullptr);
 //`Finish
 *fidelity = fidelity_;
 return true;
}

} //namespace exatn
