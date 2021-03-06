#ifndef TOOLS_SOCKETCAN_CAN_EXPORTER_H
#define TOOLS_SOCKETCAN_CAN_EXPORTER_H

#include "GenericRecordExporter.h"

#include "CANRecord.h"
#include "CommonOptions.h"
#include "FileInfo.h"

namespace mdf::tools::socketcan {

  class SocketCAN_CAN_Exporter : public tools::shared::GenericRecordExporter<CANRecord> {
  public:
    explicit SocketCAN_CAN_Exporter(std::ostream &output, FileInfo const &fileInfo,
                                    tools::shared::DisplayTimeFormat displayLocalTime);

    void writeHeader() override;

    void writeRecord(CANRecord const& record) override;

  private:
    tools::shared::DisplayTimeFormat displayLocalTime;
    FileInfo const &fileInfo;
  };

}
#endif //TOOLS_SOCKETCAN_CAN_EXPORTER_H
