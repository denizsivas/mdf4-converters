#ifndef MDFSIMPLECONVERTERS_DTBLOCKRAW_H
#define MDFSIMPLECONVERTERS_DTBLOCKRAW_H

#include "DTBlock.h"

namespace mdf {

  struct DTBlockRaw : DTBlock {
    uint8_t const *operator[](std::size_t index) override;
  protected:
    bool saveBlockData(uint8_t *dataPtr) override;
  };

}

#endif //MDFSIMPLECONVERTERS_DTBLOCKRAW_H
