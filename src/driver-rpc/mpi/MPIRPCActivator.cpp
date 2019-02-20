/*******************************************************************************
 * Copyright (c) 2017 UT-Battelle, LLC.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompanies this
 * distribution. The Eclipse Public License is available at
 * http://www.eclipse.org/legal/epl-v10.html and the Eclipse Distribution
 *License is available at https://eclipse.org/org/documents/edl-v10.php
 *
 * Contributors:
 *   Alexander J. McCaskey - initial API and implementation
 *******************************************************************************/
#include "MPIClient.hpp"
#include "MPIServer.hpp"

#include "cppmicroservices/BundleActivator.h"
#include "cppmicroservices/BundleContext.h"

#include <memory>
#include <set>

using namespace cppmicroservices;

namespace {

/**
 */
class US_ABI_LOCAL MPIRPCActivator : public BundleActivator {

public:
  MPIRPCActivator() {}

  /**
   */
  void Start(BundleContext context) {

    auto s = std::make_shared<exatn::rpc::mpi::MPIServer>();
    context.RegisterService<exatn::rpc::DriverServer>(s);

    auto c = std::make_shared<exatn::rpc::mpi::MPIClient>();
    context.RegisterService<exatn::rpc::DriverClient>(c);
  }

  /**
   */
  void Stop(BundleContext /*context*/) {}
};

} // namespace

CPPMICROSERVICES_EXPORT_BUNDLE_ACTIVATOR(MPIRPCActivator)