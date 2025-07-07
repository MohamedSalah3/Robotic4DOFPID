% Simscape(TM) Multibody(TM) version: 6.1

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(11).translation = [0.0 0.0 0.0];
smiData.RigidTransform(11).angle = 0.0;
smiData.RigidTransform(11).axis = [0.0 0.0 0.0];
smiData.RigidTransform(11).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [0 -3.3306690738754696e-13 99.999999999999972];  % mm
smiData.RigidTransform(1).angle = 3.1415926535897896;  % rad
smiData.RigidTransform(1).axis = [-1 -0 -0];
smiData.RigidTransform(1).ID = 'B[Part1-1:-:Part2-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [3.8344285583993285 -4.244937734654286e-13 -136.22422760428813];  % mm
smiData.RigidTransform(2).angle = 3.1415926535897896;  % rad
smiData.RigidTransform(2).axis = [1 -6.0615317083180554e-30 -3.4952433579978412e-15];
smiData.RigidTransform(2).ID = 'F[Part1-1:-:Part2-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [153.83442855840039 0 3.775772395710808];  % mm
smiData.RigidTransform(3).angle = 2.0943951023931935;  % rad
smiData.RigidTransform(3).axis = [0.57735026918962506 -0.57735026918962506 0.57735026918962717];
smiData.RigidTransform(3).ID = 'B[Part2-1:-:Part3-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [1.3331537833677797e-13 1.2842744448766712e-12 -1.2557727202770592e-12];  % mm
smiData.RigidTransform(4).angle = 3.1415926535897887;  % rad
smiData.RigidTransform(4).axis = [-1 6.1187406359775284e-31 -2.661438184887502e-16];
smiData.RigidTransform(4).ID = 'F[Part2-1:-:Part3-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [350 0 0];  % mm
smiData.RigidTransform(5).angle = 3.1415926535897896;  % rad
smiData.RigidTransform(5).axis = [-1 -0 -0];
smiData.RigidTransform(5).ID = 'B[Part3-1:-:Part4-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [-1.7243676468919566e-13 -1.1189480318101726e-12 1.1981812982596045e-12];  % mm
smiData.RigidTransform(6).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(6).axis = [-1 2.5833548205679128e-31 -3.0022182680165059e-15];
smiData.RigidTransform(6).ID = 'F[Part3-1:-:Part4-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [224.99999999999986 10.000000000001673 38.000000000001563];  % mm
smiData.RigidTransform(7).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(7).axis = [0.57735026918962162 0.57735026918962573 0.57735026918962984];
smiData.RigidTransform(7).ID = 'B[Part4-1:-:Part5-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [-132.3213009649744 10.000000000000028 37.999999999999972];  % mm
smiData.RigidTransform(8).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(8).axis = [0.57735026918962529 0.57735026918962573 0.57735026918962618];
smiData.RigidTransform(8).ID = 'F[Part4-1:-:Part5-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [2.2204460492503131e-13 0 -22.499999999999964];  % mm
smiData.RigidTransform(9).angle = 0;  % rad
smiData.RigidTransform(9).axis = [0 0 0];
smiData.RigidTransform(9).ID = 'B[Part5-1:-:Part6-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(10).translation = [5.2358117841322382e-13 -9.5923269327613525e-13 -22.499999999997222];  % mm
smiData.RigidTransform(10).angle = 8.3919661039841677e-15;  % rad
smiData.RigidTransform(10).axis = [-0.96338889389376492 -0.26810788709425959 1.0837895291453655e-15];
smiData.RigidTransform(10).ID = 'F[Part5-1:-:Part6-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(11).translation = [-120.35366154334243 284.372904523339 348.54878936852083];  % mm
smiData.RigidTransform(11).angle = 0;  % rad
smiData.RigidTransform(11).axis = [0 0 0];
smiData.RigidTransform(11).ID = 'RootGround[Part1-1]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(6).mass = 0.0;
smiData.Solid(6).CoM = [0.0 0.0 0.0];
smiData.Solid(6).MoI = [0.0 0.0 0.0];
smiData.Solid(6).PoI = [0.0 0.0 0.0];
smiData.Solid(6).color = [0.0 0.0 0.0];
smiData.Solid(6).opacity = 0.0;
smiData.Solid(6).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.91542674903734933;  % kg
smiData.Solid(1).CoM = [140.78964883560417 -8.1129899368181828 -35.326616919933095];  % mm
smiData.Solid(1).MoI = [611.06489883259076 17581.125945705968 17914.196206594755];  % kg*mm^2
smiData.Solid(1).PoI = [31.204160681476026 -59.734605890590409 168.49246491474898];  % kg*mm^2
smiData.Solid(1).color = [0.89803921568627454 0.89803921568627454 0.89803921568627454];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = 'Part3*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 1.5522108963162538;  % kg
smiData.Solid(2).CoM = [59.396094690530724 -33.751656642256116 24.153611919410711];  % mm
smiData.Solid(2).MoI = [2370.5723236949484 11836.273874440081 12478.600811568163];  % kg*mm^2
smiData.Solid(2).PoI = [149.83063568603114 347.01999739032891 -436.11361250231977];  % kg*mm^2
smiData.Solid(2).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = 'Part4*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.46918636995458707;  % kg
smiData.Solid(3).CoM = [-54.677054457784777 0.0013648597859700631 -0.0012812360167224375];  % mm
smiData.Solid(3).MoI = [367.61992570212141 1593.5903072229553 1505.6572200210846];  % kg*mm^2
smiData.Solid(3).PoI = [0.01573548630616484 -0.044270443271642458 0.047159805427605075];  % kg*mm^2
smiData.Solid(3).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = 'Part5*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 2.2971518399345388;  % kg
smiData.Solid(4).CoM = [61.71998449403825 2.8173345906665452 -73.723768777813675];  % mm
smiData.Solid(4).MoI = [11916.596354414876 23609.173703212189 16105.627933239424];  % kg*mm^2
smiData.Solid(4).PoI = [-415.57793261202113 -9089.2932187108781 -471.44142667764424];  % kg*mm^2
smiData.Solid(4).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = 'Part2*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 0.29878219658048377;  % kg
smiData.Solid(5).CoM = [60.761784374825936 0 0];  % mm
smiData.Solid(5).MoI = [228.8049280608688 602.14585562370735 609.04524761199059];  % kg*mm^2
smiData.Solid(5).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(5).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = 'Part6*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(6).mass = 5.3700019518789404;  % kg
smiData.Solid(6).CoM = [0.12458060021776707 0.12458060021764553 36.166996010103084];  % mm
smiData.Solid(6).MoI = [33097.19497063609 33097.194970636039 60934.233581725064];  % kg*mm^2
smiData.Solid(6).PoI = [-14.270468212607605 -14.270468212508035 0.067938760873132345];  % kg*mm^2
smiData.Solid(6).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(6).opacity = 1;
smiData.Solid(6).ID = 'Part1*:*Default';


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(4).Rz.Pos = 0.0;
smiData.RevoluteJoint(4).ID = '';

smiData.RevoluteJoint(1).Rz.Pos = 179.62239724178573;  % deg
smiData.RevoluteJoint(1).ID = '[Part1-1:-:Part2-1]';

smiData.RevoluteJoint(2).Rz.Pos = -58.340724239430742;  % deg
smiData.RevoluteJoint(2).ID = '[Part2-1:-:Part3-1]';

smiData.RevoluteJoint(3).Rz.Pos = -3.8691970158525772;  % deg
smiData.RevoluteJoint(3).ID = '[Part3-1:-:Part4-1]';

smiData.RevoluteJoint(4).Rz.Pos = 46.27539419816992;  % deg
smiData.RevoluteJoint(4).ID = '[Part5-1:-:Part6-1]';

