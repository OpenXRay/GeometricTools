// Geometric Tools, LLC
// Copyright (c) 1998-2013
// Distributed under the Boost Software License, Version 1.0.
// http://www.boost.org/LICENSE_1_0.txt
// http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt
//
// File Version: 5.0.5 (2013/03/17)

#ifndef WM5MATHEMATICS_H
#define WM5MATHEMATICS_H

// Algebra
#include "Wm5APoint.h"
#include "Wm5AVector.h"
#include "Wm5BandedMatrix.h"
#include "Wm5GMatrix.h"
#include "Wm5GVector.h"
#include "Wm5HMatrix.h"
#include "Wm5HPlane.h"
#include "Wm5HPoint.h"
#include "Wm5HQuaternion.h"
#include "Wm5Matrix2.h"
#include "Wm5Matrix3.h"
#include "Wm5Matrix4.h"
#include "Wm5Polynomial1.h"
#include "Wm5Quaternion.h"
#include "Wm5Vector2.h"
#include "Wm5Vector3.h"
#include "Wm5Vector4.h"

// Approximation/2D
#include "Wm5ApprCircleFit2.h"
#include "Wm5ApprEllipseByArcs2.h"
#include "Wm5ApprEllipseFit2.h"
#include "Wm5ApprGaussPointsFit2.h"
#include "Wm5ApprLineFit2.h"
#include "Wm5ApprPolynomialFit2.h"
#include "Wm5ApprQuadraticFit2.h"

// Approximation/3D
#include "Wm5ApprCylinderFit3.h"
#include "Wm5ApprEllipsoidFit3.h"
#include "Wm5ApprGaussPointsFit3.h"
#include "Wm5ApprGreatCircleFit3.h"
#include "Wm5ApprLineFit3.h"
#include "Wm5ApprParaboloidFit3.h"
#include "Wm5ApprPlaneFit3.h"
#include "Wm5ApprPolynomialFit3.h"
#include "Wm5ApprQuadraticFit3.h"
#include "Wm5ApprSphereFit3.h"

// Approximation/Miscellaneous
#include "Wm5ApprPolyFit2.h"
#include "Wm5ApprPolyFit3.h"
#include "Wm5ApprPolyFit4.h"
#include "Wm5ApprPolynomialFit4.h"

// Base
#include "Wm5BitHacks.h"
#include "Wm5Float1.h"
#include "Wm5Float2.h"
#include "Wm5Float3.h"
#include "Wm5Float4.h"
#include "Wm5Math.h"

// ComputationalGeometry
#include "Wm5ConvexHull.h"
#include "Wm5ConvexHull1.h"
#include "Wm5ConvexHull2.h"
#include "Wm5ConvexHull3.h"
#include "Wm5Delaunay.h"
#include "Wm5Delaunay1.h"
#include "Wm5Delaunay2.h"
#include "Wm5Delaunay3.h"
#include "Wm5IncrementalDelaunay2.h"
#include "Wm5TriangulateEC.h"

// Containment/2D
#include "Wm5ContBox2.h"
#include "Wm5ContEllipse2.h"
#include "Wm5ContEllipse2MinCR.h"
#include "Wm5ContMinBox2.h"
#include "Wm5ContMinCircle2.h"
#include "Wm5ContPointInPolygon2.h"
#include "Wm5ContScribeCircle2.h"
#include "Wm5ContSeparatePoints2.h"

// Containment/3D
#include "Wm5ContBox3.h"
#include "Wm5ContCapsule3.h"
#include "Wm5ContCylinder3.h"
#include "Wm5ContEllipsoid3.h"
#include "Wm5ContEllipsoid3MinCR.h"
#include "Wm5ContLozenge3.h"
#include "Wm5ContMinBox3.h"
#include "Wm5ContMinSphere3.h"
#include "Wm5ContPointInPolyhedron3.h"
#include "Wm5ContScribeCircle3Sphere3.h"
#include "Wm5ContSeparatePoints3.h"
#include "Wm5ContSphere3.h"

// CurvesSurfacesVolumes
#include "Wm5BSplineBasis.h"
#include "Wm5BSplineCurveFit.h"
#include "Wm5BSplineFitBasis.h"
#include "Wm5BSplineReduction.h"
#include "Wm5NaturalSpline1.h"

// Curves/2D
#include "Wm5BSplineCurve2.h"
#include "Wm5BezierCurve2.h"
#include "Wm5CubicPolynomialCurve2.h"
#include "Wm5Curve2.h"
#include "Wm5SingleCurve2.h"
#include "Wm5MultipleCurve2.h"
#include "Wm5NaturalSpline2.h"
#include "Wm5NURBSCurve2.h"
#include "Wm5PolynomialCurve2.h"
#include "Wm5TCBSpline2.h"

// Curves/3D
#include "Wm5BSplineCurve3.h"
#include "Wm5BezierCurve3.h"
#include "Wm5CubicPolynomialCurve3.h"
#include "Wm5Curve3.h"
#include "Wm5SingleCurve3.h"
#include "Wm5MultipleCurve3.h"
#include "Wm5NaturalSpline3.h"
#include "Wm5NURBSCurve3.h"
#include "Wm5PolynomialCurve3.h"
#include "Wm5TCBSpline3.h"

// Curves/Geodesics
#include "Wm5BSplineGeodesic.h"
#include "Wm5EllipsoidGeodesic.h"
#include "Wm5RiemannianGeodesic.h"

// Curves/Surfaces
#include "Wm5BSplineRectangle.h"
#include "Wm5BSplineSurfaceFit.h"
#include "Wm5ImplicitSurface.h"
#include "Wm5NURBSRectangle.h"
#include "Wm5ParametricSurface.h"
#include "Wm5QuadricSurface.h"
#include "Wm5Surface.h"

// Curves/Volumes
#include "Wm5BSplineVolume.h"

// Distance
#include "Wm5Distance.h"

// Distance/2D
#include "Wm5DistLine2Line2.h"
#include "Wm5DistLine2Ray2.h"
#include "Wm5DistLine2Segment2.h"
#include "Wm5DistPoint2Box2.h"
#include "Wm5DistPoint2Ellipse2.h"
#include "Wm5DistPoint2Hyperbola2.h"
#include "Wm5DistPoint2Line2.h"
#include "Wm5DistPoint2Ray2.h"
#include "Wm5DistPoint2Segment2.h"
#include "Wm5DistRay2Ray2.h"
#include "Wm5DistRay2Segment2.h"
#include "Wm5DistSegment2Segment2.h"

// Distance/3D
#include "Wm5DistCircle3Circle3.h"
#include "Wm5DistLine3Box3.h"
#include "Wm5DistLine3Circle3.h"
#include "Wm5DistLine3Line3.h"
#include "Wm5DistLine3Ray3.h"
#include "Wm5DistLine3Rectangle3.h"
#include "Wm5DistLine3Segment3.h"
#include "Wm5DistLine3Triangle3.h"
#include "Wm5DistPoint3Box3.h"
#include "Wm5DistPoint3Circle3.h"
#include "Wm5DistPoint3Ellipsoid3.h"
#include "Wm5DistPoint3Frustum3.h"
#include "Wm5DistPoint3Line3.h"
#include "Wm5DistPoint3Plane3.h"
#include "Wm5DistPoint3Ray3.h"
#include "Wm5DistPoint3Rectangle3.h"
#include "Wm5DistPoint3Segment3.h"
#include "Wm5DistPoint3Triangle3.h"
#include "Wm5DistPoint3Tetrahedron3.h"
#include "Wm5DistRay3Box3.h"
#include "Wm5DistRay3Ray3.h"
#include "Wm5DistRay3Rectangle3.h"
#include "Wm5DistRay3Segment3.h"
#include "Wm5DistRay3Triangle3.h"
#include "Wm5DistRectangle3Rectangle3.h"
#include "Wm5DistSegment3Box3.h"
#include "Wm5DistSegment3Rectangle3.h"
#include "Wm5DistSegment3Segment3.h"
#include "Wm5DistSegment3Triangle3.h"
#include "Wm5DistTriangle3Rectangle3.h"
#include "Wm5DistTriangle3Triangle3.h"

// Interpolation
#include "Wm5IntpAkima1.h"
#include "Wm5IntpAkimaNonuniform1.h"
#include "Wm5IntpAkimaUniform1.h"
#include "Wm5IntpAkimaUniform2.h"
#include "Wm5IntpAkimaUniform3.h"
#include "Wm5IntpBicubic2.h"
#include "Wm5IntpBilinear2.h"
#include "Wm5IntpBSplineUniform.h"
#include "Wm5IntpBSplineUniform1.h"
#include "Wm5IntpBSplineUniform2.h"
#include "Wm5IntpBSplineUniform3.h"
#include "Wm5IntpBSplineUniform4.h"
#include "Wm5IntpBSplineUniformN.h"
#include "Wm5IntpLinearNonuniform2.h"
#include "Wm5IntpLinearNonuniform3.h"
#include "Wm5IntpQdrNonuniform2.h"
#include "Wm5IntpSphere2.h"
#include "Wm5IntpThinPlateSpline2.h"
#include "Wm5IntpThinPlateSpline3.h"
#include "Wm5IntpTricubic3.h"
#include "Wm5IntpTrilinear3.h"
#include "Wm5IntpVectorField2.h"

// Intersection
#include "Wm5Intersector.h"
#include "Wm5Intersector1.h"

// Intersection/2D
#include "Wm5IntrArc2Arc2.h"
#include "Wm5IntrArc2Circle2.h"
#include "Wm5IntrBox2Box2.h"
#include "Wm5IntrBox2Circle2.h"
#include "Wm5IntrCircle2Circle2.h"
#include "Wm5IntrEllipse2Ellipse2.h"
#include "Wm5IntrLine2Arc2.h"
#include "Wm5IntrLine2Box2.h"
#include "Wm5IntrLine2Circle2.h"
#include "Wm5IntrLine2Line2.h"
#include "Wm5IntrLine2Ray2.h"
#include "Wm5IntrLine2Segment2.h"
#include "Wm5IntrLine2Triangle2.h"
#include "Wm5IntrRay2Arc2.h"
#include "Wm5IntrRay2Box2.h"
#include "Wm5IntrRay2Circle2.h"
#include "Wm5IntrRay2Ray2.h"
#include "Wm5IntrRay2Segment2.h"
#include "Wm5IntrRay2Triangle2.h"
#include "Wm5IntrSegment2Arc2.h"
#include "Wm5IntrSegment2Box2.h"
#include "Wm5IntrSegment2Circle2.h"
#include "Wm5IntrSegment2Segment2.h"
#include "Wm5IntrSegment2Triangle2.h"
#include "Wm5IntrTriangle2Triangle2.h"

// Intersection/3D
#include "Wm5IntrBox3Box3.h"
#include "Wm5IntrBox3Frustum3.h"
#include "Wm5IntrBox3Sphere3.h"
#include "Wm5IntrCapsule3Capsule3.h"
#include "Wm5IntrCircle3Plane3.h"
#include "Wm5IntrEllipsoid3Ellipsoid3.h"
#include "Wm5IntrHalfspace3Box3.h"
#include "Wm5IntrHalfspace3Segment3.h"
#include "Wm5IntrHalfspace3Sphere3.h"
#include "Wm5IntrHalfspace3Triangle3.h"
#include "Wm5IntrLine3Box3.h"
#include "Wm5IntrLine3Capsule3.h"
#include "Wm5IntrLine3Cone3.h"
#include "Wm5IntrLine3Cylinder3.h"
#include "Wm5IntrLine3Ellipsoid3.h"
#include "Wm5IntrLine3Lozenge3.h"
#include "Wm5IntrLine3Plane3.h"
#include "Wm5IntrLine3Sphere3.h"
#include "Wm5IntrLine3Torus3.h"
#include "Wm5IntrLine3Triangle3.h"
#include "Wm5IntrLozenge3Lozenge3.h"
#include "Wm5IntrPlane3Box3.h"
#include "Wm5IntrPlane3Capsule3.h"
#include "Wm5IntrPlane3Cylinder3.h"
#include "Wm5IntrPlane3Ellipsoid3.h"
#include "Wm5IntrPlane3Lozenge3.h"
#include "Wm5IntrPlane3Plane3.h"
#include "Wm5IntrPlane3Sphere3.h"
#include "Wm5IntrPlane3Triangle3.h"
#include "Wm5IntrRay3Box3.h"
#include "Wm5IntrRay3Capsule3.h"
#include "Wm5IntrRay3Cylinder3.h"
#include "Wm5IntrRay3Ellipsoid3.h"
#include "Wm5IntrRay3Lozenge3.h"
#include "Wm5IntrRay3Plane3.h"
#include "Wm5IntrRay3Sphere3.h"
#include "Wm5IntrRay3Triangle3.h"
#include "Wm5IntrSegment3Box3.h"
#include "Wm5IntrSegment3Capsule3.h"
#include "Wm5IntrSegment3Cylinder3.h"
#include "Wm5IntrSegment3Ellipsoid3.h"
#include "Wm5IntrSegment3Lozenge3.h"
#include "Wm5IntrSegment3Plane3.h"
#include "Wm5IntrSegment3Sphere3.h"
#include "Wm5IntrSegment3Triangle3.h"
#include "Wm5IntrSphere3Cone3.h"
#include "Wm5IntrSphere3Frustum3.h"
#include "Wm5IntrSphere3Sphere3.h"
#include "Wm5IntrTetrahedron3Tetrahedron3.h"
#include "Wm5IntrTriangle3Box3.h"
#include "Wm5IntrTriangle3Cone3.h"
#include "Wm5IntrTriangle3Cylinder3.h"
#include "Wm5IntrTriangle3Sphere3.h"
#include "Wm5IntrTriangle3Triangle3.h"
#include "Wm5IntrUtility3.h"

// Meshes
#include "Wm5BasicMesh.h"
#include "Wm5ConformalMap.h"
#include "Wm5EdgeKey.h"
#include "Wm5ETManifoldMesh.h"
#include "Wm5ETNonmanifoldMesh.h"
#include "Wm5MeshCurvature.h"
#include "Wm5MeshSmoother.h"
#include "Wm5PlanarGraph.h"
#include "Wm5TriangleKey.h"
#include "Wm5UniqueVerticesTriangles.h"
#include "Wm5VEManifoldMesh.h"

// Miscellaneous
#include "Wm5GridGraph2.h"
#include "Wm5NormalCompression.h"
#include "Wm5PerspProjEllipsoid.h"
#include "Wm5QuadToQuadTransforms.h"
#include "Wm5RandomHypersphere.h"
#include "Wm5TangentsToCircles.h"

// NumericalAnalysis
#include "Wm5Bisect1.h"
#include "Wm5Bisect2.h"
#include "Wm5Bisect3.h"
#include "Wm5BrentsMethod.h"
#include "Wm5EigenDecomposition.h"
#include "Wm5Integrate1.h"
#include "Wm5LinearSystem.h"
#include "Wm5Minimize1.h"
#include "Wm5MinimizeN.h"
#include "Wm5NoniterativeEigen3x3.h"
#include "Wm5OdeEuler.h"
#include "Wm5OdeImplicitEuler.h"
#include "Wm5OdeMidpoint.h"
#include "Wm5OdeRungeKutta4.h"
#include "Wm5OdeSolver.h"
#include "Wm5PolynomialRoots.h"
#include "Wm5PolynomialRootsR.h"
#include "Wm5SingularValueDecomposition.h"

// Objects2D
#include "Wm5Arc2.h"
#include "Wm5AxisAlignedBox2.h"
#include "Wm5Box2.h"
#include "Wm5Circle2.h"
#include "Wm5ConvexPolygon2.h"
#include "Wm5Ellipse2.h"
#include "Wm5Line2.h"
#include "Wm5Polygon2.h"
#include "Wm5Ray2.h"
#include "Wm5Segment2.h"
#include "Wm5Triangle2.h"

// Objects3D
#include "Wm5AxisAlignedBox3.h"
#include "Wm5Box3.h"
#include "Wm5Capsule3.h"
#include "Wm5Circle3.h"
#include "Wm5Cone3.h"
#include "Wm5ConvexPolyhedron3.h"
#include "Wm5Cylinder3.h"
#include "Wm5Ellipse3.h"
#include "Wm5Ellipsoid3.h"
#include "Wm5Frustum3.h"
#include "Wm5Line3.h"
#include "Wm5Lozenge3.h"
#include "Wm5Plane3.h"
#include "Wm5Polyhedron3.h"
#include "Wm5Ray3.h"
#include "Wm5Rectangle3.h"
#include "Wm5Segment3.h"
#include "Wm5Sphere3.h"
#include "Wm5Tetrahedron3.h"
#include "Wm5Torus3.h"
#include "Wm5Triangle3.h"

// Query
#include "Wm5Query.h"
#include "Wm5Query2.h"
#include "Wm5Query2Filtered.h"
#include "Wm5Query2Int64.h"
#include "Wm5Query2Integer.h"
#include "Wm5Query2Rational.h"
#include "Wm5Query3.h"
#include "Wm5Query3Filtered.h"
#include "Wm5Query3Int64.h"
#include "Wm5Query3Integer.h"
#include "Wm5Query3Rational.h"

// Rational
#include "Wm5Integer.h"
#include "Wm5IVector.h"
#include "Wm5IVector2.h"
#include "Wm5IVector3.h"
#include "Wm5Rational.h"
#include "Wm5RVector.h"
#include "Wm5RVector2.h"
#include "Wm5RVector3.h"

#endif
