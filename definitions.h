#define  PHYSICS                        HD
#define  DIMENSIONS                     1
#define  COMPONENTS                     1
#define  GEOMETRY                       SPHERICAL
#define  BODY_FORCE                     NO
#define  FORCED_TURB                    NO
#define  COOLING                        NO
#define  RECONSTRUCTION                 LINEAR
#define  TIME_STEPPING                  RK2
#define  DIMENSIONAL_SPLITTING          YES
#define  NTRACER                        0
#define  USER_DEF_PARAMETERS            3

/* -- physics dependent declarations -- */

#define  EOS                            IDEAL
#define  ENTROPY_SWITCH                 NO
#define  THERMAL_CONDUCTION             NO
#define  VISCOSITY                      NO
#define  ROTATING_FRAME                 NO

/* -- user-defined parameters (labels) -- */

#define  ESN                            0
#define  RHO_AMB                        1
#define  TMP_AMB                        2

/* [Beg] user-defined constants (do not change this line) */

#define  UNIT_DENSITY                   CONST_mp
#define  UNIT_VELOCITY                  1.e5
#define  UNIT_LENGTH                    CONST_pc

/* [End] user-defined constants (do not change this line) */
