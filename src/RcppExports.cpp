// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// nn2_cpp
List nn2_cpp(NumericMatrix data, NumericMatrix query, const int k, const double eps, const double radius);
RcppExport SEXP _RANN2_nn2_cpp(SEXP dataSEXP, SEXP querySEXP, SEXP kSEXP, SEXP epsSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type query(querySEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< const double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(nn2_cpp(data, query, k, eps, radius));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_class_WANN();

static const R_CallMethodDef CallEntries[] = {
    {"_RANN2_nn2_cpp", (DL_FUNC) &_RANN2_nn2_cpp, 5},
    {"_rcpp_module_boot_class_WANN", (DL_FUNC) &_rcpp_module_boot_class_WANN, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RANN2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
