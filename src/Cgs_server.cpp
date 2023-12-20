#include "Cgs_server.h"

grpc::Status cgs::Cgs_server::GetPointSet(
  grpc::ServerContext *  context,
  const Point_set_query *request,
  Point_set *            response
) {
  return Service::GetPointSet(context, request, response);
}
