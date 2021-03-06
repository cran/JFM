# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' @name rcpparma_dotproduct
#' @title returns the inner product of ab and ac 
#'
#' @param ab        a 3D numeric vector  
#' @param ac        a 3D numeric vector 
#' @return  the dot product of \code{ab} and \code{ac}
#' @examples
#' a1<-c(1,2,3)
#' a2<-c(3,4,5)
#' rcpparma_dotproduct(a1,a2)
#' @export
NULL

#' @name compute_triangle_area_rcpp
#' @title returns the area of a mesh facet
#'
#' @param tr_vertex_coords        A 3x3 matrix of the coordinates of facet vertexes
NULL

#' @name compute_plane_area_rcpp
#' @title returns the sum of the area of facets belonging to the same plane
#'
#' @param tr_area        a matrix with the first column facet area and second column the ID of plane it belows
#' @param id_fam_no_zero        the list of planes ID
#' @return the sum of the area of facets belonging to the same plane given \code{tr_area} and \code{id_fam_no_zero}
NULL

rcpparma_dotproduct <- function(ab, ac) {
    .Call(`_JFM_rcpparma_dotproduct`, ab, ac)
}

#' @name rcpp_crossProd
#' @title returns the outer product of ab and ac 
#'
#' @param ab        a 3D numeric vector  
#' @param ac        a 3D numeric vector
#' @return  the outer product of \code{ab} and \code{ac}
#' @examples
#' a1<-c(1,2,3)
#' a2<-c(3,4,5)
#' rcpp_crossProd(a1,a2)
#' @export
rcpp_crossProd <- function(ab, ac) {
    .Call(`_JFM_rcpp_crossProd`, ab, ac)
}

#' @name Rcpp_wildfire_search
#' @title returns a matrix with the 3 components of each face normal vector; the 4th column is the ID of the plane each facet belongs to
#' the 5th colum the area of each facet
#' @param tol_ang        the maximum angle between facets normal belonging to the same plane
#' @param list_of_normals        the matrix of the components of each facet normal vector
#' @param list_neighbours        the matrix of facets ID neighbours of each target facet
#' @return the IDs of same joint facets given a \code{tol_angle} between facets normal and 3Dmesh \code{list_of_normals} and \code{list_neighbours} 
#' @examples \dontrun{neighbours<-find_neighbours_rcpp(indici_tri)
#' normals<-compute_facets_normal(vertici_tr,indici_tri)
#' tol_ang<-7
#' normali_recalc<-Rcpp_wildfire_search(tol_ang,normals[,1:3],neighbours)}
#' @export
Rcpp_wildfire_search <- function(tol_ang, list_of_normals, list_neighbours) {
    .Call(`_JFM_Rcpp_wildfire_search`, tol_ang, list_of_normals, list_neighbours)
}

compute_triangle_area_rcpp <- function(tr_vertex_coords) {
    .Call(`_JFM_compute_triangle_area_rcpp`, tr_vertex_coords)
}

#'
#' @export
compute_plane_area_rcpp <- function(tr_area, id_fam_no_zero) {
    .Call(`_JFM_compute_plane_area_rcpp`, tr_area, id_fam_no_zero)
}

#' @name least_square_plane_rcpp
#' @title returns the coefficients of the least square plane and the relative mean square error
#'
#' @param PointsXYZ        matrix of coordinates of point
#' @return returns the coefficients of the least square plane and the relative mean square error of a set of 3d points \code{PointsXYZ} 
#' @examples
#' list_xyz<-matrix(data = c(-10.0, -10.0, -15.0 ,10.0, -10.0,
#' -5.0, -10.0, 10.0, 5.0, 10.0, 10.0 ,15.0),
#' nrow = 4,ncol = 3, byrow = TRUE)
#' least_square_plane_rcpp(list_xyz)
#' @export
least_square_plane_rcpp <- function(PointsXYZ) {
    .Call(`_JFM_least_square_plane_rcpp`, PointsXYZ)
}

#' @name find_triangles_rcpp
#' @title returns the row indexes of the neighbour facets of a target facet (nested in findNeighbourFacets R function)
#'
#' @param indici_tr matrix of facets ID the "it" property of a mesh3D
#' @param r index of the row of the target facet
#' @return returns the row indexes of the neighbour facets of the facet at \code{r} row of \code{indici_tr} facet indexes matrix
#' @examples 
#' indici_tri<-matrix(data = c(1, 2, 3 ,5, 6,
#' 3, 2, 3, 5,7, 8 ,1),
#' nrow = 4,ncol = 3, byrow = TRUE)
#' row_index<-1
#' find_triangles_rcpp (indici_tri,row_index)
#' @export
find_triangles_rcpp <- function(indici_tr, r) {
    .Call(`_JFM_find_triangles_rcpp`, indici_tr, r)
}

#' @name find_neighbours_rcpp
#' @title This function finds the  rows IDs of neighbours of each mesh facet. It requires a list of facets indexes corresponding to the "it" property of mesh3d object
#'
#' @param indici_tr        matrix of facets ID the "it" property of a mesh3D
#' @return  this function returns the  rows IDs of neighbours of each mesh facet given a list of facets indexes \code{indici_tri}
#' @examples
#' indici_tri<-matrix(data = c(1, 2, 3 ,5, 6,
#' 3, 2, 3, 5,7, 8 ,1),
#' nrow = 4,ncol = 3, byrow = TRUE)  
#' find_neighbours_rcpp(indici_tri)
#' @export
find_neighbours_rcpp <- function(indici_tr) {
    .Call(`_JFM_find_neighbours_rcpp`, indici_tr)
}

#' @name compute_plane_normal
#' @title returns the least square plane from the vertexes of facets of the same plane (nested in calculate_joints function)
#'
#' @param it_id_plane_points        the "it"property of mesh object binded with ID column of widfire search 
#' @param id_fam_no_zero            the list of planes ID
#' @param vb_facets                 the vb property of mesh object (vertexes coordinates)
#' @return returns the least square plane from the vertexes of facets of the same plane given \code{it_id_plane_points}
#'  the list of planes ID \code{id_fam_no_zero}, the matrix of vertexes coordinates \code{vb_facets}
#' @example .\inst\test\example.R
#' @export
compute_plane_normal <- function(it_id_plane_points, vb_facets, id_fam_no_zero) {
    .Call(`_JFM_compute_plane_normal`, it_id_plane_points, vb_facets, id_fam_no_zero)
}

test_rcpp <- function(it_id_plane_points, vb_facets, id_fam_no_zero) {
    .Call(`_JFM_test_rcpp`, it_id_plane_points, vb_facets, id_fam_no_zero)
}

