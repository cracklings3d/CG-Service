#ifndef CGS_SERVER_H
#define CGS_SERVER_H

#include <grpc++/grpc++.h>
#include <service.pb.h>
#include <service.grpc.pb.h>


namespace cgs {
class Cgs_server final : public Point_set_service::Service {
  grpc::Status GetPointSet(
    grpc::ServerContext *  context,
    const Point_set_query *request,
    Point_set *            response) override;
};
}


#endif //CGS_SERVER_H
