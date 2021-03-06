% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{compute_plane_area_rcpp}
\alias{compute_plane_area_rcpp}
\title{returns the sum of the area of facets belonging to the same plane}
\arguments{
\item{tr_area}{a matrix with the first column facet area and second column the ID of plane it belows}

\item{id_fam_no_zero}{the list of planes ID}
}
\value{
the sum of the area of facets belonging to the same plane given \code{tr_area} and \code{id_fam_no_zero}
}
\description{
returns the sum of the area of facets belonging to the same plane
}
