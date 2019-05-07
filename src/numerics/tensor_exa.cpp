/** ExaTN::Numerics: ExaTENSOR Tensor
REVISION: 2019/05/07

Copyright (C) 2018-2019 Dmitry I. Lyakh (Liakh)
Copyright (C) 2018-2019 Oak Ridge National Laboratory (UT-Battelle) **/

#include "tensor_exa.hpp"

#include <assert.h>

namespace exatn{

namespace numerics{

TensorExa::TensorExa(const std::string & name,
                     const TensorShape & shape,
                     const TensorSignature & signature):
Tensor(name,shape,signature)
{
}

TensorExa::TensorExa(const std::string & name,
                     const TensorShape & shape):
Tensor(name,shape)
{
}


void TensorExa::activate(const std::string & id)
{
 assert(exasymbol_.length() == 0 && id.length() > 0);
 exasymbol_ = id;
 return;
}

} //namespace numerics

} //namespace exatn
