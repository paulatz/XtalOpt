/**********************************************************************
  GULPOptimizer - Tools to interface with GULP

  Copyright (C) 2009-2010 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#ifndef GULPOPTIMIZER_H
#define GULPOPTIMIZER_H

#include <globalsearch/optimizer.h>

#include <QObject>

namespace GlobalSearch {
  class Structure;
  class OptBase;
  class Optimizer;
}

/*
 * This optimizer is of little utility beyond simple testing. It is
 * deprecated and will soon be removed.
 */

namespace GAPC {
  class OpenBabelOptimizer : public GlobalSearch::Optimizer
  {
    Q_OBJECT

   public:
    OpenBabelOptimizer(GlobalSearch::OptBase *parent,
                       const QString &filename = "");
  };

} // end namespace GAPC

#endif
