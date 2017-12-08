// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// mcd_estimation
Rcpp::List mcd_estimation(arma::vec m, arma::vec Y, arma::mat X, arma::mat Z, arma::mat W, arma::vec start, arma::vec mean, bool trace, bool profile, bool errormsg, bool covonly);
RcppExport SEXP _jmcm_mcd_estimation(SEXP mSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP startSEXP, SEXP meanSEXP, SEXP traceSEXP, SEXP profileSEXP, SEXP errormsgSEXP, SEXP covonlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start(startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type profile(profileSEXP);
    Rcpp::traits::input_parameter< bool >::type errormsg(errormsgSEXP);
    Rcpp::traits::input_parameter< bool >::type covonly(covonlySEXP);
    rcpp_result_gen = Rcpp::wrap(mcd_estimation(m, Y, X, Z, W, start, mean, trace, profile, errormsg, covonly));
    return rcpp_result_gen;
END_RCPP
}
// acd_estimation
Rcpp::List acd_estimation(arma::vec m, arma::vec Y, arma::mat X, arma::mat Z, arma::mat W, arma::vec start, arma::vec mean, bool trace, bool profile, bool errormsg, bool covonly);
RcppExport SEXP _jmcm_acd_estimation(SEXP mSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP startSEXP, SEXP meanSEXP, SEXP traceSEXP, SEXP profileSEXP, SEXP errormsgSEXP, SEXP covonlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start(startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type profile(profileSEXP);
    Rcpp::traits::input_parameter< bool >::type errormsg(errormsgSEXP);
    Rcpp::traits::input_parameter< bool >::type covonly(covonlySEXP);
    rcpp_result_gen = Rcpp::wrap(acd_estimation(m, Y, X, Z, W, start, mean, trace, profile, errormsg, covonly));
    return rcpp_result_gen;
END_RCPP
}
// hpc_estimation
Rcpp::List hpc_estimation(arma::vec m, arma::vec Y, arma::mat X, arma::mat Z, arma::mat W, arma::vec start, arma::vec mean, bool trace, bool profile, bool errormsg, bool covonly);
RcppExport SEXP _jmcm_hpc_estimation(SEXP mSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP startSEXP, SEXP meanSEXP, SEXP traceSEXP, SEXP profileSEXP, SEXP errormsgSEXP, SEXP covonlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type start(startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< bool >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< bool >::type profile(profileSEXP);
    Rcpp::traits::input_parameter< bool >::type errormsg(errormsgSEXP);
    Rcpp::traits::input_parameter< bool >::type covonly(covonlySEXP);
    rcpp_result_gen = Rcpp::wrap(hpc_estimation(m, Y, X, Z, W, start, mean, trace, profile, errormsg, covonly));
    return rcpp_result_gen;
END_RCPP
}