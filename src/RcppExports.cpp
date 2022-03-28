// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpparma_dotproduct
double rcpparma_dotproduct(std::vector<double> ab, std::vector<double> ac);
RcppExport SEXP _JFM_rcpparma_dotproduct(SEXP abSEXP, SEXP acSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type ab(abSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ac(acSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpparma_dotproduct(ab, ac));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_crossProd
std::vector<double> rcpp_crossProd(std::vector<double> ab, std::vector<double> ac);
RcppExport SEXP _JFM_rcpp_crossProd(SEXP abSEXP, SEXP acSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type ab(abSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ac(acSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_crossProd(ab, ac));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_wildfire_search
arma::mat Rcpp_wildfire_search(double tol_ang, arma::mat list_of_normals, arma::mat list_neighbours);
RcppExport SEXP _JFM_Rcpp_wildfire_search(SEXP tol_angSEXP, SEXP list_of_normalsSEXP, SEXP list_neighboursSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tol_ang(tol_angSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type list_of_normals(list_of_normalsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type list_neighbours(list_neighboursSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_wildfire_search(tol_ang, list_of_normals, list_neighbours));
    return rcpp_result_gen;
END_RCPP
}
// compute_triangle_area_rcpp
std::vector<double> compute_triangle_area_rcpp(arma::mat tr_vertex_coords);
RcppExport SEXP _JFM_compute_triangle_area_rcpp(SEXP tr_vertex_coordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tr_vertex_coords(tr_vertex_coordsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_triangle_area_rcpp(tr_vertex_coords));
    return rcpp_result_gen;
END_RCPP
}
// compute_plane_area_rcpp
std::vector<double> compute_plane_area_rcpp(arma::mat tr_area, std::vector<int> id_fam_no_zero);
RcppExport SEXP _JFM_compute_plane_area_rcpp(SEXP tr_areaSEXP, SEXP id_fam_no_zeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type tr_area(tr_areaSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type id_fam_no_zero(id_fam_no_zeroSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_plane_area_rcpp(tr_area, id_fam_no_zero));
    return rcpp_result_gen;
END_RCPP
}
// least_square_plane_rcpp
NumericVector least_square_plane_rcpp(NumericMatrix PointsXYZ);
RcppExport SEXP _JFM_least_square_plane_rcpp(SEXP PointsXYZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type PointsXYZ(PointsXYZSEXP);
    rcpp_result_gen = Rcpp::wrap(least_square_plane_rcpp(PointsXYZ));
    return rcpp_result_gen;
END_RCPP
}
// find_triangles_rcpp
std::vector<int> find_triangles_rcpp(NumericMatrix indici_tr, int r);
RcppExport SEXP _JFM_find_triangles_rcpp(SEXP indici_trSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indici_tr(indici_trSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(find_triangles_rcpp(indici_tr, r));
    return rcpp_result_gen;
END_RCPP
}
// find_neighbours_rcpp
NumericMatrix find_neighbours_rcpp(NumericMatrix indici_tr);
RcppExport SEXP _JFM_find_neighbours_rcpp(SEXP indici_trSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type indici_tr(indici_trSEXP);
    rcpp_result_gen = Rcpp::wrap(find_neighbours_rcpp(indici_tr));
    return rcpp_result_gen;
END_RCPP
}
// compute_plane_normal
arma::mat compute_plane_normal(arma::mat it_id_plane_points, arma::mat vb_facets, std::vector<int> id_fam_no_zero);
RcppExport SEXP _JFM_compute_plane_normal(SEXP it_id_plane_pointsSEXP, SEXP vb_facetsSEXP, SEXP id_fam_no_zeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type it_id_plane_points(it_id_plane_pointsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type vb_facets(vb_facetsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type id_fam_no_zero(id_fam_no_zeroSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_plane_normal(it_id_plane_points, vb_facets, id_fam_no_zero));
    return rcpp_result_gen;
END_RCPP
}
// test_rcpp
NumericMatrix test_rcpp(arma::mat it_id_plane_points, arma::mat vb_facets, std::vector<int> id_fam_no_zero);
RcppExport SEXP _JFM_test_rcpp(SEXP it_id_plane_pointsSEXP, SEXP vb_facetsSEXP, SEXP id_fam_no_zeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type it_id_plane_points(it_id_plane_pointsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type vb_facets(vb_facetsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type id_fam_no_zero(id_fam_no_zeroSEXP);
    rcpp_result_gen = Rcpp::wrap(test_rcpp(it_id_plane_points, vb_facets, id_fam_no_zero));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_JFM_rcpparma_dotproduct", (DL_FUNC) &_JFM_rcpparma_dotproduct, 2},
    {"_JFM_rcpp_crossProd", (DL_FUNC) &_JFM_rcpp_crossProd, 2},
    {"_JFM_Rcpp_wildfire_search", (DL_FUNC) &_JFM_Rcpp_wildfire_search, 3},
    {"_JFM_compute_triangle_area_rcpp", (DL_FUNC) &_JFM_compute_triangle_area_rcpp, 1},
    {"_JFM_compute_plane_area_rcpp", (DL_FUNC) &_JFM_compute_plane_area_rcpp, 2},
    {"_JFM_least_square_plane_rcpp", (DL_FUNC) &_JFM_least_square_plane_rcpp, 1},
    {"_JFM_find_triangles_rcpp", (DL_FUNC) &_JFM_find_triangles_rcpp, 2},
    {"_JFM_find_neighbours_rcpp", (DL_FUNC) &_JFM_find_neighbours_rcpp, 1},
    {"_JFM_compute_plane_normal", (DL_FUNC) &_JFM_compute_plane_normal, 3},
    {"_JFM_test_rcpp", (DL_FUNC) &_JFM_test_rcpp, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_JFM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
