// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mqtt_version
std::string mqtt_version();
RcppExport SEXP _mqtt_mqtt_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(mqtt_version());
    return rcpp_result_gen;
END_RCPP
}
// mqtt_init
bool mqtt_init();
RcppExport SEXP _mqtt_mqtt_init() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(mqtt_init());
    return rcpp_result_gen;
END_RCPP
}
// mqtt_free
bool mqtt_free();
RcppExport SEXP _mqtt_mqtt_free() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(mqtt_free());
    return rcpp_result_gen;
END_RCPP
}
// subscribe_
void subscribe_(std::string host, int port, int keepalive, std::string client_id, std::string topic, int qos, Rcpp::Function connection_cb, Rcpp::Function message_cb);
RcppExport SEXP _mqtt_subscribe_(SEXP hostSEXP, SEXP portSEXP, SEXP keepaliveSEXP, SEXP client_idSEXP, SEXP topicSEXP, SEXP qosSEXP, SEXP connection_cbSEXP, SEXP message_cbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    Rcpp::traits::input_parameter< int >::type port(portSEXP);
    Rcpp::traits::input_parameter< int >::type keepalive(keepaliveSEXP);
    Rcpp::traits::input_parameter< std::string >::type client_id(client_idSEXP);
    Rcpp::traits::input_parameter< std::string >::type topic(topicSEXP);
    Rcpp::traits::input_parameter< int >::type qos(qosSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type connection_cb(connection_cbSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type message_cb(message_cbSEXP);
    subscribe_(host, port, keepalive, client_id, topic, qos, connection_cb, message_cb);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mqtt_mqtt_version", (DL_FUNC) &_mqtt_mqtt_version, 0},
    {"_mqtt_mqtt_init", (DL_FUNC) &_mqtt_mqtt_init, 0},
    {"_mqtt_mqtt_free", (DL_FUNC) &_mqtt_mqtt_free, 0},
    {"_mqtt_subscribe_", (DL_FUNC) &_mqtt_subscribe_, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_mqtt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
