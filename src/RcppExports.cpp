// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// int2bin
std::vector<bool> int2bin(int n);
RcppExport SEXP _scfind_int2bin(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(int2bin(n));
    return rcpp_result_gen;
END_RCPP
}
// eliasFanoCodingCpp
Rcpp::List eliasFanoCodingCpp(NumericVector ids, int l);
RcppExport SEXP _scfind_eliasFanoCodingCpp(SEXP idsSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ids(idsSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(eliasFanoCodingCpp(ids, l));
    return rcpp_result_gen;
END_RCPP
}
// eliasFanoDecodingCpp
NumericVector eliasFanoDecodingCpp(LogicalVector H, LogicalVector L, int m, int l, int ih, int il);
RcppExport SEXP _scfind_eliasFanoDecodingCpp(SEXP HSEXP, SEXP LSEXP, SEXP mSEXP, SEXP lSEXP, SEXP ihSEXP, SEXP ilSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type H(HSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< int >::type ih(ihSEXP);
    Rcpp::traits::input_parameter< int >::type il(ilSEXP);
    rcpp_result_gen = Rcpp::wrap(eliasFanoDecodingCpp(H, L, m, l, ih, il));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scfind_int2bin", (DL_FUNC) &_scfind_int2bin, 1},
    {"_scfind_eliasFanoCodingCpp", (DL_FUNC) &_scfind_eliasFanoCodingCpp, 2},
    {"_scfind_eliasFanoDecodingCpp", (DL_FUNC) &_scfind_eliasFanoDecodingCpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_scfind(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
