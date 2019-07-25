/** ExaTN:: Tensor Runtime: Tensor graph executor: Lazy
REVISION: 2019/07/24

Copyright (C) 2018-2019 Dmitry Lyakh, Tiffany Mintz, Alex McCaskey
Copyright (C) 2018-2019 Oak Ridge National Laboratory (UT-Battelle)

Rationale:

**/

#ifndef EXATN_RUNTIME_LAZY_GRAPH_EXECUTOR_HPP_
#define EXATN_RUNTIME_LAZY_GRAPH_EXECUTOR_HPP_

#include "tensor_graph_executor.hpp"

#include <memory>

namespace exatn {
namespace runtime {

class LazyGraphExecutor : public TensorGraphExecutor {

public:

  /** Traverses the DAG and executes all its nodes. **/
  void execute(TensorGraph & dag) override;

protected:

};

} //namespace runtime
} //namespace exatn

#endif //EXATN_RUNTIME_LAZY_GRAPH_EXECUTOR_HPP_