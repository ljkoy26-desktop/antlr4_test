
// Generated from Db2Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp_wv_db2 {


class  Db2Parser : public antlr4::Parser {
public:
  enum {
    ABSENT = 1, ACCESS = 2, ACCESSCTRL = 3, ACCORDING = 4, ACCTNG = 5, ACCUMULATE = 6, 
    ACOS = 7, ACTION = 8, ACTIVATE = 9, ACTIVE = 10, ACTIVITIES = 11, ACTIVITY = 12, 
    ACTIVITYTOTALRUNTIME = 13, ACTIVITYTOTALRUNTIMEINALLSC = 14, ACTIVITYTOTALTIME = 15, 
    ACTUALS = 16, ADAPTIVE = 17, ADC = 18, ADD = 19, ADDRESS = 20, ADMIN = 21, 
    ADMINISTRATION = 22, ADMISSION = 23, AFTER = 24, AGE = 25, AGGREGATE = 26, 
    AGGSQLTEMPSPACE = 27, ALIAS = 28, ALL = 29, ALLOCATE = 30, ALLOW = 31, 
    ALTER = 32, ALTERIN = 33, ALWAYS = 34, ANALYZE_TABLE = 35, ANCHOR = 36, 
    AND = 37, ANY = 38, APPEND = 39, APPLICATION = 40, APPL_ID = 41, APPL_NAME = 42, 
    APPNAME = 43, ARE = 44, ARRAY = 45, ARRAY_AGG = 46, AS = 47, ASC = 48, 
    ASCII = 49, ASENSITIVE = 50, ASIN = 51, ASSERTION = 52, ASYNCHRONY = 53, 
    AT = 54, ATAN2 = 55, ATAN = 56, ATOMIC = 57, ATTACH = 58, ATTRIBUTE = 59, 
    ATTRIBUTES = 60, AUDIT = 61, AUTHENTICATION = 62, AUTHID = 63, AUTHORIZATION = 64, 
    AUTHORIZED = 65, AUTH_ID = 66, AUTOMATIC = 67, AUTORESIZE = 68, AUTOSTART = 69, 
    AVG = 70, B = 71, BACKUP = 72, BASE = 73, BASE64 = 74, BASED = 75, BASE_TABLE = 76, 
    BATCH = 77, BEFORE = 78, BEGIN = 79, BERNOULLI = 80, BETWEEN = 81, BIGINT = 82, 
    BIN = 83, BINARY = 84, BINDADD = 85, BIND = 86, BIT = 87, BLOB = 88, 
    BLOCKED = 89, BLOCKING = 90, BLOCKINSERT = 91, BLOCKSIZE = 92, BODY = 93, 
    BOOLEAN = 94, BOTH = 95, BSON = 96, BUFFER = 97, BUFFERPOOL = 98, BUFFERPOOLS = 99, 
    BUFFERSIZE = 100, BUILD = 101, BUSINESS_TIME = 102, BY = 103, C = 104, 
    CACHE = 105, CACHING = 106, CALL = 107, CALLED = 108, CALLER = 109, 
    CAPTURE = 110, CARDINALITY = 111, CASCADE = 112, CASCADED = 113, CASE = 114, 
    CAST = 115, CATEGORIES = 116, CCSID = 117, CEIL = 118, CEILING = 119, 
    CENTURY = 120, CENTURIES = 121, CFGALL = 122, CHANGE = 123, CHANGES = 124, 
    CHAR = 125, CHAR_LENGTH = 126, CHARACTER = 127, CHARACTER_LENGTH = 128, 
    CHECK = 129, CHECKED = 130, CHECKING = 131, CLASS = 132, CLIENT = 133, 
    CLIENT_ACCTNG = 134, CLIENT_APPNAME = 135, CLIENT_USERID = 136, CLIENT_WRKSTNNAME = 137, 
    CLOB = 138, CLOSE = 139, CLR = 140, CLUSTER = 141, COALESCE = 142, CODEUNITS16 = 143, 
    CODEUNITS32 = 144, COLLATE = 145, COLLATION = 146, COLLECT = 147, COLUMN = 148, 
    COLUMNS = 149, COMMENT = 150, COMMIT = 151, COMMITTED = 152, COMPACT = 153, 
    COMPILATION = 154, COMPONENT = 155, COMPONENTS = 156, COMPRESS = 157, 
    COMPRESSION = 158, COMPRESSIONS = 159, CONCAT = 160, CONCURRENTDBCOORDACTIVITIES = 161, 
    CONCURRENTWORKLOADACTIVITIES = 162, CONCURRENTWORKLOADOCCURRENCES = 163, 
    CONDITION = 164, CONDITIONAL = 165, CONNECT = 166, CONNECTION = 167, 
    CONNECTIONIDLETIME = 168, CONNECTIONS = 169, CONSTANT = 170, CONSTRAINT = 171, 
    CONSTRAINTS = 172, CONTAINERS = 173, CONTAINS = 174, CONTENT = 175, 
    CONTEXT = 176, CONTINUE = 177, CONTROL = 178, CONVERT = 179, COORDINATOR = 180, 
    CORRELATOR = 181, CORRESPONDING = 182, COS = 183, COUNT = 184, COUNT_BIG = 185, 
    CPP = 186, CPU = 187, CPUTIME = 188, CPUTIMEINSC = 189, CREATE = 190, 
    CREATEIN = 191, CREATETAB = 192, CREATE_EXTERNAL_ROUTINE = 193, CREATE_NOT_FENCED_ROUTINE = 194, 
    CREATE_SECURE_OBJECT = 195, CRITICAL = 196, CROSS = 197, CS = 198, CUME_DIST = 199, 
    CURRENT = 200, CURRENT_DATE = 201, CURRENT_PATH = 202, CURRENT_SCHEMA = 203, 
    CURRENT_SERVER = 204, CURRENT_TIME = 205, CURRENT_TIMESTAMP = 206, CURRENT_TIMEZONE = 207, 
    CURRENT_USER = 208, CURSOR = 209, CURSORS = 210, CUSTOM = 211, CYCLE = 212, 
    DATA = 213, DATAACCESS = 214, DATABASE = 215, DATATAGINSC = 216, DATE = 217, 
    DAY = 218, DAYS = 219, DB = 220, DBADM = 221, DBCFG = 222, DBCFGVALUES = 223, 
    DBCLOB = 224, DBINFO = 225, DBMCFG = 226, DBMCFGVALUES = 227, DBPARTITIONNUM = 228, 
    DBPARTITIONNUMS = 229, DB2GENERAL = 230, DB2LBACREADARRAY = 231, DB2LBACREADSET = 232, 
    DB2LBACREADTREE = 233, DB2LBACRULES = 234, DB2LBACWRITEARRAY = 235, 
    DB2LBACWRITESET = 236, DB2LBACWRITETREE = 237, DB2SQL = 238, DB2_RETURN_STATUS = 239, 
    DB2_SQL_NESTING_LEVEL = 240, DB2_TOKEN_STRING = 241, DDL = 242, DDLALL = 243, 
    DDLDATA = 244, DDLFEDERATED = 245, DDLMONITOR = 246, DDLSECURITY = 247, 
    DDLSQL = 248, DDLSTORAGE = 249, DDLWLM = 250, DDLXML = 251, DEACTIVATE = 252, 
    DEADLOCK = 253, DEADLOCKS = 254, DEALLOCATE = 255, DEC = 256, DECADE = 257, 
    DECADES = 258, DECFLOAT = 259, DECIMAL = 260, DECLARE = 261, DECOMPOSITION = 262, 
    DEFAULT = 263, DEFAULTS = 264, DEFERRABLE = 265, DEFERRED = 266, DEFINER = 267, 
    DEGREE = 268, DEGREES = 269, DELETE = 270, DELETEIN = 271, DESC = 272, 
    DESCRIBE = 273, DESCRIPTOR = 274, DETACH = 275, DETAILED = 276, DETAILS = 277, 
    DETERMINED = 278, DETERMINISTIC = 279, DEVICE = 280, DIAGNOSTICS = 281, 
    DIMESIONS = 282, DIRTY = 283, DISABLE = 284, DISALLOW = 285, DISCONNECT = 286, 
    DISPATCH = 287, DISTINCT = 288, DISTRIBUTE = 289, DISTRIBUTED = 290, 
    DISTRIBUTION = 291, DML = 292, DOCUMENT = 293, DOUBLE = 294, DOW = 295, 
    DOY = 296, DO = 297, DROP = 298, DROPIN = 299, DROPPED = 300, DYNAMIC = 301, 
    EACH = 302, ELEMENT = 303, ELSE = 304, ELSEIF = 305, EMPTY = 306, EMPTY_BLOB = 307, 
    EMPTY_CLOB = 308, EMPTY_DBCLOB = 309, EMPTY_NCLOB = 310, ENABLE = 311, 
    ENCODING = 312, ENCRYPTION = 313, END = 314, ENDING = 315, END_EXEC = 316, 
    ENFORCED = 317, ENFORCEMENT = 318, ENVIRONMENT = 319, EPOCH = 320, ERROR = 321, 
    ESCAPE = 322, ESTIMATEDCOST = 323, ESTIMATEDSQLCOST = 324, EVALUATE = 325, 
    EVENT = 326, EVERY = 327, EXACT = 328, EXCEEDED = 329, EXCEPT = 330, 
    EXCEPTION = 331, EXCLUDE = 332, EXCLUDES = 333, EXCLUDING = 334, EXCLUSIVE = 335, 
    EXEC = 336, EXECUTABLE = 337, EXECUTE = 338, EXECUTEIN = 339, EXECUTETIME = 340, 
    EXECUTION = 341, EXISTS = 342, EXIT = 343, EXP = 344, EXPLAIN = 345, 
    EXPRESSION = 346, EXTEND = 347, EXTENDED = 348, EXTERNAL = 349, EXTENSION = 350, 
    EXTENTSIZE = 351, EXTRACT = 352, FAILURE = 353, FALSE = 354, FEDERATED = 355, 
    FEDERATED_TOOL = 356, FENCED = 357, FETCH = 358, FIFO = 359, FILE = 360, 
    FILTER = 361, FINAL = 362, FINALIZE = 363, FIRST = 364, FLOAT = 365, 
    FLOOR = 366, FLUSH = 367, FORALL = 368, FORCE = 369, FOR = 370, FOREIGN = 371, 
    FORMAT = 372, FOUND = 373, FROM = 374, FULL = 375, FUNCTION = 376, GENERATE = 377, 
    GENERATED = 378, GENERIC = 379, GET = 380, GETCURRENTCONNECTION = 381, 
    GIGA = 382, GLOBAL = 383, GO = 384, GOTO = 385, GRANT = 386, GRAPHIC = 387, 
    GROUP = 388, HANDLER = 389, HARD = 390, HAVING = 391, HASH = 392, HEX = 393, 
    HIDDEN_ = 394, HIERARCHY = 395, HIGH = 396, HISTOGRAM = 397, HISTORY = 398, 
    HOLD = 399, HOUR = 400, HOURS = 401, IDENTITY = 402, IDENTITY_VAL_LOCAL = 403, 
    ID_ = 404, IF = 405, IGNORE = 406, IMMEDIATE = 407, IMPLEMENTATION = 408, 
    IMPLICIT = 409, IMPLICITLY = 410, IMPLICIT_SCHEMA = 411, IN = 412, INACTIVE = 413, 
    INCLUDE = 414, INCLUDES = 415, INCLUDING = 416, INCLUSIVE = 417, INCREASESIZE = 418, 
    INCREMENT = 419, INCREMENTAL = 420, INDEX = 421, INDEXES = 422, INDICATOR = 423, 
    INFIX = 424, INHERIT = 425, INITIALIZE = 426, INITIALSIZE = 427, INITIALLY = 428, 
    INLINE = 429, INNER = 430, INOUT = 431, INPUT = 432, INSENSITIVE = 433, 
    INSERT = 434, INSERTIN = 435, INSTANTIABLE = 436, INSTEAD = 437, INT = 438, 
    INTEGER = 439, INTEGRITY = 440, INTERACTIVE = 441, INTERARRIVALTIME = 442, 
    INTERSECT = 443, INTO = 444, INVALID = 445, INVALIDATION = 446, INVOKER = 447, 
    IS = 448, ISOLATION = 449, ITERATE = 450, JAVA = 451, JOIN = 452, JSON = 453, 
    JSON_ARRAY = 454, JSON_OBJECT = 455, JSON_QUERY = 456, JSON_TABLE = 457, 
    JSON_VALUE = 458, KEEP = 459, KEY = 460, KEYS = 461, KILO = 462, L = 463, 
    LABEL = 464, LANGUAGE = 465, LARGE = 466, LAST = 467, LATENCY = 468, 
    LATERAL = 469, LCASE = 470, LC_MESSAGES_ = 471, LC_TIME_ = 472, LEADING = 473, 
    LEAVE = 474, LEFT = 475, LENGTH = 476, LEVEL = 477, LEVEL2 = 478, LIBRARY = 479, 
    LIFETIME = 480, LIKE = 481, LIMIT = 482, LIST = 483, LISTAGG = 484, 
    LN = 485, LOAD = 486, LOCAL = 487, LOCALE = 488, LOCATE = 489, LOCATION = 490, 
    LOCATOR = 491, LOCK = 492, LOCKED = 493, LOCKING = 494, LOCKS = 495, 
    LOCKSIZE = 496, LOG10 = 497, LOG = 498, LOGGED = 499, LOGICAL = 500, 
    LONG = 501, LONGVAR = 502, LOOP = 503, LOW = 504, LOWER = 505, LTRIM = 506, 
    MAINTAINED = 507, MANAGED = 508, MANUALSTART = 509, MAP = 510, MAPPING = 511, 
    MARK = 512, MASK = 513, MATCH = 514, MATCHED = 515, MATCHING = 516, 
    MATERIALIZED = 517, MAX = 518, MAXFILES = 519, MAXFILESIZE = 520, MAXIMUM = 521, 
    MAXSIZE = 522, MAXVALUE = 523, MDC = 524, MEGA = 525, MEDIUM = 526, 
    MEMBER = 527, MEMBERS = 528, MERGE = 529, MESSAGE_TEXT = 530, METHOD = 531, 
    METHODS = 532, METRICS = 533, MICROSECOND = 534, MICROSECONDS = 535, 
    MILLENNIUM = 536, MILLENNIUMS = 537, MILLISECOND = 538, MILLISECONDS = 539, 
    MIN = 540, MINIMUM = 541, MINPCTUSED = 542, MINUTE = 543, MINUTES = 544, 
    MINVALUE = 545, MISSING = 546, MIXED = 547, MOD = 548, MODE = 549, MODIFICATION = 550, 
    MODIFIES = 551, MODULE_ = 552, MONITOR = 553, MONTH = 554, MONTHS = 555, 
    MORE_ = 556, MOVEMENT = 557, MOVETABLE = 558, MULTIPLIER = 559, NAME = 560, 
    NAMESPACE = 561, NATIONAL = 562, NATURAL = 563, NCHAR = 564, NCLOB = 565, 
    NESTED = 566, NEW = 567, NEXT = 568, NICKNAME = 569, NO = 570, NONBLOCKED = 571, 
    NONE = 572, NORCAC = 573, NORMAL = 574, NOT = 575, NOWAIT = 576, NPSGENERIC = 577, 
    NULL_ = 578, NULLIF = 579, NULLS = 580, NUM = 581, NUMBLOCKPAGES = 582, 
    NUMERIC = 583, NUM_EXECUTIONS = 584, NVARCHAR = 585, OBJECT = 586, OBJMAINT = 587, 
    OCCURRENCE = 588, OCTETS = 589, OF = 590, OFF = 591, OFFSET = 592, OLD = 593, 
    OLE = 594, OLEDB = 595, OMIT = 596, ON = 597, ONCE = 598, ONLINE = 599, 
    ONLINERECOVERY = 600, ONLY = 601, OPEN = 602, OPTIMIZE = 603, OPTIMIZATION = 604, 
    OPTION = 605, OPTIONS = 606, OR = 607, ORDER = 608, ORDINALITY = 609, 
    ORGANIZE = 610, OUT = 611, OUTBOUND = 612, OUTCOME = 613, OUTER = 614, 
    OUTPUT = 615, OVERFLOW = 616, OVERHEAD = 617, OVERLAPS = 618, OVERLAY = 619, 
    OVERRIDE = 620, OVERRIDING = 621, PACKAGE = 622, PACKAGESET = 623, PAD = 624, 
    PAGE = 625, PAGESIZE = 626, PARAMETER = 627, PARALLEL = 628, PARTIAL = 629, 
    PARTITION = 630, PARTITIONED = 631, PARTITIONINGS = 632, PARTITIONS = 633, 
    PASSING = 634, PASSTHRU = 635, PASSWORD = 636, PATH = 637, PCTDEACTIVATE = 638, 
    PCTFREE = 639, PERCENT = 640, PERCENTILE_CONT = 641, PERCENTILE_DISC = 642, 
    PERCENT_RANK = 643, PERFORM = 644, PERIOD = 645, PERMISSION = 646, PI = 647, 
    PIPE = 648, PLACING = 649, PLAN = 650, POLICY = 651, PORTION = 652, 
    POSITION = 653, PRECISION = 654, PREDICATES = 655, PREFETCH = 656, PREFETCHSIZE = 657, 
    PREPARE = 658, PRESERVE = 659, PREVENT = 660, PRIMARY = 661, PRIOR = 662, 
    PRIORITY = 663, PRIVILEGES = 664, PROCEDURE = 665, PROFILE = 666, PROPAGATE = 667, 
    PROTECTED = 668, PRUNE = 669, PUBLIC = 670, PUBLISH = 671, PYTHON = 672, 
    QUARTER = 673, QUERY = 674, QUERYNO = 675, QUERYTAG = 676, QUEUE = 677, 
    QUEUEDACTIVITIES = 678, QUEUEDCONNECTIONS = 679, QUEUETIME = 680, QUOTES = 681, 
    QUIESCE_CONNECT = 682, RADIANS = 683, RAISE = 684, RANDOM = 685, RANGE = 686, 
    RATE = 687, RCAC = 688, READ = 689, READS = 690, REAL = 691, REBALANCE = 692, 
    RECOMMEND = 693, RECORD = 694, RECOVERY = 695, REDISTRIBUTE = 696, REDUCE = 697, 
    REF = 698, REFERENCE = 699, REFERENCES = 700, REFERENCING = 701, REFRESH = 702, 
    REJECT = 703, REGISTERS = 704, REGULAR = 705, REGVAR = 706, REGVARVALUES = 707, 
    RELATIVE = 708, RELEASE = 709, RELEASED = 710, REMAP = 711, REMOTE = 712, 
    RENAME = 713, REOPT = 714, REORG = 715, REPEAT = 716, REPEATABLE = 717, 
    REPLACE = 718, REPLICATION = 719, REQUEST = 720, REQUIRE = 721, RESET = 722, 
    RESIDENT = 723, RESIGNAL = 724, RESIZE = 725, RESOURCE = 726, RESTART = 727, 
    RESTORE = 728, RESTRICT = 729, RESULT = 730, RESULT_SET_LOCATOR = 731, 
    RESUME = 732, RETAIN = 733, RETURNS = 734, RETURNING = 735, RETURN = 736, 
    REUSE = 737, REVERSE = 738, REVOKE = 739, RIGHT = 740, ROLE = 741, ROLLBACK = 742, 
    ROLLFORWARD = 743, ROLLOUT = 744, ROLLUP = 745, ROOT = 746, ROUNDING = 747, 
    ROUND_CEILING = 748, ROUND_DOWN = 749, ROUND_FLOOR = 750, ROUND_HALF_EVEN = 751, 
    ROUND_HALF_UP = 752, ROUTINES = 753, ROW = 754, ROWS = 755, ROW_COUNT = 756, 
    RR = 757, RS = 758, RTRIM = 759, RULES = 760, RUNSTATS = 761, SAMPLED = 762, 
    SAVEPOINT = 763, SAVE = 764, SCALAR = 765, SCALEBACK = 766, SCANS = 767, 
    SCHEMA = 768, SCHEMAADM = 769, SCOPE = 770, SCRATCHPAD = 771, SCROLL = 772, 
    SEARCH = 773, SECADM = 774, SECMAINT = 775, SECOND = 776, SECONDS = 777, 
    SECTION = 778, SECURED = 779, SECURITY = 780, SEGMENT = 781, SELECT = 782, 
    SELECTIN = 783, SELECTION = 784, SELF = 785, SEQUENCE = 786, SERIALIZABLE = 787, 
    SERVER = 788, SERVICE = 789, SESSION = 790, SESSION_USER = 791, SET = 792, 
    SETS = 793, SETSESSIONUSER = 794, SHARE = 795, SHARES = 796, SIGNAL = 797, 
    SIN = 798, SIZE = 799, SKIP_ = 800, SMALLINT = 801, SNAPSHOT = 802, 
    SOFT = 803, SOME = 804, SORTMEM = 805, SORTSHRHEAPUTIL = 806, SOURCE = 807, 
    SPACE = 808, SPECIFIC = 809, SPECIFICATION = 810, SPECIAL = 811, SPLIT = 812, 
    SQL = 813, SQLADM = 814, SQLCODE = 815, SQLERROR = 816, SQLEXCEPTION = 817, 
    SQLID = 818, SQLROWSREAD = 819, SQLROWSREADINSC = 820, SQLROWSRETURNED = 821, 
    SQLSTATE = 822, SQLTEMPSPACE = 823, SQLWARNING = 824, SQL_CCFLAGS = 825, 
    SQRT = 826, STABILITY = 827, STAGING = 828, START = 829, STARTING = 830, 
    STATE = 831, STATEMENT = 832, STATEMENTS = 833, STATIC = 834, STATISTICS = 835, 
    STATUS = 836, STAY = 837, STDDEV = 838, STDDEV_POP = 839, STDDEV_SAMP = 840, 
    STMT_EXEC_TIME = 841, STOGROUP = 842, STOP = 843, STORAGE = 844, STRING = 845, 
    STRIP = 846, STRIPE = 847, STRONG = 848, STYLE = 849, SUBSTR = 850, 
    SUBSTRING = 851, SUCCESS = 852, SUM = 853, SUSPEND = 854, SWITCH = 855, 
    SYMMETRIC = 856, SYNONYM = 857, SYSADMIN = 858, SYSTEM = 859, SYSTEM_PATH = 860, 
    SYSTEM_TIME = 861, SYSTEM_USER = 862, T = 863, TABLE = 864, TABLES = 865, 
    TABLESAMPLE = 866, TABLESPACE = 867, TABLESPACES = 868, TAG = 869, TAN = 870, 
    TARGET = 871, TEMPLATE = 872, TEMPORAL = 873, TEMPORARY = 874, TEXT = 875, 
    THAN = 876, THEN = 877, THREADSAFE = 878, THRESHOLD = 879, THROUGH = 880, 
    TIME = 881, TIMEOUT = 882, TIMERONCOST = 883, TIMESTAMP = 884, TIMEZONE = 885, 
    TIMEZONE_HOUR = 886, TIMEZONE_MINUTE = 887, TO = 888, TOKEN = 889, TOTALMEMBERCONNECTIONS = 890, 
    TOTALSCMEMBERCONNECTIONS = 891, TRACKING = 892, TRAILING = 893, TRANSACTION = 894, 
    TRANSACTIONS = 895, TRANSFERRATE = 896, TRANSFORM = 897, TRANSFORMS = 898, 
    TRANSLATE = 899, TRANSLATION = 900, TREE = 901, TRIGGER = 902, TRIGGERS = 903, 
    TRIM = 904, TRUE = 905, TRUNC = 906, TRUNCATE = 907, TRUSTED = 908, 
    TYPE = 909, TYPES = 910, UCASE = 911, UNBOUNDED = 912, UNCHECKED = 913, 
    UNCOMMITTED = 914, UNCONDITIONAL = 915, UNDER = 916, UNDO = 917, UNFORMATTED = 918, 
    UNICODE = 919, UNICODE_STR = 920, UNION = 921, UNIQUE = 922, UNIT = 923, 
    UNITS = 924, UNKNOWN = 925, UNNEST = 926, UNSAMPLED = 927, UNTIL = 928, 
    UOW = 929, UOWTOTALTIME = 930, UPDATE = 931, UPDATED_SINCE_BOUNDARY_TIME = 932, 
    UPDATEIN = 933, UPON = 934, UPPER = 935, UR = 936, URI = 937, USAGE = 938, 
    USE = 939, USER = 940, USERID = 941, USING = 942, UTF8 = 943, UTF16 = 944, 
    UTILALL = 945, VALIDATE = 946, VALUE = 947, VALUES = 948, VAR_POP = 949, 
    VAR_SAMP = 950, VARBINARY = 951, VARCHAR = 952, VARGRAPHIC = 953, VARIABLE = 954, 
    VARIANCE = 955, VARIANCE_SAMP = 956, VARYING = 957, VERSION = 958, VERSIONING = 959, 
    VIEW = 960, VIOLATIONS = 961, VOLATILE = 962, WAIT = 963, WAITING = 964, 
    WATER = 965, WEAK = 966, WEEK = 967, WHEN = 968, WHENEVER = 969, WHERE = 970, 
    WHILE = 971, WHITESPACE = 972, WINDOW = 973, WITH = 974, WITHIN = 975, 
    WITHOUT = 976, WLMADM = 977, WORK = 978, WORKLOAD = 979, WRAP = 980, 
    WRAPPER = 981, WRITE = 982, WRITEDOWN = 983, WRITEUP = 984, WRKSTNNAME = 985, 
    XML = 986, XMLAGG = 987, XMLATTRIBUTES = 988, XMLBINARY = 989, XMLDECLARATION = 990, 
    XMLELEMENT = 991, XMLEXISTS = 992, XMLFOREST = 993, XMLGROUP = 994, 
    XMLNAMESPACES = 995, XMLPARSE = 996, XMLPATTERN = 997, XMLPI = 998, 
    XMLQUERY = 999, XMLROW = 1000, XMLSCHEMA = 1001, XMLSERIALIZE = 1002, 
    XMLTABLE = 1003, XMLVALIDATE = 1004, XQUERY = 1005, XSLTRANSFORM = 1006, 
    XSROBJECT = 1007, YEAR = 1008, YEARS = 1009, YES = 1010, WHITE_SPACE = 1011, 
    SQL_COMMENT = 1012, LINE_COMMENT = 1013, DOUBLE_QUOTE_ID = 1014, SINGLE_QUOTE = 1015, 
    ID = 1016, STRING_LITERAL = 1017, DECIMAL_LITERAL = 1018, FLOAT_LITERAL = 1019, 
    REAL_LITERAL = 1020, CHAR_LITERAL = 1021, HEX_STRING_LITERAL = 1022, 
    NE = 1023, LTGT = 1024, EQ = 1025, GT = 1026, GE = 1027, LT = 1028, 
    LE = 1029, EXCLAMATION = 1030, PIPE_PIPE = 1031, DOT = 1032, UNDERLINE = 1033, 
    LR_BRACE = 1034, RR_BRACE = 1035, LR_BRACKET = 1036, RR_BRACKET = 1037, 
    LR_SQUARE_BRACKET = 1038, RR_SQUARE_BRACKET = 1039, COMMA = 1040, SEMI = 1041, 
    COLON = 1042, STAR = 1043, DIVIDE = 1044, MODULE = 1045, PLUS = 1046, 
    MINUS = 1047, QUESTION_MARK = 1048
  };

  enum {
    RuleRoot = 0, RuleSql_statement = 1, RuleFlush_statement = 2, RuleSet_statement = 3, 
    RuleMaintained_types_element = 4, RulePackage_path_element = 5, RuleIn_table_use_clause = 6, 
    RuleTo_descendent_types = 7, RuleTable_names_with_checked_option = 8, 
    RuleTable_names_with_unchecked_option = 9, RuleTable_checked_options = 10, 
    RuleOnline_options = 11, RuleQuery_optimization_options = 12, RuleTable_unchecked_options = 13, 
    RuleIntegrity_options = 14, RuleType_name_keyword = 15, RuleFunction_name_keyword = 16, 
    RuleVariable_name_keyword = 17, RuleDefinition_column_name_keyword = 18, 
    RuleKeyword = 19, RuleInsert_statement = 20, RuleOffset_clause = 21, 
    RuleFetch_clause = 22, RuleFirst_next = 23, RuleRow_rows = 24, RuleInteger_literal = 25, 
    RuleMerge_statement = 26, RuleMerge_when_clause = 27, RuleModification_operation = 28, 
    RuleMerge_when_matched = 29, RuleMerge_when_not_matched = 30, RuleMerge_update = 31, 
    RuleMerge_insert = 32, RuleSearch_condition = 33, RuleUpdate_statement = 34, 
    RuleWhere_clause = 35, RuleBoolean_expression = 36, RuleTable_subquery = 37, 
    RuleComparison_operator = 38, RuleDelete_statement = 39, RuleInclude_columns = 40, 
    RuleAssignment_clause = 41, RulePeriod_clause = 42, RuleGrant_statement = 43, 
    RuleRevoke_statement = 44, RuleWorkload_name = 45, RuleSavepoint_name = 46, 
    RuleTable_privileges = 47, RuleGlobal_variable_privileges = 48, RuleRoutine_privileges = 49, 
    RuleMethod_designator = 50, RuleExemption = 51, RuleDatabase_authority = 52, 
    RuleSchema_privileges = 53, RuleObjects = 54, RuleAlias_designator = 55, 
    RuleFunction_designator = 56, RuleProcedure_designator = 57, RuleService_class_designator = 58, 
    RuleGrantees = 59, RuleGrantee = 60, RuleIsolation_level = 61, RuleConstraint_name_list = 62, 
    RuleColumn_definition = 63, RuleData_type = 64, RuleDefault_clause = 65, 
    RuleGenerated_clause = 66, RuleDefault_values = 67, RuleDatetime_special_register = 68, 
    RuleUser_special_register = 69, RuleSpecial_register = 70, RuleIdentity_option = 71, 
    RuleIdentity_options = 72, RuleAs_row_change_timestamp_clause = 73, 
    RuleAs_generated_expression_clause = 74, RuleAs_row_transaction_timestamp_clause = 75, 
    RuleAs_row_transaction_start_id_clause = 76, RuleReferences_clause = 77, 
    RuleNo_action_restrict = 78, RuleSimple_column_name_list = 79, RuleTruncate_statement = 80, 
    RuleTruncate_options = 81, RulePrivilege_type = 82, RulePrivilege_list = 83, 
    RuleTable_privilege = 84, RuleColumn_list = 85, RuleColumn_identifier = 86, 
    RuleRevokees = 87, RuleRevokee = 88, RuleAuthorization_identifier = 89, 
    RuleAlter_statement = 90, RuleAlter_nickname = 91, RuleConstraint_alteration = 92, 
    RuleFederated_column_options = 93, RuleAlter_package = 94, RuleAlter_permission = 95, 
    RuleAlter_procedure = 96, RuleAlter_server = 97, RuleAlter_trigger = 98, 
    RuleAlter_tablespace = 99, RuleAlter_tablespace_add_clause = 100, RuleDrop_db_container_clause = 101, 
    RuleDb_container_clause = 102, RuleDb_container = 103, RuleAll_containers_clause = 104, 
    RuleAlter_service_class = 105, RuleAlter_threshold = 106, RuleAlter_trusted_context = 107, 
    RuleAddress_clause = 108, RuleAlter_trusted_context_element = 109, RuleAlter_type = 110, 
    RuleAlter_type_element = 111, RuleMethod_options = 112, RuleMethod_identifier = 113, 
    RuleAlter_usage_list = 114, RuleUsage_list_options = 115, RuleAlter_user_mapping = 116, 
    RuleAlter_view = 117, RuleAlter_work_action_set = 118, RuleAlter_work_class_set = 119, 
    RuleAlter_workload = 120, RuleAlter_wrapper = 121, RuleAlter_xsrobject = 122, 
    RuleAlter_module = 123, RuleModule_variable_definition = 124, RuleModule_function_definition = 125, 
    RuleModule_procedure_definition = 126, RuleModule_type_definition = 127, 
    RuleModule_condition_definition = 128, RuleModule_object_identification = 129, 
    RuleAlter_histogram_template = 130, RuleAlter_function = 131, RuleAlter_function_elements = 132, 
    RuleAlter_event_monitor = 133, RuleAlter_event_monitor_elements = 134, 
    RuleTarget_table_options = 135, RuleEvm_group = 136, RuleMonitor_name = 137, 
    RuleAlter_database_partition_group = 138, RuleAlter_partition_element = 139, 
    RuleDb_partition_clause = 140, RuleDb_partition_options = 141, RuleDb_partition_number = 142, 
    RuleAlter_bufferpool = 143, RuleBufferpool_name = 144, RuleNumber_of_pages = 145, 
    RuleMember_number = 146, RuleAlter_audit_policy = 147, RuleAudit_policy_elements = 148, 
    RuleAudit_category_element = 149, RuleAudit_policy_category = 150, RuleAlter_method = 151, 
    RuleAlter_method_designator = 152, RuleAlter_schema = 153, RuleAlter_database = 154, 
    RuleAlter_database_elements = 155, RuleDatabase_name = 156, RuleStorage_path = 157, 
    RuleAlter_index = 158, RuleAlter_mask = 159, RuleAlter_table = 160, 
    RulePeriod_name = 161, RuleConstraint_clause = 162, RuleCascade_restrict = 163, 
    RuleRow_table = 164, RuleColumn_alteration = 165, RuleIdentity_alteration_option = 166, 
    RuleIdentity_alteration = 167, RuleInteger = 168, RuleInteger_constant = 169, 
    RuleDefaultValue = 170, RuleConstant_expression_null = 171, RuleAlways_by_default = 172, 
    RuleSet_drop = 173, RuleWith_set = 174, RuleCreate_statement = 175, 
    RuleCreate_index_extension = 176, RuleSearch_method_definition = 177, 
    RuleCreate_event_monitor = 178, RuleEvent_expression2 = 179, RuleEvent_control = 180, 
    RuleFile_options = 181, RuleEvm_group_info = 182, RulePipe_name = 183, 
    RuleTarget_table_options_create = 184, RuleEvent_expression = 185, RuleEvent_monitor_elements = 186, 
    RuleCreate_wrapper = 187, RuleLibrary_name = 188, RuleCreate_workload = 189, 
    RuleConnection_attributes = 190, RuleCreate_work_class = 191, RuleWork_class_definition = 192, 
    RuleWork_class_alteration = 193, RulePosition_clause = 194, RuleFor_from_to_alter_clause = 195, 
    RuleSchema_alter_clause = 196, RuleData_tag_alter_clause = 197, RuleSchema_clause = 198, 
    RuleFor_from_to_clause = 199, RuleData_tag_clause = 200, RuleCreate_work_action = 201, 
    RuleWork_action_definition = 202, RuleWork_action_alteration = 203, 
    RuleAction_type_clause = 204, RuleAlter_action_type_clause = 205, RuleAlter_threshold_exceeded_actions = 206, 
    RuleAction_name = 207, RuleClass_set_name = 208, RuleAction_set_name = 209, 
    RuleCreate_user_mapping = 210, RuleCreate_usage_list = 211, RuleObject_name = 212, 
    RuleList_name = 213, RuleCreate_trusted_context = 214, RuleContext_name = 215, 
    RuleAuthorization_elements = 216, RuleAddress_or_encryptions = 217, 
    RuleCreate_transform = 218, RuleCreate_threshold = 219, RuleThreshold_exceeded_actions = 220, 
    RuleThreshold_predicate = 221, RuleCreate_tablespace = 222, RuleDatabase_containers = 223, 
    RuleSystem_containers = 224, RuleOn_db_partition_clause = 225, RuleCreate_stogroup = 226, 
    RuleCreate_server = 227, RuleCreate_service_class = 228, RuleHistogram_template_clause = 229, 
    RuleClass_name = 230, RuleCreate_security_policy = 231, RuleCreate_security_label = 232, 
    RuleComponent_name = 233, RuleCreate_permission = 234, RuleCreate_nickname = 235, 
    RuleCreate_module = 236, RuleCreate_method = 237, RuleMethod_signature = 238, 
    RuleSql_method_body = 239, RuleCreate_mask = 240, RuleCreate_histogram_template = 241, 
    RuleCreate_function_mapping = 242, RuleCreate_database_partition_group = 243, 
    RuleCreate_bufferpool = 244, RuleExcept_clause = 245, RuleCreate_audit_policy = 246, 
    RuleAudit_policy_categories = 247, RuleCreate_variable = 248, RuleValue_data_type = 249, 
    RuleCreate_function = 250, RuleState_variable_declarations = 251, RuleFunction_body = 252, 
    RuleOledb_option_lists = 253, RuleAggregate_option_lists = 254, RuleSql_option_lists = 255, 
    RuleExternal_option_lists = 256, RulePredicate_specification = 257, 
    RuleData_filter = 258, RuleIndex_exploitation = 259, RuleIndex_extention_name = 260, 
    RuleExploitation_rule = 261, RuleSearch_method_name = 262, RuleExpression_name = 263, 
    RuleFunction_column_list = 264, RuleFunction_parameter = 265, RuleReturn_data_type = 266, 
    RuleData_type4 = 267, RuleTable_type = 268, RuleColumn_element = 269, 
    RuleCreate_index = 270, RuleIndex_column_parameter = 271, RuleIndex_extension_name = 272, 
    RuleXml_index_specification = 273, RuleXmltype_clause = 274, RuleXmlpattern_clause = 275, 
    RuleCreate_procedure = 276, RuleProcedure_parameter = 277, RuleProcedure_option_lists = 278, 
    RuleProcedure_body = 279, RuleDeclare_cursor_statements = 280, RuleHandler_declarations = 281, 
    RuleSpecific_condition_value = 282, RuleGeneral_condition_value = 283, 
    RuleSql_procedure_statements = 284, RuleSql_procedure_statement = 285, 
    RuleCompound_statement = 286, RuleRepeat_statement = 287, RuleGet_diagnostics_statement = 288, 
    RuleWhile_statement = 289, RuleIf_statement = 290, RuleLeave_statement = 291, 
    RuleLoop_statement = 292, RuleReturn_statement = 293, RuleFor_statement = 294, 
    RuleFor_loop_name = 295, RuleIterate_statement = 296, RuleSignal_statement = 297, 
    RuleResignal_statement = 298, RuleFetch_statement = 299, RuleDescriptor_name = 300, 
    RuleGoto_statement = 301, RuleProcedure_declarations = 302, RuleReturn_codes_declarations = 303, 
    RuleSql_variable_declarations = 304, RuleCursor_value_constructor = 305, 
    RuleStatement_name = 306, RuleParameter_declaration = 307, RuleCondition_declarations = 308, 
    RuleCondition_name = 309, RuleStatement_declarations = 310, RuleType_declarations = 311, 
    RuleArray_type_definition = 312, RuleDistinct_type_definition = 313, 
    RuleRow_type_definition = 314, RuleSource_data_type = 315, RuleLabel_declaration = 316, 
    RuleBuilt_in_type = 317, RuleEncoding_option = 318, RuleCreate_role = 319, 
    RuleCreate_schema = 320, RuleCreate_sequence = 321, RuleSequence_element = 322, 
    RuleSignedInteger = 323, RuleCreate_synonym = 324, RuleCreate_table = 325, 
    RuleCreate_global_temporary_table = 326, RuleOption_name = 327, RuleOption_value = 328, 
    RuleFile_name = 329, RulePolicy_name = 330, RuleTable_option_name = 331, 
    RuleCopy_options = 332, RuleIf_not_exists = 333, RuleTyped_table_options = 334, 
    RuleUnder_clause = 335, RuleTable_element_list = 336, RuleTable_element = 337, 
    RulePeriod_definition = 338, RuleTyped_element_list = 339, RuleTyped_element = 340, 
    RuleOid_column_definition = 341, RuleUnique_constraint = 342, RuleReferential_constraint = 343, 
    RuleCheck_constraint = 344, RuleCheck_condition = 345, RuleFunctional_dependency = 346, 
    RuleWith_options = 347, RuleColumn_options = 348, RuleConstraint_attributes = 349, 
    RuleLob_options = 350, RuleTyped_tableview_name = 351, RuleSecurity_label_name = 352, 
    RuleAs_result_table = 353, RuleRefreshable_table_options = 354, RuleStaging_table_definition = 355, 
    RuleTablespace_clauses = 356, RuleTablespace_name = 357, RuleDistribution_clause = 358, 
    RulePartitioning_clause = 359, RuleRange_partition_spec = 360, RulePartition_expression = 361, 
    RulePartition_element = 362, RuleAdd_partition = 363, RuleAttach_partition = 364, 
    RuleDuration_label = 365, RulePartition_name = 366, RuleBoundary_starting = 367, 
    RuleBoundary_ending = 368, RuleBoundary_spec = 369, RuleBoundary_element = 370, 
    RuleConstant = 371, RulePartition_tablespace_options = 372, RuleDimensions_clause = 373, 
    RuleSequence_key_spec = 374, RuleSequence_key_element = 375, RuleCreate_trigger = 376, 
    RuleTrigger_action = 377, RuleTrigger_body = 378, RuleReferencing_clause = 379, 
    RuleTrigger_event = 380, RuleCreate_type = 381, RuleRemote_server = 382, 
    RuleServer_name = 383, RuleWrapper_name = 384, RuleAttribute_definition = 385, 
    RuleAttribute_name = 386, RuleMethod_specification = 387, RuleSql_routines = 388, 
    RuleSql_routine_characteristics = 389, RuleExternal_routine_characteristics = 390, 
    RuleField_definition = 391, RuleField_name = 392, RuleMethod_name = 393, 
    RuleSpecific_name = 394, RuleSupertype_name = 395, RuleData_type1 = 396, 
    RuleData_type2 = 397, RuleData_type3 = 398, RuleData_type_constraints = 399, 
    RuleAnchored_data_type = 400, RuleAnchored_non_row_data_type = 401, 
    RuleVariable_name = 402, RuleData_source_name = 403, RuleSingle_quoted_string = 404, 
    RuleCreate_view = 405, RuleRoot_view_definition = 406, RuleSubview_definition = 407, 
    RuleOid_column = 408, RuleView_element = 409, RuleView_column_options = 410, 
    RuleOid_column_name = 411, RuleQuery = 412, RuleSelect_expression = 413, 
    RuleInto_clause = 414, RuleSelect_item = 415, RuleSimple_column_name = 416, 
    RuleDefinition_column_name = 417, RuleDrop_statement = 418, RuleDrop_alias = 419, 
    RuleDrop_audit_policy = 420, RuleDrop_bufferpool = 421, RuleDrop_database_partition_group = 422, 
    RuleDrop_event_monitor = 423, RuleDrop_function = 424, RuleDrop_function_mapping = 425, 
    RuleDrop_histogram_template = 426, RuleDrop_index = 427, RuleDrop_index_extension = 428, 
    RuleDrop_mask = 429, RuleDrop_method = 430, RuleDrop_module = 431, RuleDrop_nickname = 432, 
    RuleDrop_package = 433, RuleDrop_permission = 434, RuleDrop_procedure = 435, 
    RuleDrop_role = 436, RuleDrop_schema = 437, RuleDrop_security_label = 438, 
    RuleDrop_security_policy = 439, RuleDrop_sequence = 440, RuleDrop_server = 441, 
    RuleDrop_service_class = 442, RuleDrop_stogroup = 443, RuleDrop_synonym = 444, 
    RuleDrop_table = 445, RuleDrop_table_hierarchy = 446, RuleDrop_tablespace = 447, 
    RuleDrop_transform = 448, RuleDrop_threshold = 449, RuleDrop_trigger = 450, 
    RuleDrop_trusted_context = 451, RuleDrop_type = 452, RuleDrop_type_mapping = 453, 
    RuleDrop_usage_list = 454, RuleDrop_user_mapping = 455, RuleDrop_variable = 456, 
    RuleDrop_view = 457, RuleDrop_view_hierarchy = 458, RuleDrop_work_action_set = 459, 
    RuleDrop_work_class_set = 460, RuleDrop_workload = 461, RuleDrop_wrapper = 462, 
    RuleDrop_xsrobject = 463, RuleString = 464, RuleHexadecimal = 465, RuleThreshold_name = 466, 
    RuleProfile_name = 467, RuleTable_name = 468, RuleSchema_name = 469, 
    RuleRole_name = 470, RuleLabel_name = 471, RuleXsrobject_name = 472, 
    RuleAggregate_name = 473, RuleConstraint_name = 474, RulePartition_group_name = 475, 
    RuleFunction_mapping_name = 476, RuleTemplate_name = 477, RuleColumn_name = 478, 
    RuleMask_name = 479, RuleModule_name = 480, RuleNickname = 481, RulePackage_name = 482, 
    RulePermission_name = 483, RuleCorrelation_name = 484, RuleGroup_name = 485, 
    RuleFunction_name = 486, RuleCall_function_name = 487, RuleFunction_name_id = 488, 
    RuleIndex_name = 489, RuleProcedure_name = 490, RuleParameter_name = 491, 
    RuleSequence_name = 492, RuleSynonym_name = 493, RuleTrigger_name = 494, 
    RuleType_name = 495, RuleUser_name = 496, RuleView_name = 497, RuleCursor_name = 498, 
    RuleInterval_type = 499, RuleType_name_id = 500, RuleVariable_name_id = 501, 
    RuleDefinition_column_name_id = 502, RuleId_ = 503, RuleNum = 504, RuleFloat_literal = 505, 
    RuleExpressions = 506, RuleExpression = 507, RulePrimitive_expression = 508, 
    RuleTable_function_call = 509, RuleFunction_call = 510, RuleJson_table_clause = 511, 
    RuleJson_column_clause = 512, RuleJson_column_definition = 513, RuleJson_object_content = 514, 
    RuleJson_object_entry = 515, RuleJson_array_element = 516, RuleJson_query_wrapper_clause = 517, 
    RuleJson_query_quotes_clause = 518, RuleJson_query_on_error_clause = 519, 
    RuleJson_query_on_empty_clause = 520, RuleJson_value_on_empty_clause = 521, 
    RuleJson_value_on_error_clause = 522, RuleJson_on_null_clause = 523, 
    RuleJson_return_clause = 524, RuleXml_table_clause = 525, RuleXml_table_column_definition = 526, 
    RuleXquery_argument = 527, RuleXmlnamespaces_declaration = 528, RuleElement_content_expression = 529, 
    RuleStrip_char = 530, RuleExtract_datetime_value = 531, RuleXml_expression = 532, 
    RuleXml_validate_according_to_clause = 533, RuleXml_schema_name = 534, 
    RuleXml_element_name = 535, RuleLiteral = 536, RuleSign = 537, RuleCase_expression = 538, 
    RuleSearched_case = 539, RuleExtended_case = 540, RuleWhen_operand = 541, 
    RuleSelect_only_statement = 542, RuleQuery_factoring_clause = 543, RuleFactoring_element = 544, 
    RuleQuery_name = 545, RuleSelect_statement = 546, RuleFor_update_clause = 547, 
    RuleIsolation_clause = 548, RuleLock_request_clause = 549, RuleOptimize_for_clause = 550, 
    RuleConcurrent_access_resolution_clause = 551, RuleAll_distinct = 552, 
    RuleFrom_clause = 553, RuleTable_reference = 554, RuleFederated_specific_condition_value = 555, 
    RuleTablesample_clause = 556, RulePeriod_specification = 557, RuleUsing_clause = 558, 
    RuleCorrelation_clause = 559, RuleGroup_by_clause = 560, RuleHaving_clause = 561, 
    RuleOrder_by_clause = 562, RuleOrder_by_item = 563, RuleAsc_desc = 564, 
    RuleColumnPosition = 565, RuleValues_expression = 566
  };

  explicit Db2Parser(antlr4::TokenStream *input);

  Db2Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Db2Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class RootContext;
  class Sql_statementContext;
  class Flush_statementContext;
  class Set_statementContext;
  class Maintained_types_elementContext;
  class Package_path_elementContext;
  class In_table_use_clauseContext;
  class To_descendent_typesContext;
  class Table_names_with_checked_optionContext;
  class Table_names_with_unchecked_optionContext;
  class Table_checked_optionsContext;
  class Online_optionsContext;
  class Query_optimization_optionsContext;
  class Table_unchecked_optionsContext;
  class Integrity_optionsContext;
  class Type_name_keywordContext;
  class Function_name_keywordContext;
  class Variable_name_keywordContext;
  class Definition_column_name_keywordContext;
  class KeywordContext;
  class Insert_statementContext;
  class Offset_clauseContext;
  class Fetch_clauseContext;
  class First_nextContext;
  class Row_rowsContext;
  class Integer_literalContext;
  class Merge_statementContext;
  class Merge_when_clauseContext;
  class Modification_operationContext;
  class Merge_when_matchedContext;
  class Merge_when_not_matchedContext;
  class Merge_updateContext;
  class Merge_insertContext;
  class Search_conditionContext;
  class Update_statementContext;
  class Where_clauseContext;
  class Boolean_expressionContext;
  class Table_subqueryContext;
  class Comparison_operatorContext;
  class Delete_statementContext;
  class Include_columnsContext;
  class Assignment_clauseContext;
  class Period_clauseContext;
  class Grant_statementContext;
  class Revoke_statementContext;
  class Workload_nameContext;
  class Savepoint_nameContext;
  class Table_privilegesContext;
  class Global_variable_privilegesContext;
  class Routine_privilegesContext;
  class Method_designatorContext;
  class ExemptionContext;
  class Database_authorityContext;
  class Schema_privilegesContext;
  class ObjectsContext;
  class Alias_designatorContext;
  class Function_designatorContext;
  class Procedure_designatorContext;
  class Service_class_designatorContext;
  class GranteesContext;
  class GranteeContext;
  class Isolation_levelContext;
  class Constraint_name_listContext;
  class Column_definitionContext;
  class Data_typeContext;
  class Default_clauseContext;
  class Generated_clauseContext;
  class Default_valuesContext;
  class Datetime_special_registerContext;
  class User_special_registerContext;
  class Special_registerContext;
  class Identity_optionContext;
  class Identity_optionsContext;
  class As_row_change_timestamp_clauseContext;
  class As_generated_expression_clauseContext;
  class As_row_transaction_timestamp_clauseContext;
  class As_row_transaction_start_id_clauseContext;
  class References_clauseContext;
  class No_action_restrictContext;
  class Simple_column_name_listContext;
  class Truncate_statementContext;
  class Truncate_optionsContext;
  class Privilege_typeContext;
  class Privilege_listContext;
  class Table_privilegeContext;
  class Column_listContext;
  class Column_identifierContext;
  class RevokeesContext;
  class RevokeeContext;
  class Authorization_identifierContext;
  class Alter_statementContext;
  class Alter_nicknameContext;
  class Constraint_alterationContext;
  class Federated_column_optionsContext;
  class Alter_packageContext;
  class Alter_permissionContext;
  class Alter_procedureContext;
  class Alter_serverContext;
  class Alter_triggerContext;
  class Alter_tablespaceContext;
  class Alter_tablespace_add_clauseContext;
  class Drop_db_container_clauseContext;
  class Db_container_clauseContext;
  class Db_containerContext;
  class All_containers_clauseContext;
  class Alter_service_classContext;
  class Alter_thresholdContext;
  class Alter_trusted_contextContext;
  class Address_clauseContext;
  class Alter_trusted_context_elementContext;
  class Alter_typeContext;
  class Alter_type_elementContext;
  class Method_optionsContext;
  class Method_identifierContext;
  class Alter_usage_listContext;
  class Usage_list_optionsContext;
  class Alter_user_mappingContext;
  class Alter_viewContext;
  class Alter_work_action_setContext;
  class Alter_work_class_setContext;
  class Alter_workloadContext;
  class Alter_wrapperContext;
  class Alter_xsrobjectContext;
  class Alter_moduleContext;
  class Module_variable_definitionContext;
  class Module_function_definitionContext;
  class Module_procedure_definitionContext;
  class Module_type_definitionContext;
  class Module_condition_definitionContext;
  class Module_object_identificationContext;
  class Alter_histogram_templateContext;
  class Alter_functionContext;
  class Alter_function_elementsContext;
  class Alter_event_monitorContext;
  class Alter_event_monitor_elementsContext;
  class Target_table_optionsContext;
  class Evm_groupContext;
  class Monitor_nameContext;
  class Alter_database_partition_groupContext;
  class Alter_partition_elementContext;
  class Db_partition_clauseContext;
  class Db_partition_optionsContext;
  class Db_partition_numberContext;
  class Alter_bufferpoolContext;
  class Bufferpool_nameContext;
  class Number_of_pagesContext;
  class Member_numberContext;
  class Alter_audit_policyContext;
  class Audit_policy_elementsContext;
  class Audit_category_elementContext;
  class Audit_policy_categoryContext;
  class Alter_methodContext;
  class Alter_method_designatorContext;
  class Alter_schemaContext;
  class Alter_databaseContext;
  class Alter_database_elementsContext;
  class Database_nameContext;
  class Storage_pathContext;
  class Alter_indexContext;
  class Alter_maskContext;
  class Alter_tableContext;
  class Period_nameContext;
  class Constraint_clauseContext;
  class Cascade_restrictContext;
  class Row_tableContext;
  class Column_alterationContext;
  class Identity_alteration_optionContext;
  class Identity_alterationContext;
  class IntegerContext;
  class Integer_constantContext;
  class DefaultValueContext;
  class Constant_expression_nullContext;
  class Always_by_defaultContext;
  class Set_dropContext;
  class With_setContext;
  class Create_statementContext;
  class Create_index_extensionContext;
  class Search_method_definitionContext;
  class Create_event_monitorContext;
  class Event_expression2Context;
  class Event_controlContext;
  class File_optionsContext;
  class Evm_group_infoContext;
  class Pipe_nameContext;
  class Target_table_options_createContext;
  class Event_expressionContext;
  class Event_monitor_elementsContext;
  class Create_wrapperContext;
  class Library_nameContext;
  class Create_workloadContext;
  class Connection_attributesContext;
  class Create_work_classContext;
  class Work_class_definitionContext;
  class Work_class_alterationContext;
  class Position_clauseContext;
  class For_from_to_alter_clauseContext;
  class Schema_alter_clauseContext;
  class Data_tag_alter_clauseContext;
  class Schema_clauseContext;
  class For_from_to_clauseContext;
  class Data_tag_clauseContext;
  class Create_work_actionContext;
  class Work_action_definitionContext;
  class Work_action_alterationContext;
  class Action_type_clauseContext;
  class Alter_action_type_clauseContext;
  class Alter_threshold_exceeded_actionsContext;
  class Action_nameContext;
  class Class_set_nameContext;
  class Action_set_nameContext;
  class Create_user_mappingContext;
  class Create_usage_listContext;
  class Object_nameContext;
  class List_nameContext;
  class Create_trusted_contextContext;
  class Context_nameContext;
  class Authorization_elementsContext;
  class Address_or_encryptionsContext;
  class Create_transformContext;
  class Create_thresholdContext;
  class Threshold_exceeded_actionsContext;
  class Threshold_predicateContext;
  class Create_tablespaceContext;
  class Database_containersContext;
  class System_containersContext;
  class On_db_partition_clauseContext;
  class Create_stogroupContext;
  class Create_serverContext;
  class Create_service_classContext;
  class Histogram_template_clauseContext;
  class Class_nameContext;
  class Create_security_policyContext;
  class Create_security_labelContext;
  class Component_nameContext;
  class Create_permissionContext;
  class Create_nicknameContext;
  class Create_moduleContext;
  class Create_methodContext;
  class Method_signatureContext;
  class Sql_method_bodyContext;
  class Create_maskContext;
  class Create_histogram_templateContext;
  class Create_function_mappingContext;
  class Create_database_partition_groupContext;
  class Create_bufferpoolContext;
  class Except_clauseContext;
  class Create_audit_policyContext;
  class Audit_policy_categoriesContext;
  class Create_variableContext;
  class Value_data_typeContext;
  class Create_functionContext;
  class State_variable_declarationsContext;
  class Function_bodyContext;
  class Oledb_option_listsContext;
  class Aggregate_option_listsContext;
  class Sql_option_listsContext;
  class External_option_listsContext;
  class Predicate_specificationContext;
  class Data_filterContext;
  class Index_exploitationContext;
  class Index_extention_nameContext;
  class Exploitation_ruleContext;
  class Search_method_nameContext;
  class Expression_nameContext;
  class Function_column_listContext;
  class Function_parameterContext;
  class Return_data_typeContext;
  class Data_type4Context;
  class Table_typeContext;
  class Column_elementContext;
  class Create_indexContext;
  class Index_column_parameterContext;
  class Index_extension_nameContext;
  class Xml_index_specificationContext;
  class Xmltype_clauseContext;
  class Xmlpattern_clauseContext;
  class Create_procedureContext;
  class Procedure_parameterContext;
  class Procedure_option_listsContext;
  class Procedure_bodyContext;
  class Declare_cursor_statementsContext;
  class Handler_declarationsContext;
  class Specific_condition_valueContext;
  class General_condition_valueContext;
  class Sql_procedure_statementsContext;
  class Sql_procedure_statementContext;
  class Compound_statementContext;
  class Repeat_statementContext;
  class Get_diagnostics_statementContext;
  class While_statementContext;
  class If_statementContext;
  class Leave_statementContext;
  class Loop_statementContext;
  class Return_statementContext;
  class For_statementContext;
  class For_loop_nameContext;
  class Iterate_statementContext;
  class Signal_statementContext;
  class Resignal_statementContext;
  class Fetch_statementContext;
  class Descriptor_nameContext;
  class Goto_statementContext;
  class Procedure_declarationsContext;
  class Return_codes_declarationsContext;
  class Sql_variable_declarationsContext;
  class Cursor_value_constructorContext;
  class Statement_nameContext;
  class Parameter_declarationContext;
  class Condition_declarationsContext;
  class Condition_nameContext;
  class Statement_declarationsContext;
  class Type_declarationsContext;
  class Array_type_definitionContext;
  class Distinct_type_definitionContext;
  class Row_type_definitionContext;
  class Source_data_typeContext;
  class Label_declarationContext;
  class Built_in_typeContext;
  class Encoding_optionContext;
  class Create_roleContext;
  class Create_schemaContext;
  class Create_sequenceContext;
  class Sequence_elementContext;
  class SignedIntegerContext;
  class Create_synonymContext;
  class Create_tableContext;
  class Create_global_temporary_tableContext;
  class Option_nameContext;
  class Option_valueContext;
  class File_nameContext;
  class Policy_nameContext;
  class Table_option_nameContext;
  class Copy_optionsContext;
  class If_not_existsContext;
  class Typed_table_optionsContext;
  class Under_clauseContext;
  class Table_element_listContext;
  class Table_elementContext;
  class Period_definitionContext;
  class Typed_element_listContext;
  class Typed_elementContext;
  class Oid_column_definitionContext;
  class Unique_constraintContext;
  class Referential_constraintContext;
  class Check_constraintContext;
  class Check_conditionContext;
  class Functional_dependencyContext;
  class With_optionsContext;
  class Column_optionsContext;
  class Constraint_attributesContext;
  class Lob_optionsContext;
  class Typed_tableview_nameContext;
  class Security_label_nameContext;
  class As_result_tableContext;
  class Refreshable_table_optionsContext;
  class Staging_table_definitionContext;
  class Tablespace_clausesContext;
  class Tablespace_nameContext;
  class Distribution_clauseContext;
  class Partitioning_clauseContext;
  class Range_partition_specContext;
  class Partition_expressionContext;
  class Partition_elementContext;
  class Add_partitionContext;
  class Attach_partitionContext;
  class Duration_labelContext;
  class Partition_nameContext;
  class Boundary_startingContext;
  class Boundary_endingContext;
  class Boundary_specContext;
  class Boundary_elementContext;
  class ConstantContext;
  class Partition_tablespace_optionsContext;
  class Dimensions_clauseContext;
  class Sequence_key_specContext;
  class Sequence_key_elementContext;
  class Create_triggerContext;
  class Trigger_actionContext;
  class Trigger_bodyContext;
  class Referencing_clauseContext;
  class Trigger_eventContext;
  class Create_typeContext;
  class Remote_serverContext;
  class Server_nameContext;
  class Wrapper_nameContext;
  class Attribute_definitionContext;
  class Attribute_nameContext;
  class Method_specificationContext;
  class Sql_routinesContext;
  class Sql_routine_characteristicsContext;
  class External_routine_characteristicsContext;
  class Field_definitionContext;
  class Field_nameContext;
  class Method_nameContext;
  class Specific_nameContext;
  class Supertype_nameContext;
  class Data_type1Context;
  class Data_type2Context;
  class Data_type3Context;
  class Data_type_constraintsContext;
  class Anchored_data_typeContext;
  class Anchored_non_row_data_typeContext;
  class Variable_nameContext;
  class Data_source_nameContext;
  class Single_quoted_stringContext;
  class Create_viewContext;
  class Root_view_definitionContext;
  class Subview_definitionContext;
  class Oid_columnContext;
  class View_elementContext;
  class View_column_optionsContext;
  class Oid_column_nameContext;
  class QueryContext;
  class Select_expressionContext;
  class Into_clauseContext;
  class Select_itemContext;
  class Simple_column_nameContext;
  class Definition_column_nameContext;
  class Drop_statementContext;
  class Drop_aliasContext;
  class Drop_audit_policyContext;
  class Drop_bufferpoolContext;
  class Drop_database_partition_groupContext;
  class Drop_event_monitorContext;
  class Drop_functionContext;
  class Drop_function_mappingContext;
  class Drop_histogram_templateContext;
  class Drop_indexContext;
  class Drop_index_extensionContext;
  class Drop_maskContext;
  class Drop_methodContext;
  class Drop_moduleContext;
  class Drop_nicknameContext;
  class Drop_packageContext;
  class Drop_permissionContext;
  class Drop_procedureContext;
  class Drop_roleContext;
  class Drop_schemaContext;
  class Drop_security_labelContext;
  class Drop_security_policyContext;
  class Drop_sequenceContext;
  class Drop_serverContext;
  class Drop_service_classContext;
  class Drop_stogroupContext;
  class Drop_synonymContext;
  class Drop_tableContext;
  class Drop_table_hierarchyContext;
  class Drop_tablespaceContext;
  class Drop_transformContext;
  class Drop_thresholdContext;
  class Drop_triggerContext;
  class Drop_trusted_contextContext;
  class Drop_typeContext;
  class Drop_type_mappingContext;
  class Drop_usage_listContext;
  class Drop_user_mappingContext;
  class Drop_variableContext;
  class Drop_viewContext;
  class Drop_view_hierarchyContext;
  class Drop_work_action_setContext;
  class Drop_work_class_setContext;
  class Drop_workloadContext;
  class Drop_wrapperContext;
  class Drop_xsrobjectContext;
  class StringContext;
  class HexadecimalContext;
  class Threshold_nameContext;
  class Profile_nameContext;
  class Table_nameContext;
  class Schema_nameContext;
  class Role_nameContext;
  class Label_nameContext;
  class Xsrobject_nameContext;
  class Aggregate_nameContext;
  class Constraint_nameContext;
  class Partition_group_nameContext;
  class Function_mapping_nameContext;
  class Template_nameContext;
  class Column_nameContext;
  class Mask_nameContext;
  class Module_nameContext;
  class NicknameContext;
  class Package_nameContext;
  class Permission_nameContext;
  class Correlation_nameContext;
  class Group_nameContext;
  class Function_nameContext;
  class Call_function_nameContext;
  class Function_name_idContext;
  class Index_nameContext;
  class Procedure_nameContext;
  class Parameter_nameContext;
  class Sequence_nameContext;
  class Synonym_nameContext;
  class Trigger_nameContext;
  class Type_nameContext;
  class User_nameContext;
  class View_nameContext;
  class Cursor_nameContext;
  class Interval_typeContext;
  class Type_name_idContext;
  class Variable_name_idContext;
  class Definition_column_name_idContext;
  class Id_Context;
  class NumContext;
  class Float_literalContext;
  class ExpressionsContext;
  class ExpressionContext;
  class Primitive_expressionContext;
  class Table_function_callContext;
  class Function_callContext;
  class Json_table_clauseContext;
  class Json_column_clauseContext;
  class Json_column_definitionContext;
  class Json_object_contentContext;
  class Json_object_entryContext;
  class Json_array_elementContext;
  class Json_query_wrapper_clauseContext;
  class Json_query_quotes_clauseContext;
  class Json_query_on_error_clauseContext;
  class Json_query_on_empty_clauseContext;
  class Json_value_on_empty_clauseContext;
  class Json_value_on_error_clauseContext;
  class Json_on_null_clauseContext;
  class Json_return_clauseContext;
  class Xml_table_clauseContext;
  class Xml_table_column_definitionContext;
  class Xquery_argumentContext;
  class Xmlnamespaces_declarationContext;
  class Element_content_expressionContext;
  class Strip_charContext;
  class Extract_datetime_valueContext;
  class Xml_expressionContext;
  class Xml_validate_according_to_clauseContext;
  class Xml_schema_nameContext;
  class Xml_element_nameContext;
  class LiteralContext;
  class SignContext;
  class Case_expressionContext;
  class Searched_caseContext;
  class Extended_caseContext;
  class When_operandContext;
  class Select_only_statementContext;
  class Query_factoring_clauseContext;
  class Factoring_elementContext;
  class Query_nameContext;
  class Select_statementContext;
  class For_update_clauseContext;
  class Isolation_clauseContext;
  class Lock_request_clauseContext;
  class Optimize_for_clauseContext;
  class Concurrent_access_resolution_clauseContext;
  class All_distinctContext;
  class From_clauseContext;
  class Table_referenceContext;
  class Federated_specific_condition_valueContext;
  class Tablesample_clauseContext;
  class Period_specificationContext;
  class Using_clauseContext;
  class Correlation_clauseContext;
  class Group_by_clauseContext;
  class Having_clauseContext;
  class Order_by_clauseContext;
  class Order_by_itemContext;
  class Asc_descContext;
  class ColumnPositionContext;
  class Values_expressionContext; 

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_statementContext *> sql_statement();
    Sql_statementContext* sql_statement(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class  Sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_statementContext *alter_statement();
    Create_statementContext *create_statement();
    Drop_statementContext *drop_statement();
    Select_statementContext *select_statement();
    Insert_statementContext *insert_statement();
    Update_statementContext *update_statement();
    Delete_statementContext *delete_statement();
    Merge_statementContext *merge_statement();
    Fetch_statementContext *fetch_statement();
    Truncate_statementContext *truncate_statement();
    antlr4::tree::TerminalNode *CALL();
    Procedure_nameContext *procedure_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionsContext *> expressions();
    ExpressionsContext* expressions(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Grant_statementContext *grant_statement();
    Revoke_statementContext *revoke_statement();
    antlr4::tree::TerminalNode *OPEN();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    Descriptor_nameContext *descriptor_name();
    antlr4::tree::TerminalNode *CLOSE();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LOGGED();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *COMMIT();
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROLLBACK();
    antlr4::tree::TerminalNode* ROLLBACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DELETE();
    antlr4::tree::TerminalNode* DELETE(size_t i);
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *EXPLAIN();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *XQUERY();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *ONCE();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *QUERYNO();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    NumContext *num();
    antlr4::tree::TerminalNode *QUERYTAG();
    antlr4::tree::TerminalNode *SELECTION();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *REFRESH();
    std::vector<Online_optionsContext *> online_options();
    Online_optionsContext* online_options(size_t i);
    std::vector<Query_optimization_optionsContext *> query_optimization_options();
    Query_optimization_optionsContext* query_optimization_options(size_t i);
    antlr4::tree::TerminalNode *INCREMENTAL();
    Server_nameContext *server_name();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SAVEPOINT();
    Savepoint_nameContext *savepoint_name();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    std::vector<Index_nameContext *> index_name();
    Index_nameContext* index_name(size_t i);
    antlr4::tree::TerminalNode *STOGROUP();
    std::vector<Group_nameContext *> group_name();
    Group_nameContext* group_name(size_t i);
    antlr4::tree::TerminalNode *TABLESPACE();
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    antlr4::tree::TerminalNode *WORK();
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> RETAIN();
    antlr4::tree::TerminalNode* RETAIN(size_t i);
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *LOCKS();
    Set_statementContext *set_statement();
    antlr4::tree::TerminalNode *COMMENT();
    ObjectsContext *objects();
    std::vector<antlr4::tree::TerminalNode *> IS();
    antlr4::tree::TerminalNode* IS(size_t i);
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_statementContext* sql_statement();

  class  Flush_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Monitor_nameContext *monitor_name();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *FOR();
    Data_source_nameContext *data_source_name();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *PROFILE();
    Profile_nameContext *profile_name();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *INVALIDATION();
    StringContext *string();
    HexadecimalContext *hexadecimal();
    antlr4::tree::TerminalNode *AUTHENTICATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_statementContext* flush_statement();

  class  Set_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    Constraint_name_listContext *constraint_name_list();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *CONNECTION();
    Server_nameContext *server_name();
    std::vector<antlr4::tree::TerminalNode *> CURRENT();
    antlr4::tree::TerminalNode* CURRENT(size_t i);
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *DEGREE();
    std::vector<antlr4::tree::TerminalNode *> EXPLAIN();
    antlr4::tree::TerminalNode* EXPLAIN(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *ANY();
    NumContext *num();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *ISOLATION();
    Isolation_levelContext *isolation_level();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *NONE();
    std::vector<Maintained_types_elementContext *> maintained_types_element();
    Maintained_types_elementContext* maintained_types_element(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *OPTIMIZATION();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PACKAGE();
    std::vector<antlr4::tree::TerminalNode *> PATH();
    antlr4::tree::TerminalNode* PATH(size_t i);
    std::vector<Package_path_elementContext *> package_path_element();
    Package_path_elementContext* package_path_element(size_t i);
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *TEMPORAL();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Monitor_nameContext *monitor_name();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *INTEGRITY();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<Table_names_with_checked_optionContext *> table_names_with_checked_option();
    Table_names_with_checked_optionContext* table_names_with_checked_option(size_t i);
    antlr4::tree::TerminalNode *CHECKED();
    std::vector<Table_names_with_unchecked_optionContext *> table_names_with_unchecked_option();
    Table_names_with_unchecked_optionContext* table_names_with_unchecked_option(size_t i);
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *PRUNE();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *EXCEPTION();
    std::vector<In_table_use_clauseContext *> in_table_use_clause();
    In_table_use_clauseContext* in_table_use_clause(size_t i);
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *NOT();
    To_descendent_typesContext *to_descendent_types();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *RESET();
    std::vector<antlr4::tree::TerminalNode *> CURRENT_PATH();
    antlr4::tree::TerminalNode* CURRENT_PATH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SYSTEM_PATH();
    antlr4::tree::TerminalNode* SYSTEM_PATH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *QUESTION_MARK();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *SQLID();
    Schema_nameContext *schema_name();
    std::vector<antlr4::tree::TerminalNode *> SERVER();
    antlr4::tree::TerminalNode* SERVER(size_t i);
    Option_nameContext *option_name();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ADMINISTRATION();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    List_nameContext *list_name();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *RELEASED();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_statementContext* set_statement();

  class  Maintained_types_elementContext : public antlr4::ParserRuleContext {
  public:
    Maintained_types_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPTIMIZATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Maintained_types_elementContext* maintained_types_element();

  class  Package_path_elementContext : public antlr4::ParserRuleContext {
  public:
    Package_path_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_nameContext *variable_name();
    StringContext *string();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_path_elementContext* package_path_element();

  class  In_table_use_clauseContext : public antlr4::ParserRuleContext {
  public:
    In_table_use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *USE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_table_use_clauseContext* in_table_use_clause();

  class  To_descendent_typesContext : public antlr4::ParserRuleContext {
  public:
    To_descendent_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> TABLES();
    antlr4::tree::TerminalNode* TABLES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MATERIALIZED();
    antlr4::tree::TerminalNode* MATERIALIZED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FOREIGN();
    antlr4::tree::TerminalNode* FOREIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAGING();
    antlr4::tree::TerminalNode* STAGING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  To_descendent_typesContext* to_descendent_types();

  class  Table_names_with_checked_optionContext : public antlr4::ParserRuleContext {
  public:
    Table_names_with_checked_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    std::vector<Table_checked_optionsContext *> table_checked_options();
    Table_checked_optionsContext* table_checked_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_names_with_checked_optionContext* table_names_with_checked_option();

  class  Table_names_with_unchecked_optionContext : public antlr4::ParserRuleContext {
  public:
    Table_names_with_unchecked_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    std::vector<Table_unchecked_optionsContext *> table_unchecked_options();
    Table_unchecked_optionsContext* table_unchecked_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_names_with_unchecked_optionContext* table_names_with_unchecked_option();

  class  Table_checked_optionsContext : public antlr4::ParserRuleContext {
  public:
    Table_checked_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *IDENTITY();
    Online_optionsContext *online_options();
    Query_optimization_optionsContext *query_optimization_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_checked_optionsContext* table_checked_options();

  class  Online_optionsContext : public antlr4::ParserRuleContext {
  public:
    Online_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Online_optionsContext* online_options();

  class  Query_optimization_optionsContext : public antlr4::ParserRuleContext {
  public:
    Query_optimization_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> REFRESH();
    antlr4::tree::TerminalNode* REFRESH(size_t i);
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *ANY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_optimization_optionsContext* query_optimization_options();

  class  Table_unchecked_optionsContext : public antlr4::ParserRuleContext {
  public:
    Table_unchecked_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    std::vector<Integrity_optionsContext *> integrity_options();
    Integrity_optionsContext* integrity_options(size_t i);
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ACCESS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_unchecked_optionsContext* table_unchecked_options();

  class  Integrity_optionsContext : public antlr4::ParserRuleContext {
  public:
    Integrity_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *STAGING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integrity_optionsContext* integrity_options();

  class  Type_name_keywordContext : public antlr4::ParserRuleContext {
  public:
    Type_name_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *ACCTNG();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVATE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIMEINALLSC();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *ADMINISTRATION();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALTERIN();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANALYZE_TABLE();
    antlr4::tree::TerminalNode *ANCHOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *APPL_ID();
    antlr4::tree::TerminalNode *APPL_NAME();
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *ARE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ARRAY_AGG();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *ATTACH();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *AUTHID();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *AUTH_ID();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *BASED();
    antlr4::tree::TerminalNode *BASE_TABLE();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *BLOCKINSERT();
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *BODY();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BUILD();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CATEGORIES();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTURY();
    antlr4::tree::TerminalNode *CENTURIES();
    antlr4::tree::TerminalNode *CFGALL();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *COMPONENTS();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *CONDITIONAL();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    antlr4::tree::TerminalNode *CONNECTIONS();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINERS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *CORRELATOR();
    antlr4::tree::TerminalNode *CORRESPONDING();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CPUTIME();
    antlr4::tree::TerminalNode *CPUTIMEINSC();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CREATEIN();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *CURRENT_SERVER();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_TIMEZONE();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *CUSTOM();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATATAGINSC();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *DBADM();
    antlr4::tree::TerminalNode *DBCFG();
    antlr4::tree::TerminalNode *DBCFGVALUES();
    antlr4::tree::TerminalNode *DBCLOB();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *DBMCFG();
    antlr4::tree::TerminalNode *DBMCFGVALUES();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *DB2LBACREADARRAY();
    antlr4::tree::TerminalNode *DB2LBACREADSET();
    antlr4::tree::TerminalNode *DB2LBACREADTREE();
    antlr4::tree::TerminalNode *DB2LBACWRITEARRAY();
    antlr4::tree::TerminalNode *DB2LBACWRITESET();
    antlr4::tree::TerminalNode *DB2LBACWRITETREE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *DDLALL();
    antlr4::tree::TerminalNode *DDLDATA();
    antlr4::tree::TerminalNode *DDLFEDERATED();
    antlr4::tree::TerminalNode *DDLMONITOR();
    antlr4::tree::TerminalNode *DDLSECURITY();
    antlr4::tree::TerminalNode *DDLSQL();
    antlr4::tree::TerminalNode *DDLSTORAGE();
    antlr4::tree::TerminalNode *DDLWLM();
    antlr4::tree::TerminalNode *DDLXML();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *DEADLOCKS();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DECADE();
    antlr4::tree::TerminalNode *DECADES();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DECOMPOSITION();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELETEIN();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    antlr4::tree::TerminalNode *DETACH();
    antlr4::tree::TerminalNode *DETAILED();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *DETERMINED();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIMESIONS();
    antlr4::tree::TerminalNode *DIRTY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *DISCONNECT();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *DML();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *DOW();
    antlr4::tree::TerminalNode *DOY();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DROPIN();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *EMPTY_BLOB();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *EPOCH();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXACT();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXCLUDES();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXECUTEIN();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPRESSION();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTENTSIZE();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALIZE();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GETCURRENTCONNECTION();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *HIERARCHY();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *ID_();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IDENTITY_VAL_LOCAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INCLUDES();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INDICATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INITIALIZE();
    antlr4::tree::TerminalNode *INITIALSIZE();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSERTIN();
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INTEGRITY();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *INVALIDATION();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ITERATE();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *JSON_QUERY();
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATENCY();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LEVEL2();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTAGG();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOCKSIZE();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *LONGVAR();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *METHODS();
    antlr4::tree::TerminalNode *METRICS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();
    antlr4::tree::TerminalNode *MILLENNIUM();
    antlr4::tree::TerminalNode *MILLENNIUMS();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *MINPCTUSED();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *MOVEMENT();
    antlr4::tree::TerminalNode *MOVETABLE();
    antlr4::tree::TerminalNode *MULTIPLIER();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NICKNAME();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NPSGENERIC();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *OCCURRENCE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *OLEDB();
    antlr4::tree::TerminalNode *OMIT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ONCE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLINERECOVERY();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *ORGANIZE();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OVERFLOW();
    antlr4::tree::TerminalNode *OVERHEAD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *PAD();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PAGESIZE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSING();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    antlr4::tree::TerminalNode *PCTFREE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *PERMISSION();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *PREFETCH();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRUNE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PUBLISH();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERYNO();
    antlr4::tree::TerminalNode *QUERYTAG();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *QUOTES();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RATE();
    antlr4::tree::TerminalNode *RCAC();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *REBALANCE();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *REDISTRIBUTE();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFERENCING();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *REJECT();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *REGVAR();
    antlr4::tree::TerminalNode *REGVARVALUES();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RELEASED();
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *REORG();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESIDENT();
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLFORWARD();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *RUNSTATS();
    antlr4::tree::TerminalNode *SAMPLED();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *SCALAR();
    antlr4::tree::TerminalNode *SCALEBACK();
    antlr4::tree::TerminalNode *SCANS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCHEMAADM();
    antlr4::tree::TerminalNode *SCOPE();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SELECTIN();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARES();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *SQLCODE();
    antlr4::tree::TerminalNode *SQLERROR();
    antlr4::tree::TerminalNode *SQLEXCEPTION();
    antlr4::tree::TerminalNode *SQLID();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *STABILITY();
    antlr4::tree::TerminalNode *STAGING();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATEMENTS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *STOGROUP();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STRIP();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *SYSTEM_PATH();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *TIMEZONE();
    antlr4::tree::TerminalNode *TIMEZONE_HOUR();
    antlr4::tree::TerminalNode *TIMEZONE_MINUTE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *TRANSLATION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNCONDITIONAL();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNICODE_STR();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNNEST();
    antlr4::tree::TerminalNode *UNSAMPLED();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    antlr4::tree::TerminalNode *UPDATEIN();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *URI();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USERID();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTILALL();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *VARIANCE_SAMP();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *WATER();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHENEVER();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WHITESPACE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WLMADM();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *WRITEDOWN();
    antlr4::tree::TerminalNode *WRITEUP();
    antlr4::tree::TerminalNode *WRKSTNNAME();
    antlr4::tree::TerminalNode *XMLAGG();
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
    antlr4::tree::TerminalNode *XMLBINARY();
    antlr4::tree::TerminalNode *XMLDECLARATION();
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *XMLEXISTS();
    antlr4::tree::TerminalNode *XMLFOREST();
    antlr4::tree::TerminalNode *XMLGROUP();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XMLPATTERN();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLQUERY();
    antlr4::tree::TerminalNode *XMLROW();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XMLSERIALIZE();
    antlr4::tree::TerminalNode *XMLTABLE();
    antlr4::tree::TerminalNode *XMLVALIDATE();
    antlr4::tree::TerminalNode *XQUERY();
    antlr4::tree::TerminalNode *XSLTRANSFORM();
    antlr4::tree::TerminalNode *XSROBJECT();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *YES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_name_keywordContext* type_name_keyword();

  class  Function_name_keywordContext : public antlr4::ParserRuleContext {
  public:
    Function_name_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *ACCTNG();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVATE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIMEINALLSC();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *ADMINISTRATION();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALTERIN();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANALYZE_TABLE();
    antlr4::tree::TerminalNode *ANCHOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *APPL_ID();
    antlr4::tree::TerminalNode *APPL_NAME();
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *ARE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *ATTACH();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *AUTHID();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *AUTH_ID();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *BASED();
    antlr4::tree::TerminalNode *BASE_TABLE();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *BLOCKINSERT();
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *BODY();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BUILD();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CATEGORIES();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTURY();
    antlr4::tree::TerminalNode *CENTURIES();
    antlr4::tree::TerminalNode *CFGALL();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLOB();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *COMPONENTS();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *CONDITIONAL();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    antlr4::tree::TerminalNode *CONNECTIONS();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINERS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *CORRELATOR();
    antlr4::tree::TerminalNode *CORRESPONDING();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CPUTIME();
    antlr4::tree::TerminalNode *CPUTIMEINSC();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CREATEIN();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *CURRENT_SERVER();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_TIMEZONE();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *CUSTOM();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATATAGINSC();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *DBADM();
    antlr4::tree::TerminalNode *DBCFG();
    antlr4::tree::TerminalNode *DBCFGVALUES();
    antlr4::tree::TerminalNode *DBCLOB();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *DBMCFG();
    antlr4::tree::TerminalNode *DBMCFGVALUES();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *DB2LBACREADARRAY();
    antlr4::tree::TerminalNode *DB2LBACREADSET();
    antlr4::tree::TerminalNode *DB2LBACREADTREE();
    antlr4::tree::TerminalNode *DB2LBACWRITEARRAY();
    antlr4::tree::TerminalNode *DB2LBACWRITESET();
    antlr4::tree::TerminalNode *DB2LBACWRITETREE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *DDLALL();
    antlr4::tree::TerminalNode *DDLDATA();
    antlr4::tree::TerminalNode *DDLFEDERATED();
    antlr4::tree::TerminalNode *DDLMONITOR();
    antlr4::tree::TerminalNode *DDLSECURITY();
    antlr4::tree::TerminalNode *DDLSQL();
    antlr4::tree::TerminalNode *DDLSTORAGE();
    antlr4::tree::TerminalNode *DDLWLM();
    antlr4::tree::TerminalNode *DDLXML();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *DEADLOCKS();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECADE();
    antlr4::tree::TerminalNode *DECADES();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DECOMPOSITION();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELETEIN();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    antlr4::tree::TerminalNode *DETACH();
    antlr4::tree::TerminalNode *DETAILED();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *DETERMINED();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIMESIONS();
    antlr4::tree::TerminalNode *DIRTY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *DISCONNECT();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *DML();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DOW();
    antlr4::tree::TerminalNode *DOY();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DROPIN();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *EMPTY_BLOB();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *EPOCH();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXACT();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXCLUDES();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXECUTEIN();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPRESSION();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTENTSIZE();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALIZE();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GETCURRENTCONNECTION();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *HIERARCHY();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *ID_();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IDENTITY_VAL_LOCAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INCLUDES();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INDICATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INITIALIZE();
    antlr4::tree::TerminalNode *INITIALSIZE();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSERTIN();
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTEGRITY();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *INVALIDATION();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ITERATE();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATENCY();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LEVEL2();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOCKSIZE();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *LONGVAR();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *METHODS();
    antlr4::tree::TerminalNode *METRICS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();
    antlr4::tree::TerminalNode *MILLENNIUM();
    antlr4::tree::TerminalNode *MILLENNIUMS();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *MINPCTUSED();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *MOVEMENT();
    antlr4::tree::TerminalNode *MOVETABLE();
    antlr4::tree::TerminalNode *MULTIPLIER();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NCLOB();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NICKNAME();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NPSGENERIC();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *OCCURRENCE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *OLEDB();
    antlr4::tree::TerminalNode *OMIT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ONCE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLINERECOVERY();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *ORGANIZE();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OVERFLOW();
    antlr4::tree::TerminalNode *OVERHEAD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *PAD();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PAGESIZE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSING();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    antlr4::tree::TerminalNode *PCTFREE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *PERMISSION();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *PREFETCH();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRUNE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PUBLISH();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERYNO();
    antlr4::tree::TerminalNode *QUERYTAG();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *QUOTES();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RATE();
    antlr4::tree::TerminalNode *RCAC();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REBALANCE();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *REDISTRIBUTE();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFERENCING();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *REJECT();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *REGVAR();
    antlr4::tree::TerminalNode *REGVARVALUES();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RELEASED();
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *REORG();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESIDENT();
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLFORWARD();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *RUNSTATS();
    antlr4::tree::TerminalNode *SAMPLED();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *SCALAR();
    antlr4::tree::TerminalNode *SCALEBACK();
    antlr4::tree::TerminalNode *SCANS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCHEMAADM();
    antlr4::tree::TerminalNode *SCOPE();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SELECTIN();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARES();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *SQLCODE();
    antlr4::tree::TerminalNode *SQLERROR();
    antlr4::tree::TerminalNode *SQLEXCEPTION();
    antlr4::tree::TerminalNode *SQLID();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *STABILITY();
    antlr4::tree::TerminalNode *STAGING();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATEMENTS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STOGROUP();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STRIP();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *SYSTEM_PATH();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMEZONE();
    antlr4::tree::TerminalNode *TIMEZONE_HOUR();
    antlr4::tree::TerminalNode *TIMEZONE_MINUTE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *TRANSLATION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNCONDITIONAL();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNNEST();
    antlr4::tree::TerminalNode *UNSAMPLED();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    antlr4::tree::TerminalNode *UPDATEIN();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *URI();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USERID();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTILALL();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *VARGRAPHIC();
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *WATER();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHENEVER();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WHITESPACE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WLMADM();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *WRITEDOWN();
    antlr4::tree::TerminalNode *WRITEUP();
    antlr4::tree::TerminalNode *WRKSTNNAME();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *XMLBINARY();
    antlr4::tree::TerminalNode *XMLDECLARATION();
    antlr4::tree::TerminalNode *XMLEXISTS();
    antlr4::tree::TerminalNode *XMLPATTERN();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XMLTABLE();
    antlr4::tree::TerminalNode *XQUERY();
    antlr4::tree::TerminalNode *XSROBJECT();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *YES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_name_keywordContext* function_name_keyword();

  class  Variable_name_keywordContext : public antlr4::ParserRuleContext {
  public:
    Variable_name_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *ACCTNG();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVATE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIMEINALLSC();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *ADMINISTRATION();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALTERIN();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANALYZE_TABLE();
    antlr4::tree::TerminalNode *ANCHOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *APPL_ID();
    antlr4::tree::TerminalNode *APPL_NAME();
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *ARE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ARRAY_AGG();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *ATTACH();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *AUTHID();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *AUTH_ID();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *BASED();
    antlr4::tree::TerminalNode *BASE_TABLE();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *BLOCKINSERT();
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *BODY();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BUILD();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CATEGORIES();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTURY();
    antlr4::tree::TerminalNode *CENTURIES();
    antlr4::tree::TerminalNode *CFGALL();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLOB();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *COMPONENTS();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *CONDITIONAL();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    antlr4::tree::TerminalNode *CONNECTIONS();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINERS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *CORRELATOR();
    antlr4::tree::TerminalNode *CORRESPONDING();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CPUTIME();
    antlr4::tree::TerminalNode *CPUTIMEINSC();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CREATEIN();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_SERVER();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_TIMEZONE();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *CUSTOM();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATATAGINSC();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *DBADM();
    antlr4::tree::TerminalNode *DBCFG();
    antlr4::tree::TerminalNode *DBCFGVALUES();
    antlr4::tree::TerminalNode *DBCLOB();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *DBMCFG();
    antlr4::tree::TerminalNode *DBMCFGVALUES();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *DB2LBACREADARRAY();
    antlr4::tree::TerminalNode *DB2LBACREADSET();
    antlr4::tree::TerminalNode *DB2LBACREADTREE();
    antlr4::tree::TerminalNode *DB2LBACWRITEARRAY();
    antlr4::tree::TerminalNode *DB2LBACWRITESET();
    antlr4::tree::TerminalNode *DB2LBACWRITETREE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *DDLALL();
    antlr4::tree::TerminalNode *DDLDATA();
    antlr4::tree::TerminalNode *DDLFEDERATED();
    antlr4::tree::TerminalNode *DDLMONITOR();
    antlr4::tree::TerminalNode *DDLSECURITY();
    antlr4::tree::TerminalNode *DDLSQL();
    antlr4::tree::TerminalNode *DDLSTORAGE();
    antlr4::tree::TerminalNode *DDLWLM();
    antlr4::tree::TerminalNode *DDLXML();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *DEADLOCKS();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECADE();
    antlr4::tree::TerminalNode *DECADES();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DECOMPOSITION();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELETEIN();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    antlr4::tree::TerminalNode *DETACH();
    antlr4::tree::TerminalNode *DETAILED();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *DETERMINED();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIMESIONS();
    antlr4::tree::TerminalNode *DIRTY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *DISCONNECT();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *DML();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DOW();
    antlr4::tree::TerminalNode *DOY();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DROPIN();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *EMPTY_BLOB();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *EPOCH();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXACT();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXCLUDES();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXECUTEIN();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPRESSION();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTENTSIZE();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALIZE();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GETCURRENTCONNECTION();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *HIERARCHY();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *ID_();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IDENTITY_VAL_LOCAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INCLUDES();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INDICATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INITIALIZE();
    antlr4::tree::TerminalNode *INITIALSIZE();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSERTIN();
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTEGRITY();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *INVALIDATION();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ITERATE();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *JSON_QUERY();
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATENCY();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LEVEL2();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTAGG();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOCKSIZE();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *LONGVAR();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *METHODS();
    antlr4::tree::TerminalNode *METRICS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();
    antlr4::tree::TerminalNode *MILLENNIUM();
    antlr4::tree::TerminalNode *MILLENNIUMS();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *MINPCTUSED();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *MOVEMENT();
    antlr4::tree::TerminalNode *MOVETABLE();
    antlr4::tree::TerminalNode *MULTIPLIER();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NCLOB();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NICKNAME();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NPSGENERIC();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *OCCURRENCE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *OLEDB();
    antlr4::tree::TerminalNode *OMIT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ONCE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLINERECOVERY();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *ORGANIZE();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OVERFLOW();
    antlr4::tree::TerminalNode *OVERHEAD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *PAD();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PAGESIZE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSING();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    antlr4::tree::TerminalNode *PCTFREE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *PERMISSION();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *PREFETCH();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRUNE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PUBLISH();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERYNO();
    antlr4::tree::TerminalNode *QUERYTAG();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *QUOTES();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RATE();
    antlr4::tree::TerminalNode *RCAC();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REBALANCE();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *REDISTRIBUTE();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFERENCING();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *REJECT();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *REGVAR();
    antlr4::tree::TerminalNode *REGVARVALUES();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RELEASED();
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *REORG();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESIDENT();
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLFORWARD();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *RUNSTATS();
    antlr4::tree::TerminalNode *SAMPLED();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *SCALAR();
    antlr4::tree::TerminalNode *SCALEBACK();
    antlr4::tree::TerminalNode *SCANS();
    antlr4::tree::TerminalNode *SCHEMAADM();
    antlr4::tree::TerminalNode *SCOPE();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SELECTIN();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARES();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *SQLCODE();
    antlr4::tree::TerminalNode *SQLERROR();
    antlr4::tree::TerminalNode *SQLEXCEPTION();
    antlr4::tree::TerminalNode *SQLID();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *STABILITY();
    antlr4::tree::TerminalNode *STAGING();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATEMENTS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *STOGROUP();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STRIP();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *SYSTEM_PATH();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMEZONE();
    antlr4::tree::TerminalNode *TIMEZONE_HOUR();
    antlr4::tree::TerminalNode *TIMEZONE_MINUTE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *TRANSLATION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNCONDITIONAL();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNICODE_STR();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNNEST();
    antlr4::tree::TerminalNode *UNSAMPLED();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    antlr4::tree::TerminalNode *UPDATEIN();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *URI();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *USERID();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTILALL();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *VARGRAPHIC();
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *VARIANCE_SAMP();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *WATER();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHENEVER();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WHITESPACE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WLMADM();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *WRITEDOWN();
    antlr4::tree::TerminalNode *WRITEUP();
    antlr4::tree::TerminalNode *WRKSTNNAME();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *XMLAGG();
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
    antlr4::tree::TerminalNode *XMLBINARY();
    antlr4::tree::TerminalNode *XMLDECLARATION();
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *XMLEXISTS();
    antlr4::tree::TerminalNode *XMLFOREST();
    antlr4::tree::TerminalNode *XMLGROUP();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XMLPATTERN();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLQUERY();
    antlr4::tree::TerminalNode *XMLROW();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XMLSERIALIZE();
    antlr4::tree::TerminalNode *XMLTABLE();
    antlr4::tree::TerminalNode *XMLVALIDATE();
    antlr4::tree::TerminalNode *XQUERY();
    antlr4::tree::TerminalNode *XSLTRANSFORM();
    antlr4::tree::TerminalNode *XSROBJECT();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *YES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_name_keywordContext* variable_name_keyword();

  class  Definition_column_name_keywordContext : public antlr4::ParserRuleContext {
  public:
    Definition_column_name_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *ACCTNG();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVATE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIMEINALLSC();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *ADMINISTRATION();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALTERIN();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANALYZE_TABLE();
    antlr4::tree::TerminalNode *ANCHOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *APPL_ID();
    antlr4::tree::TerminalNode *APPL_NAME();
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *ARE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ARRAY_AGG();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *ATTACH();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *AUTHID();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *AUTH_ID();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *BASED();
    antlr4::tree::TerminalNode *BASE_TABLE();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *BLOCKINSERT();
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *BODY();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BUILD();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CATEGORIES();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTURY();
    antlr4::tree::TerminalNode *CENTURIES();
    antlr4::tree::TerminalNode *CFGALL();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLOB();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *COMPONENTS();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *CONDITIONAL();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    antlr4::tree::TerminalNode *CONNECTIONS();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINERS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *CORRELATOR();
    antlr4::tree::TerminalNode *CORRESPONDING();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CPUTIME();
    antlr4::tree::TerminalNode *CPUTIMEINSC();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CREATEIN();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *CUSTOM();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATATAGINSC();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *DBADM();
    antlr4::tree::TerminalNode *DBCFG();
    antlr4::tree::TerminalNode *DBCFGVALUES();
    antlr4::tree::TerminalNode *DBCLOB();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *DBMCFG();
    antlr4::tree::TerminalNode *DBMCFGVALUES();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *DB2LBACREADARRAY();
    antlr4::tree::TerminalNode *DB2LBACREADSET();
    antlr4::tree::TerminalNode *DB2LBACREADTREE();
    antlr4::tree::TerminalNode *DB2LBACWRITEARRAY();
    antlr4::tree::TerminalNode *DB2LBACWRITESET();
    antlr4::tree::TerminalNode *DB2LBACWRITETREE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *DDLALL();
    antlr4::tree::TerminalNode *DDLDATA();
    antlr4::tree::TerminalNode *DDLFEDERATED();
    antlr4::tree::TerminalNode *DDLMONITOR();
    antlr4::tree::TerminalNode *DDLSECURITY();
    antlr4::tree::TerminalNode *DDLSQL();
    antlr4::tree::TerminalNode *DDLSTORAGE();
    antlr4::tree::TerminalNode *DDLWLM();
    antlr4::tree::TerminalNode *DDLXML();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *DEADLOCKS();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECADE();
    antlr4::tree::TerminalNode *DECADES();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DECOMPOSITION();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELETEIN();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    antlr4::tree::TerminalNode *DETACH();
    antlr4::tree::TerminalNode *DETAILED();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *DETERMINED();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIMESIONS();
    antlr4::tree::TerminalNode *DIRTY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *DISCONNECT();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *DML();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DOW();
    antlr4::tree::TerminalNode *DOY();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DROPIN();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *EMPTY_BLOB();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *EPOCH();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXACT();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXCLUDES();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXECUTEIN();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPRESSION();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTENTSIZE();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALIZE();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GETCURRENTCONNECTION();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *HIERARCHY();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *ID_();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IDENTITY_VAL_LOCAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INCLUDES();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INDICATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INITIALIZE();
    antlr4::tree::TerminalNode *INITIALSIZE();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSERTIN();
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTEGRITY();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *INVALIDATION();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ITERATE();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *JSON_QUERY();
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATENCY();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LEVEL2();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTAGG();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOCKSIZE();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *LONGVAR();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *METHODS();
    antlr4::tree::TerminalNode *METRICS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();
    antlr4::tree::TerminalNode *MILLENNIUM();
    antlr4::tree::TerminalNode *MILLENNIUMS();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *MINPCTUSED();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *MOVEMENT();
    antlr4::tree::TerminalNode *MOVETABLE();
    antlr4::tree::TerminalNode *MULTIPLIER();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NCLOB();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NICKNAME();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NPSGENERIC();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *OCCURRENCE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *OLEDB();
    antlr4::tree::TerminalNode *OMIT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ONCE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLINERECOVERY();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *ORGANIZE();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OVERFLOW();
    antlr4::tree::TerminalNode *OVERHEAD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *PAD();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PAGESIZE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSING();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    antlr4::tree::TerminalNode *PCTFREE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *PERMISSION();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *PREFETCH();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRUNE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PUBLISH();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERYNO();
    antlr4::tree::TerminalNode *QUERYTAG();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *QUOTES();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RATE();
    antlr4::tree::TerminalNode *RCAC();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REBALANCE();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *REDISTRIBUTE();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFERENCING();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *REJECT();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *REGVAR();
    antlr4::tree::TerminalNode *REGVARVALUES();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RELEASED();
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *REORG();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESIDENT();
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLFORWARD();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *RUNSTATS();
    antlr4::tree::TerminalNode *SAMPLED();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *SCALAR();
    antlr4::tree::TerminalNode *SCALEBACK();
    antlr4::tree::TerminalNode *SCANS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCHEMAADM();
    antlr4::tree::TerminalNode *SCOPE();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SELECTIN();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARES();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *SQLCODE();
    antlr4::tree::TerminalNode *SQLERROR();
    antlr4::tree::TerminalNode *SQLEXCEPTION();
    antlr4::tree::TerminalNode *SQLID();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *STABILITY();
    antlr4::tree::TerminalNode *STAGING();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATEMENTS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *STOGROUP();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STRIP();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *SYSTEM_PATH();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMEZONE();
    antlr4::tree::TerminalNode *TIMEZONE_HOUR();
    antlr4::tree::TerminalNode *TIMEZONE_MINUTE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *TRANSLATION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNCONDITIONAL();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNICODE_STR();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNNEST();
    antlr4::tree::TerminalNode *UNSAMPLED();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    antlr4::tree::TerminalNode *UPDATEIN();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *URI();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USERID();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTILALL();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *VARGRAPHIC();
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *VARIANCE_SAMP();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *WATER();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHENEVER();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WHITESPACE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WLMADM();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *WRITEDOWN();
    antlr4::tree::TerminalNode *WRITEUP();
    antlr4::tree::TerminalNode *WRKSTNNAME();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *XMLAGG();
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
    antlr4::tree::TerminalNode *XMLBINARY();
    antlr4::tree::TerminalNode *XMLDECLARATION();
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *XMLEXISTS();
    antlr4::tree::TerminalNode *XMLFOREST();
    antlr4::tree::TerminalNode *XMLGROUP();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XMLPATTERN();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLQUERY();
    antlr4::tree::TerminalNode *XMLROW();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XMLSERIALIZE();
    antlr4::tree::TerminalNode *XMLTABLE();
    antlr4::tree::TerminalNode *XMLVALIDATE();
    antlr4::tree::TerminalNode *XQUERY();
    antlr4::tree::TerminalNode *XSLTRANSFORM();
    antlr4::tree::TerminalNode *XSROBJECT();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *YES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_column_name_keywordContext* definition_column_name_keyword();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSENT();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *ACCTNG();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ACTIVATE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIMEINALLSC();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *ADMINISTRATION();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALLOCATE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *ALTERIN();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *ANALYZE_TABLE();
    antlr4::tree::TerminalNode *ANCHOR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *APPL_ID();
    antlr4::tree::TerminalNode *APPL_NAME();
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *ARE();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *ARRAY_AGG();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *ASIN();
    antlr4::tree::TerminalNode *ASSERTION();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *ATAN2();
    antlr4::tree::TerminalNode *ATAN();
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *ATTACH();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *AUTHID();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *AUTH_ID();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *AVG();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *BASE64();
    antlr4::tree::TerminalNode *BASED();
    antlr4::tree::TerminalNode *BASE_TABLE();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *BLOCKINSERT();
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *BODY();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *BUFFER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BUILD();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CATEGORIES();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *CEIL();
    antlr4::tree::TerminalNode *CEILING();
    antlr4::tree::TerminalNode *CENTURY();
    antlr4::tree::TerminalNode *CENTURIES();
    antlr4::tree::TerminalNode *CFGALL();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CHECKED();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLOB();
    antlr4::tree::TerminalNode *CLOSE();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COALESCE();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *COLLATION();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *COMPACT();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *COMPONENTS();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *CONDITIONAL();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    antlr4::tree::TerminalNode *CONNECTIONS();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    antlr4::tree::TerminalNode *CONSTRAINTS();
    antlr4::tree::TerminalNode *CONTAINERS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CONTENT();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *CORRELATOR();
    antlr4::tree::TerminalNode *CORRESPONDING();
    antlr4::tree::TerminalNode *COS();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *CPUTIME();
    antlr4::tree::TerminalNode *CPUTIMEINSC();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CREATEIN();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *CUSTOM();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DATATAGINSC();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *DBADM();
    antlr4::tree::TerminalNode *DBCFG();
    antlr4::tree::TerminalNode *DBCFGVALUES();
    antlr4::tree::TerminalNode *DBCLOB();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *DBMCFG();
    antlr4::tree::TerminalNode *DBMCFGVALUES();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *DB2LBACREADARRAY();
    antlr4::tree::TerminalNode *DB2LBACREADSET();
    antlr4::tree::TerminalNode *DB2LBACREADTREE();
    antlr4::tree::TerminalNode *DB2LBACWRITEARRAY();
    antlr4::tree::TerminalNode *DB2LBACWRITESET();
    antlr4::tree::TerminalNode *DB2LBACWRITETREE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *DDLALL();
    antlr4::tree::TerminalNode *DDLDATA();
    antlr4::tree::TerminalNode *DDLFEDERATED();
    antlr4::tree::TerminalNode *DDLMONITOR();
    antlr4::tree::TerminalNode *DDLSECURITY();
    antlr4::tree::TerminalNode *DDLSQL();
    antlr4::tree::TerminalNode *DDLSTORAGE();
    antlr4::tree::TerminalNode *DDLWLM();
    antlr4::tree::TerminalNode *DDLXML();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *DEADLOCKS();
    antlr4::tree::TerminalNode *DEALLOCATE();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECADE();
    antlr4::tree::TerminalNode *DECADES();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *DECOMPOSITION();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *DEFERRABLE();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *DEFINER();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *DEGREES();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DELETEIN();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    antlr4::tree::TerminalNode *DETACH();
    antlr4::tree::TerminalNode *DETAILED();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *DETERMINED();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *DIMESIONS();
    antlr4::tree::TerminalNode *DIRTY();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *DISCONNECT();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *DML();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DOW();
    antlr4::tree::TerminalNode *DOY();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DROPIN();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *EMPTY_BLOB();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *END_EXEC();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *EPOCH();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *EXACT();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCEPTION();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXCLUDES();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *EXEC();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *EXECUTEIN();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *EXPRESSION();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *EXTENSION();
    antlr4::tree::TerminalNode *EXTENTSIZE();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FINALIZE();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *GENERIC();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *GETCURRENTCONNECTION();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *HIERARCHY();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *ID_();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IDENTITY_VAL_LOCAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *INCLUDES();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *INDICATOR();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *INITIALIZE();
    antlr4::tree::TerminalNode *INITIALSIZE();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INOUT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INSERTIN();
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INTEGRITY();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *INVALIDATION();
    antlr4::tree::TerminalNode *INVOKER();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *ITERATE();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *JSON_ARRAY();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    antlr4::tree::TerminalNode *JSON_QUERY();
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *JSON_VALUE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LATENCY();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LCASE();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LEVEL2();
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *LISTAGG();
    antlr4::tree::TerminalNode *LN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LOCATE();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *LOCKSIZE();
    antlr4::tree::TerminalNode *LOG10();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *LONGVAR();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *LTRIM();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *MATCH();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *METHODS();
    antlr4::tree::TerminalNode *METRICS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();
    antlr4::tree::TerminalNode *MILLENNIUM();
    antlr4::tree::TerminalNode *MILLENNIUMS();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *MINPCTUSED();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *MOVEMENT();
    antlr4::tree::TerminalNode *MOVETABLE();
    antlr4::tree::TerminalNode *MULTIPLIER();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NCLOB();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NICKNAME();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NOWAIT();
    antlr4::tree::TerminalNode *NPSGENERIC();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *OCCURRENCE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *OLEDB();
    antlr4::tree::TerminalNode *OMIT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ONCE();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *ONLINERECOVERY();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *ORGANIZE();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *OVERFLOW();
    antlr4::tree::TerminalNode *OVERHEAD();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *PAD();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *PAGESIZE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *PARTIAL();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *PASSING();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    antlr4::tree::TerminalNode *PCTFREE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *PERMISSION();
    antlr4::tree::TerminalNode *PI();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *PREFETCH();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *PREPARE();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *PRIOR();
    antlr4::tree::TerminalNode *PRIORITY();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PROCEDURE();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRUNE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PUBLISH();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *QUERYNO();
    antlr4::tree::TerminalNode *QUERYTAG();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *QUOTES();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *RADIANS();
    antlr4::tree::TerminalNode *RAISE();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RATE();
    antlr4::tree::TerminalNode *RCAC();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *REBALANCE();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *REDISTRIBUTE();
    antlr4::tree::TerminalNode *REDUCE();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *REFERENCES();
    antlr4::tree::TerminalNode *REFERENCING();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *REJECT();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *REGVAR();
    antlr4::tree::TerminalNode *REGVARVALUES();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *RELATIVE();
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *RELEASED();
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *REORG();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *RESIDENT();
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *RETAIN();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *ROLLFORWARD();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *ROW_COUNT();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RTRIM();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *RUNSTATS();
    antlr4::tree::TerminalNode *SAMPLED();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *SAVE();
    antlr4::tree::TerminalNode *SCALAR();
    antlr4::tree::TerminalNode *SCALEBACK();
    antlr4::tree::TerminalNode *SCANS();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SCHEMAADM();
    antlr4::tree::TerminalNode *SCOPE();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *SCROLL();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *SEGMENT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SELECTIN();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *SHARES();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SIN();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *SQLCODE();
    antlr4::tree::TerminalNode *SQLERROR();
    antlr4::tree::TerminalNode *SQLEXCEPTION();
    antlr4::tree::TerminalNode *SQLID();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *SQRT();
    antlr4::tree::TerminalNode *STABILITY();
    antlr4::tree::TerminalNode *STAGING();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *STATEMENTS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_POP();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *STOGROUP();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *STRIP();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *SUBSTR();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *SYSTEM_PATH();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *TAN();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *THROUGH();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *TIMEZONE();
    antlr4::tree::TerminalNode *TIMEZONE_HOUR();
    antlr4::tree::TerminalNode *TIMEZONE_MINUTE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *TRANSLATE();
    antlr4::tree::TerminalNode *TRANSLATION();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *TRUNCATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *UCASE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *UNCONDITIONAL();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *UNDO();
    antlr4::tree::TerminalNode *UNFORMATTED();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *UNICODE_STR();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *UNNEST();
    antlr4::tree::TerminalNode *UNSAMPLED();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    antlr4::tree::TerminalNode *UPDATEIN();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *UPPER();
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *URI();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *USERID();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *UTILALL();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VAR_POP();
    antlr4::tree::TerminalNode *VAR_SAMP();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *VARGRAPHIC();
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *VARIANCE_SAMP();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *WATER();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHENEVER();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *WHITESPACE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WLMADM();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *WRITEDOWN();
    antlr4::tree::TerminalNode *WRITEUP();
    antlr4::tree::TerminalNode *WRKSTNNAME();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *XMLAGG();
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
    antlr4::tree::TerminalNode *XMLBINARY();
    antlr4::tree::TerminalNode *XMLDECLARATION();
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *XMLEXISTS();
    antlr4::tree::TerminalNode *XMLFOREST();
    antlr4::tree::TerminalNode *XMLGROUP();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *XMLPATTERN();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLQUERY();
    antlr4::tree::TerminalNode *XMLROW();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *XMLSERIALIZE();
    antlr4::tree::TerminalNode *XMLTABLE();
    antlr4::tree::TerminalNode *XMLVALIDATE();
    antlr4::tree::TerminalNode *XQUERY();
    antlr4::tree::TerminalNode *XSLTRANSFORM();
    antlr4::tree::TerminalNode *XSROBJECT();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *YES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  Insert_statementContext : public antlr4::ParserRuleContext {
  public:
    Insert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    Table_nameContext *table_name();
    QueryContext *query();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *UR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statementContext* insert_statement();

  class  Offset_clauseContext : public antlr4::ParserRuleContext {
  public:
    Offset_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFFSET();
    Row_rowsContext *row_rows();
    Integer_literalContext *integer_literal();
    antlr4::tree::TerminalNode *QUESTION_MARK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Offset_clauseContext* offset_clause();

  class  Fetch_clauseContext : public antlr4::ParserRuleContext {
  public:
    Fetch_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    First_nextContext *first_next();
    Row_rowsContext *row_rows();
    antlr4::tree::TerminalNode *ONLY();
    Integer_literalContext *integer_literal();
    antlr4::tree::TerminalNode *QUESTION_MARK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_clauseContext* fetch_clause();

  class  First_nextContext : public antlr4::ParserRuleContext {
  public:
    First_nextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *NEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  First_nextContext* first_next();

  class  Row_rowsContext : public antlr4::ParserRuleContext {
  public:
    Row_rowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_rowsContext* row_rows();

  class  Integer_literalContext : public antlr4::ParserRuleContext {
  public:
    Integer_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_literalContext* integer_literal();

  class  Merge_statementContext : public antlr4::ParserRuleContext {
  public:
    Merge_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *USING();
    Table_referenceContext *table_reference();
    antlr4::tree::TerminalNode *ON();
    Search_conditionContext *search_condition();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Select_only_statementContext *select_only_statement();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Correlation_clauseContext *correlation_clause();
    std::vector<Merge_when_clauseContext *> merge_when_clause();
    Merge_when_clauseContext* merge_when_clause(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *UR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_statementContext* merge_statement();

  class  Merge_when_clauseContext : public antlr4::ParserRuleContext {
  public:
    Merge_when_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    Modification_operationContext *modification_operation();
    Signal_statementContext *signal_statement();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *AND();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_when_clauseContext* merge_when_clause();

  class  Modification_operationContext : public antlr4::ParserRuleContext {
  public:
    Modification_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    Assignment_clauseContext *assignment_clause();
    Period_clauseContext *period_clause();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *INSERT();
    Values_expressionContext *values_expression();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modification_operationContext* modification_operation();

  class  Merge_when_matchedContext : public antlr4::ParserRuleContext {
  public:
    Merge_when_matchedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    Merge_updateContext *merge_update();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *AND();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_when_matchedContext* merge_when_matched();

  class  Merge_when_not_matchedContext : public antlr4::ParserRuleContext {
  public:
    Merge_when_not_matchedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *THEN();
    Merge_insertContext *merge_insert();
    antlr4::tree::TerminalNode *AND();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_when_not_matchedContext* merge_when_not_matched();

  class  Merge_updateContext : public antlr4::ParserRuleContext {
  public:
    Merge_updateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_updateContext* merge_update();

  class  Merge_insertContext : public antlr4::ParserRuleContext {
  public:
    Merge_insertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    ExpressionsContext *expressions();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_insertContext* merge_insert();

  class  Search_conditionContext : public antlr4::ParserRuleContext {
  public:
    Search_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *LIKE();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *IN();
    Table_subqueryContext *table_subquery();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    Primitive_expressionContext *primitive_expression();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_conditionContext* search_condition();
  Search_conditionContext* search_condition(int precedence);
  class  Update_statementContext : public antlr4::ParserRuleContext {
  public:
    Update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    Assignment_clauseContext *assignment_clause();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Select_only_statementContext *select_only_statement();
    Correlation_clauseContext *correlation_clause();
    Include_columnsContext *include_columns();
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    antlr4::tree::TerminalNode *WITH();
    Concurrent_access_resolution_clauseContext *concurrent_access_resolution_clause();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *UR();
    Period_clauseContext *period_clause();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    Cursor_nameContext *cursor_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statementContext* update_statement();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Boolean_expressionContext *boolean_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clauseContext* where_clause();

  class  Boolean_expressionContext : public antlr4::ParserRuleContext {
  public:
    Boolean_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<Boolean_expressionContext *> boolean_expression();
    Boolean_expressionContext* boolean_expression(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *LIKE();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *IN();
    Table_subqueryContext *table_subquery();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_expressionContext* boolean_expression();
  Boolean_expressionContext* boolean_expression(int precedence);
  class  Table_subqueryContext : public antlr4::ParserRuleContext {
  public:
    Table_subqueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    QueryContext *query();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Order_by_clauseContext *order_by_clause();
    For_update_clauseContext *for_update_clause();
    Optimize_for_clauseContext *optimize_for_clause();
    Isolation_clauseContext *isolation_clause();
    Concurrent_access_resolution_clauseContext *concurrent_access_resolution_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_subqueryContext* table_subquery();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LTGT();
    antlr4::tree::TerminalNode *NE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  Delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Select_only_statementContext *select_only_statement();
    Correlation_clauseContext *correlation_clause();
    Include_columnsContext *include_columns();
    Assignment_clauseContext *assignment_clause();
    Where_clauseContext *where_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    antlr4::tree::TerminalNode *WITH();
    Concurrent_access_resolution_clauseContext *concurrent_access_resolution_clause();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *UR();
    Period_clauseContext *period_clause();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    Cursor_nameContext *cursor_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statementContext* delete_statement();

  class  Include_columnsContext : public antlr4::ParserRuleContext {
  public:
    Include_columnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_columnsContext* include_columns();

  class  Assignment_clauseContext : public antlr4::ParserRuleContext {
  public:
    Assignment_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_clauseContext* assignment_clause();

  class  Period_clauseContext : public antlr4::ParserRuleContext {
  public:
    Period_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *FROM();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_clauseContext* period_clause();

  class  Grant_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GRANT();
    antlr4::tree::TerminalNode* GRANT(size_t i);
    std::vector<Database_authorityContext *> database_authority();
    Database_authorityContext* database_authority(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *TO();
    GranteesContext *grantees();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ExemptionContext *exemption();
    antlr4::tree::TerminalNode *FOR();
    Policy_nameContext *policy_name();
    Global_variable_privilegesContext *global_variable_privileges();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTION();
    std::vector<antlr4::tree::TerminalNode *> CONTROL();
    antlr4::tree::TerminalNode* CONTROL(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    std::vector<antlr4::tree::TerminalNode *> EXECUTE();
    antlr4::tree::TerminalNode* EXECUTE(size_t i);
    antlr4::tree::TerminalNode *MODULE_();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    std::vector<antlr4::tree::TerminalNode *> BIND();
    antlr4::tree::TerminalNode* BIND(size_t i);
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *ADMIN();
    Routine_privilegesContext *routine_privileges();
    antlr4::tree::TerminalNode *ALL();
    std::vector<Schema_privilegesContext *> schema_privileges();
    Schema_privilegesContext* schema_privileges(size_t i);
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    std::vector<antlr4::tree::TerminalNode *> USAGE();
    antlr4::tree::TerminalNode* USAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    std::vector<Authorization_identifierContext *> authorization_identifier();
    Authorization_identifierContext* authorization_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PUBLIC();
    antlr4::tree::TerminalNode* PUBLIC(size_t i);
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    Table_nameContext *table_name();
    std::vector<Table_privilegesContext *> table_privileges();
    Table_privilegesContext* table_privileges(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_statementContext* grant_statement();

  class  Revoke_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    std::vector<Database_authorityContext *> database_authority();
    Database_authorityContext* database_authority(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *FROM();
    GranteesContext *grantees();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *BY();
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    ExemptionContext *exemption();
    antlr4::tree::TerminalNode *FOR();
    Policy_nameContext *policy_name();
    Global_variable_privilegesContext *global_variable_privileges();
    antlr4::tree::TerminalNode *RESTRICT();
    std::vector<antlr4::tree::TerminalNode *> CONTROL();
    antlr4::tree::TerminalNode* CONTROL(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    std::vector<antlr4::tree::TerminalNode *> EXECUTE();
    antlr4::tree::TerminalNode* EXECUTE(size_t i);
    antlr4::tree::TerminalNode *MODULE_();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    std::vector<antlr4::tree::TerminalNode *> BIND();
    antlr4::tree::TerminalNode* BIND(size_t i);
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *ROLE();
    Routine_privilegesContext *routine_privileges();
    std::vector<Schema_privilegesContext *> schema_privileges();
    Schema_privilegesContext* schema_privileges(size_t i);
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    std::vector<antlr4::tree::TerminalNode *> USAGE();
    antlr4::tree::TerminalNode* USAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    std::vector<Authorization_identifierContext *> authorization_identifier();
    Authorization_identifierContext* authorization_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PUBLIC();
    antlr4::tree::TerminalNode* PUBLIC(size_t i);
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    Table_nameContext *table_name();
    std::vector<Table_privilegesContext *> table_privileges();
    Table_privilegesContext* table_privileges(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_statementContext* revoke_statement();

  class  Workload_nameContext : public antlr4::ParserRuleContext {
  public:
    Workload_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Workload_nameContext* workload_name();

  class  Savepoint_nameContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_nameContext* savepoint_name();

  class  Table_privilegesContext : public antlr4::ParserRuleContext {
  public:
    Table_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *UPDATE();
    Simple_column_name_listContext *simple_column_name_list();
    antlr4::tree::TerminalNode *REFERENCES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_privilegesContext* table_privileges();

  class  Global_variable_privilegesContext : public antlr4::ParserRuleContext {
  public:
    Global_variable_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    std::vector<antlr4::tree::TerminalNode *> READ();
    antlr4::tree::TerminalNode* READ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WRITE();
    antlr4::tree::TerminalNode* WRITE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_variable_privilegesContext* global_variable_privileges();

  class  Routine_privilegesContext : public antlr4::ParserRuleContext {
  public:
    Routine_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *STAR();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();
    Method_designatorContext *method_designator();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *PROCEDURE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Routine_privilegesContext* routine_privileges();

  class  Method_designatorContext : public antlr4::ParserRuleContext {
  public:
    Method_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_designatorContext* method_designator();

  class  ExemptionContext : public antlr4::ParserRuleContext {
  public:
    ExemptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DB2LBACREADARRAY();
    antlr4::tree::TerminalNode *DB2LBACREADSET();
    antlr4::tree::TerminalNode *DB2LBACREADTREE();
    antlr4::tree::TerminalNode *DB2LBACWRITEARRAY();
    antlr4::tree::TerminalNode *WRITEDOWN();
    antlr4::tree::TerminalNode *WRITEUP();
    antlr4::tree::TerminalNode *DB2LBACWRITESET();
    antlr4::tree::TerminalNode *DB2LBACWRITETREE();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExemptionContext* exemption();

  class  Database_authorityContext : public antlr4::ParserRuleContext {
  public:
    Database_authorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DBADM();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITHOUT();
    antlr4::tree::TerminalNode* WITHOUT(size_t i);
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *WLMADM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_authorityContext* database_authority();

  class  Schema_privilegesContext : public antlr4::ParserRuleContext {
  public:
    Schema_privilegesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *ALTERIN();
    antlr4::tree::TerminalNode *CREATEIN();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DELETEIN();
    antlr4::tree::TerminalNode *DROPIN();
    antlr4::tree::TerminalNode *EXECUTEIN();
    antlr4::tree::TerminalNode *INSERTIN();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *SCHEMAADM();
    antlr4::tree::TerminalNode *SELECTIN();
    antlr4::tree::TerminalNode *UPDATEIN();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *RCAC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *DATA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_privilegesContext* schema_privileges();

  class  ObjectsContext : public antlr4::ParserRuleContext {
  public:
    ObjectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *COLUMN();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Partition_group_nameContext *partition_group_name();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MAPPING();
    Function_mapping_nameContext *function_mapping_name();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *MASK();
    Mask_nameContext *mask_name();
    antlr4::tree::TerminalNode *MODULE_();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *NICKNAME();
    NicknameContext *nickname();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    StringContext *string();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *VERSION();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *OPTION();
    Option_nameContext *option_name();
    antlr4::tree::TerminalNode *FOR();
    Remote_serverContext *remote_server();
    antlr4::tree::TerminalNode *STOGROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Id_Context *id_();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *XSROBJECT();
    Alias_designatorContext *alias_designator();
    Function_designatorContext *function_designator();
    Procedure_designatorContext *procedure_designator();
    Service_class_designatorContext *service_class_designator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectsContext* objects();

  class  Alias_designatorContext : public antlr4::ParserRuleContext {
  public:
    Alias_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALIAS();
    Synonym_nameContext *synonym_name();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *SEQUENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_designatorContext* alias_designator();

  class  Function_designatorContext : public antlr4::ParserRuleContext {
  public:
    Function_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_designatorContext* function_designator();

  class  Procedure_designatorContext : public antlr4::ParserRuleContext {
  public:
    Procedure_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_designatorContext* procedure_designator();

  class  Service_class_designatorContext : public antlr4::ParserRuleContext {
  public:
    Service_class_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *UNDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_class_designatorContext* service_class_designator();

  class  GranteesContext : public antlr4::ParserRuleContext {
  public:
    GranteesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GranteeContext *> grantee();
    GranteeContext* grantee(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GranteesContext* grantees();

  class  GranteeContext : public antlr4::ParserRuleContext {
  public:
    GranteeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Authorization_identifierContext *authorization_identifier();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GranteeContext* grantee();

  class  Isolation_levelContext : public antlr4::ParserRuleContext {
  public:
    Isolation_levelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *DIRTY();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *STABILITY();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *RESET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Isolation_levelContext* isolation_level();

  class  Constraint_name_listContext : public antlr4::ParserRuleContext {
  public:
    Constraint_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    std::vector<Constraint_nameContext *> constraint_name();
    Constraint_nameContext* constraint_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_name_listContext* constraint_name_list();

  class  Column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_column_nameContext *definition_column_name();
    Data_typeContext *data_type();
    std::vector<Column_optionsContext *> column_options();
    Column_optionsContext* column_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionContext* column_definition();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  Default_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *WITH();
    Default_valuesContext *default_values();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_clauseContext* default_clause();

  class  Generated_clauseContext : public antlr4::ParserRuleContext {
  public:
    Generated_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATED();
    Identity_optionsContext *identity_options();
    As_generated_expression_clauseContext *as_generated_expression_clause();
    As_row_transaction_timestamp_clauseContext *as_row_transaction_timestamp_clause();
    As_row_transaction_start_id_clauseContext *as_row_transaction_start_id_clause();
    As_row_change_timestamp_clauseContext *as_row_change_timestamp_clause();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generated_clauseContext* generated_clause();

  class  Default_valuesContext : public antlr4::ParserRuleContext {
  public:
    Default_valuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *MEMBER();
    Datetime_special_registerContext *datetime_special_register();
    User_special_registerContext *user_special_register();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *EMPTY_BLOB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_valuesContext* default_values();

  class  Datetime_special_registerContext : public antlr4::ParserRuleContext {
  public:
    Datetime_special_registerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Datetime_special_registerContext* datetime_special_register();

  class  User_special_registerContext : public antlr4::ParserRuleContext {
  public:
    User_special_registerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *CURRENT_USER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_special_registerContext* user_special_register();

  class  Special_registerContext : public antlr4::ParserRuleContext {
  public:
    Special_registerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *ASYNCHRONY();
    antlr4::tree::TerminalNode *IMPLICIT();
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LOCALE();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *TIMEZONE();
    antlr4::tree::TerminalNode *SNAPSHOT();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *PACKAGE();
    Datetime_special_registerContext *datetime_special_register();
    User_special_registerContext *user_special_register();
    antlr4::tree::TerminalNode *CLIENT();
    antlr4::tree::TerminalNode *ACCTNG();
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *USERID();
    antlr4::tree::TerminalNode *WRKSTNNAME();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    antlr4::tree::TerminalNode *CURRENT_SCHEMA();
    antlr4::tree::TerminalNode *CURRENT_SERVER();
    antlr4::tree::TerminalNode *CURRENT_TIMEZONE();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *USER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Special_registerContext* special_register();

  class  Identity_optionContext : public antlr4::ParserRuleContext {
  public:
    Identity_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    NumContext *num();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *ORDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_optionContext* identity_option();

  class  Identity_optionsContext : public antlr4::ParserRuleContext {
  public:
    Identity_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Identity_optionContext *> identity_option();
    Identity_optionContext* identity_option(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_optionsContext* identity_options();

  class  As_row_change_timestamp_clauseContext : public antlr4::ParserRuleContext {
  public:
    As_row_change_timestamp_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    std::vector<antlr4::tree::TerminalNode *> ROW();
    antlr4::tree::TerminalNode* ROW(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *TIMESTAMP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_row_change_timestamp_clauseContext* as_row_change_timestamp_clause();

  class  As_generated_expression_clauseContext : public antlr4::ParserRuleContext {
  public:
    As_generated_expression_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_generated_expression_clauseContext* as_generated_expression_clause();

  class  As_row_transaction_timestamp_clauseContext : public antlr4::ParserRuleContext {
  public:
    As_row_transaction_timestamp_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_row_transaction_timestamp_clauseContext* as_row_transaction_timestamp_clause();

  class  As_row_transaction_start_id_clauseContext : public antlr4::ParserRuleContext {
  public:
    As_row_transaction_start_id_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_row_transaction_start_id_clauseContext* as_row_transaction_start_id_clause();

  class  References_clauseContext : public antlr4::ParserRuleContext {
  public:
    References_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Simple_column_name_listContext *simple_column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *UPDATE();
    No_action_restrictContext *no_action_restrict();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  References_clauseContext* references_clause();

  class  No_action_restrictContext : public antlr4::ParserRuleContext {
  public:
    No_action_restrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  No_action_restrictContext* no_action_restrict();

  class  Simple_column_name_listContext : public antlr4::ParserRuleContext {
  public:
    Simple_column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_column_name_listContext* simple_column_name_list();

  class  Truncate_statementContext : public antlr4::ParserRuleContext {
  public:
    Truncate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Truncate_optionsContext *> truncate_options();
    Truncate_optionsContext* truncate_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_statementContext* truncate_statement();

  class  Truncate_optionsContext : public antlr4::ParserRuleContext {
  public:
    Truncate_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IMMEDIATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_optionsContext* truncate_options();

  class  Privilege_typeContext : public antlr4::ParserRuleContext {
  public:
    Privilege_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    Privilege_listContext *privilege_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_typeContext* privilege_type();

  class  Privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_privilegeContext *> table_privilege();
    Table_privilegeContext* table_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Privilege_listContext* privilege_list();

  class  Table_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Table_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *REFERENCES();
    Column_listContext *column_list();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *TRIGGER();
    antlr4::tree::TerminalNode *UPDATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_privilegeContext* table_privilege();

  class  Column_listContext : public antlr4::ParserRuleContext {
  public:
    Column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Column_identifierContext *> column_identifier();
    Column_identifierContext* column_identifier(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_listContext* column_list();

  class  Column_identifierContext : public antlr4::ParserRuleContext {
  public:
    Column_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_identifierContext* column_identifier();

  class  RevokeesContext : public antlr4::ParserRuleContext {
  public:
    RevokeesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RevokeeContext *> revokee();
    RevokeeContext* revokee(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeesContext* revokees();

  class  RevokeeContext : public antlr4::ParserRuleContext {
  public:
    RevokeeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Authorization_identifierContext *authorization_identifier();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevokeeContext* revokee();

  class  Authorization_identifierContext : public antlr4::ParserRuleContext {
  public:
    Authorization_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Authorization_identifierContext* authorization_identifier();

  class  Alter_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_audit_policyContext *alter_audit_policy();
    Alter_bufferpoolContext *alter_bufferpool();
    Alter_database_partition_groupContext *alter_database_partition_group();
    Alter_databaseContext *alter_database();
    Alter_event_monitorContext *alter_event_monitor();
    Alter_functionContext *alter_function();
    Alter_histogram_templateContext *alter_histogram_template();
    Alter_indexContext *alter_index();
    Alter_maskContext *alter_mask();
    Alter_methodContext *alter_method();
    Alter_moduleContext *alter_module();
    Alter_nicknameContext *alter_nickname();
    Alter_packageContext *alter_package();
    Alter_permissionContext *alter_permission();
    Alter_procedureContext *alter_procedure();
    Alter_schemaContext *alter_schema();
    Alter_serverContext *alter_server();
    Alter_service_classContext *alter_service_class();
    Alter_tableContext *alter_table();
    Alter_triggerContext *alter_trigger();
    Alter_tablespaceContext *alter_tablespace();
    Alter_thresholdContext *alter_threshold();
    Alter_trusted_contextContext *alter_trusted_context();
    Alter_typeContext *alter_type();
    Alter_usage_listContext *alter_usage_list();
    Alter_user_mappingContext *alter_user_mapping();
    Alter_viewContext *alter_view();
    Alter_work_action_setContext *alter_work_action_set();
    Alter_work_class_setContext *alter_work_class_set();
    Alter_workloadContext *alter_workload();
    Alter_wrapperContext *alter_wrapper();
    Alter_xsrobjectContext *alter_xsrobject();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_statementContext* alter_statement();

  class  Alter_nicknameContext : public antlr4::ParserRuleContext {
  public:
    Alter_nicknameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    antlr4::tree::TerminalNode *NICKNAME();
    NicknameContext *nickname();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<Constraint_nameContext *> constraint_name();
    Constraint_nameContext* constraint_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CACHING();
    antlr4::tree::TerminalNode* CACHING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALLOW();
    antlr4::tree::TerminalNode* ALLOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISALLOW();
    antlr4::tree::TerminalNode* DISALLOW(size_t i);
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCAL();
    antlr4::tree::TerminalNode* LOCAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<Federated_column_optionsContext *> federated_column_options();
    Federated_column_optionsContext* federated_column_options(size_t i);
    std::vector<Unique_constraintContext *> unique_constraint();
    Unique_constraintContext* unique_constraint(size_t i);
    std::vector<Referential_constraintContext *> referential_constraint();
    Referential_constraintContext* referential_constraint(size_t i);
    std::vector<Check_constraintContext *> check_constraint();
    Check_constraintContext* check_constraint(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FOREIGN();
    antlr4::tree::TerminalNode* FOREIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHECK();
    antlr4::tree::TerminalNode* CHECK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRIMARY();
    antlr4::tree::TerminalNode* PRIMARY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<Constraint_alterationContext *> constraint_alteration();
    Constraint_alterationContext* constraint_alteration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNIQUE();
    antlr4::tree::TerminalNode* UNIQUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONSTRAINT();
    antlr4::tree::TerminalNode* CONSTRAINT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_nicknameContext* alter_nickname();

  class  Constraint_alterationContext : public antlr4::ParserRuleContext {
  public:
    Constraint_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *TRUSTED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_alterationContext* constraint_alteration();

  class  Federated_column_optionsContext : public antlr4::ParserRuleContext {
  public:
    Federated_column_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Federated_column_optionsContext* federated_column_options();

  class  Alter_packageContext : public antlr4::ParserRuleContext {
  public:
    Alter_packageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    std::vector<antlr4::tree::TerminalNode *> ACCESS();
    antlr4::tree::TerminalNode* ACCESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLAN();
    antlr4::tree::TerminalNode* PLAN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REUSE();
    antlr4::tree::TerminalNode* REUSE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPTIMIZATION();
    antlr4::tree::TerminalNode* OPTIMIZATION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PROFILE();
    antlr4::tree::TerminalNode* PROFILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEEP();
    antlr4::tree::TerminalNode* KEEP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DYNAMIC();
    antlr4::tree::TerminalNode* DYNAMIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> YES();
    antlr4::tree::TerminalNode* YES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    StringContext *string();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<Profile_nameContext *> profile_name();
    Profile_nameContext* profile_name(size_t i);
    antlr4::tree::TerminalNode *VERSION();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_packageContext* alter_package();

  class  Alter_permissionContext : public antlr4::ParserRuleContext {
  public:
    Alter_permissionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_permissionContext* alter_permission();

  class  Alter_procedureContext : public antlr4::ParserRuleContext {
  public:
    Alter_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    Procedure_designatorContext *procedure_designator();
    std::vector<antlr4::tree::TerminalNode *> EXTERNAL();
    antlr4::tree::TerminalNode* EXTERNAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTION();
    antlr4::tree::TerminalNode* ACTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEW();
    antlr4::tree::TerminalNode* NEW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SAVEPOINT();
    antlr4::tree::TerminalNode* SAVEPOINT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEVEL();
    antlr4::tree::TerminalNode* LEVEL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PARAMETER();
    antlr4::tree::TerminalNode* PARAMETER(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FENCED();
    antlr4::tree::TerminalNode* FENCED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THREADSAFE();
    antlr4::tree::TerminalNode* THREADSAFE(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_procedureContext* alter_procedure();

  class  Alter_serverContext : public antlr4::ParserRuleContext {
  public:
    Alter_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *VERSION();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_serverContext* alter_server();

  class  Alter_triggerContext : public antlr4::ParserRuleContext {
  public:
    Alter_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_triggerContext* alter_trigger();

  class  Alter_tablespaceContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    std::vector<Alter_tablespace_add_clauseContext *> alter_tablespace_add_clause();
    Alter_tablespace_add_clauseContext* alter_tablespace_add_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BEGIN();
    antlr4::tree::TerminalNode* BEGIN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEW();
    antlr4::tree::TerminalNode* NEW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRIPE();
    antlr4::tree::TerminalNode* STRIPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<Db_container_clauseContext *> db_container_clause();
    Db_container_clauseContext* db_container_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<Drop_db_container_clauseContext *> drop_db_container_clause();
    Drop_db_container_clauseContext* drop_db_container_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REDUCE();
    antlr4::tree::TerminalNode* REDUCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REBALANCE();
    antlr4::tree::TerminalNode* REBALANCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PREFETCHSIZE();
    antlr4::tree::TerminalNode* PREFETCHSIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUFFERPOOL();
    antlr4::tree::TerminalNode* BUFFERPOOL(size_t i);
    std::vector<Bufferpool_nameContext *> bufferpool_name();
    Bufferpool_nameContext* bufferpool_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OVERHEAD();
    antlr4::tree::TerminalNode* OVERHEAD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TRANSFERRATE();
    antlr4::tree::TerminalNode* TRANSFERRATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SYSTEM();
    antlr4::tree::TerminalNode* SYSTEM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CACHING();
    antlr4::tree::TerminalNode* CACHING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROPPED();
    antlr4::tree::TerminalNode* DROPPED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TABLE();
    antlr4::tree::TerminalNode* TABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RECOVERY();
    antlr4::tree::TerminalNode* RECOVERY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SWITCH();
    antlr4::tree::TerminalNode* SWITCH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ONLINE();
    antlr4::tree::TerminalNode* ONLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AUTORESIZE();
    antlr4::tree::TerminalNode* AUTORESIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCREASESIZE();
    antlr4::tree::TerminalNode* INCREASESIZE(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXSIZE();
    antlr4::tree::TerminalNode* MAXSIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONVERT();
    antlr4::tree::TerminalNode* CONVERT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LARGE();
    antlr4::tree::TerminalNode* LARGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOWER();
    antlr4::tree::TerminalNode* LOWER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HIGH();
    antlr4::tree::TerminalNode* HIGH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WATER();
    antlr4::tree::TerminalNode* WATER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MARK();
    antlr4::tree::TerminalNode* MARK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> USING();
    antlr4::tree::TerminalNode* USING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STOGROUP();
    antlr4::tree::TerminalNode* STOGROUP(size_t i);
    std::vector<Group_nameContext *> group_name();
    Group_nameContext* group_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TAG();
    antlr4::tree::TerminalNode* TAG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MANAGED();
    antlr4::tree::TerminalNode* MANAGED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AUTOMATIC();
    antlr4::tree::TerminalNode* AUTOMATIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STORAGE();
    antlr4::tree::TerminalNode* STORAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTEND();
    antlr4::tree::TerminalNode* EXTEND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESIZE();
    antlr4::tree::TerminalNode* RESIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> YES();
    antlr4::tree::TerminalNode* YES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERCENT();
    antlr4::tree::TerminalNode* PERCENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KILO();
    antlr4::tree::TerminalNode* KILO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEGA();
    antlr4::tree::TerminalNode* MEGA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GIGA();
    antlr4::tree::TerminalNode* GIGA(size_t i);
    std::vector<All_containers_clauseContext *> all_containers_clause();
    All_containers_clauseContext* all_containers_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAX();
    antlr4::tree::TerminalNode* MAX(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STOP();
    antlr4::tree::TerminalNode* STOP(size_t i);
    std::vector<Float_literalContext *> float_literal();
    Float_literalContext* float_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INHERIT();
    antlr4::tree::TerminalNode* INHERIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<On_db_partition_clauseContext *> on_db_partition_clause();
    On_db_partition_clauseContext* on_db_partition_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUSPEND();
    antlr4::tree::TerminalNode* SUSPEND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESUME();
    antlr4::tree::TerminalNode* RESUME(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespaceContext* alter_tablespace();

  class  Alter_tablespace_add_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespace_add_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Db_container_clauseContext *db_container_clause();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    On_db_partition_clauseContext *on_db_partition_clause();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *SET();
    Id_Context *id_();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespace_add_clauseContext* alter_tablespace_add_clause();

  class  Drop_db_container_clauseContext : public antlr4::ParserRuleContext {
  public:
    Drop_db_container_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEVICE();
    antlr4::tree::TerminalNode* DEVICE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_db_container_clauseContext* drop_db_container_clause();

  class  Db_container_clauseContext : public antlr4::ParserRuleContext {
  public:
    Db_container_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Db_containerContext *> db_container();
    Db_containerContext* db_container(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_container_clauseContext* db_container_clause();

  class  Db_containerContext : public antlr4::ParserRuleContext {
  public:
    Db_containerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    NumContext *num();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *GIGA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_containerContext* db_container();

  class  All_containers_clauseContext : public antlr4::ParserRuleContext {
  public:
    All_containers_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *ALL();
    NumContext *num();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONTAINERS();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *GIGA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_containers_clauseContext* all_containers_clause();

  class  Alter_service_classContext : public antlr4::ParserRuleContext {
  public:
    Alter_service_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);
    antlr4::tree::TerminalNode *UNDER();
    std::vector<antlr4::tree::TerminalNode *> RESOURCE();
    antlr4::tree::TerminalNode* RESOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARES();
    antlr4::tree::TerminalNode* SHARES(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CPU();
    antlr4::tree::TerminalNode* CPU(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIMIT();
    antlr4::tree::TerminalNode* LIMIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTIVITY();
    antlr4::tree::TerminalNode* ACTIVITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SORTMEM();
    antlr4::tree::TerminalNode* SORTMEM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINIMUM();
    antlr4::tree::TerminalNode* MINIMUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARE();
    antlr4::tree::TerminalNode* SHARE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERCENT();
    antlr4::tree::TerminalNode* PERCENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADMISSION();
    antlr4::tree::TerminalNode* ADMISSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QUEUE();
    antlr4::tree::TerminalNode* QUEUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ORDER();
    antlr4::tree::TerminalNode* ORDER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEGREE();
    antlr4::tree::TerminalNode* DEGREE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCALEBACK();
    antlr4::tree::TerminalNode* SCALEBACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXIMUM();
    antlr4::tree::TerminalNode* MAXIMUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PREFETCH();
    antlr4::tree::TerminalNode* PREFETCH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRIORITY();
    antlr4::tree::TerminalNode* PRIORITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OUTBOUND();
    antlr4::tree::TerminalNode* OUTBOUND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CORRELATOR();
    antlr4::tree::TerminalNode* CORRELATOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUFFERPOOL();
    antlr4::tree::TerminalNode* BUFFERPOOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLLECT();
    antlr4::tree::TerminalNode* COLLECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AGGREGATE();
    antlr4::tree::TerminalNode* AGGREGATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST();
    antlr4::tree::TerminalNode* REQUEST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNIT();
    antlr4::tree::TerminalNode* UNIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> METRICS();
    antlr4::tree::TerminalNode* METRICS(size_t i);
    std::vector<Histogram_template_clauseContext *> histogram_template_clause();
    Histogram_template_clauseContext* histogram_template_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UOW();
    antlr4::tree::TerminalNode* UOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIFETIME();
    antlr4::tree::TerminalNode* LIFETIME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HISTOGRAM();
    antlr4::tree::TerminalNode* HISTOGRAM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TEMPLATE();
    antlr4::tree::TerminalNode* TEMPLATE(size_t i);
    std::vector<Template_nameContext *> template_name();
    Template_nameContext* template_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENABLE();
    antlr4::tree::TerminalNode* ENABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISABLE();
    antlr4::tree::TerminalNode* DISABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SOFT();
    antlr4::tree::TerminalNode* SOFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HARD();
    antlr4::tree::TerminalNode* HARD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FIFO();
    antlr4::tree::TerminalNode* FIFO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LATENCY();
    antlr4::tree::TerminalNode* LATENCY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HIGH();
    antlr4::tree::TerminalNode* HIGH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIUM();
    antlr4::tree::TerminalNode* MEDIUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOW();
    antlr4::tree::TerminalNode* LOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTENDED();
    antlr4::tree::TerminalNode* EXTENDED(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_service_classContext* alter_service_class();

  class  Alter_thresholdContext : public antlr4::ParserRuleContext {
  public:
    Alter_thresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENABLE();
    antlr4::tree::TerminalNode* ENABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISABLE();
    antlr4::tree::TerminalNode* DISABLE(size_t i);
    std::vector<Threshold_predicateContext *> threshold_predicate();
    Threshold_predicateContext* threshold_predicate(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCEEDED();
    antlr4::tree::TerminalNode* EXCEEDED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PERFORM();
    antlr4::tree::TerminalNode* PERFORM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTION();
    antlr4::tree::TerminalNode* ACTION(size_t i);
    std::vector<Alter_threshold_exceeded_actionsContext *> alter_threshold_exceeded_actions();
    Alter_threshold_exceeded_actionsContext* alter_threshold_exceeded_actions(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_thresholdContext* alter_threshold();

  class  Alter_trusted_contextContext : public antlr4::ParserRuleContext {
  public:
    Alter_trusted_contextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ATTRIBUTES();
    antlr4::tree::TerminalNode* ATTRIBUTES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Address_clauseContext *> address_clause();
    Address_clauseContext* address_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADDRESS();
    antlr4::tree::TerminalNode* ADDRESS(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<Alter_trusted_context_elementContext *> alter_trusted_context_element();
    Alter_trusted_context_elementContext* alter_trusted_context_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trusted_contextContext* alter_trusted_context();

  class  Address_clauseContext : public antlr4::ParserRuleContext {
  public:
    Address_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Address_clauseContext* address_clause();

  class  Alter_trusted_context_elementContext : public antlr4::ParserRuleContext {
  public:
    Alter_trusted_context_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *AUTHID();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Address_or_encryptionsContext *> address_or_encryptions();
    Address_or_encryptionsContext* address_or_encryptions(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ENABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trusted_context_elementContext* alter_trusted_context_element();

  class  Alter_typeContext : public antlr4::ParserRuleContext {
  public:
    Alter_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    std::vector<Alter_type_elementContext *> alter_type_element();
    Alter_type_elementContext* alter_type_element(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_typeContext* alter_type();

  class  Alter_type_elementContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ATTRIBUTE();
    Attribute_definitionContext *attribute_definition();
    antlr4::tree::TerminalNode *DROP();
    Attribute_nameContext *attribute_name();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *METHOD();
    Method_specificationContext *method_specification();
    antlr4::tree::TerminalNode *ALTER();
    Method_identifierContext *method_identifier();
    std::vector<Method_optionsContext *> method_options();
    Method_optionsContext* method_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_elementContext* alter_type_element();

  class  Method_optionsContext : public antlr4::ParserRuleContext {
  public:
    Method_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *THREADSAFE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_optionsContext* method_options();

  class  Method_identifierContext : public antlr4::ParserRuleContext {
  public:
    Method_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_identifierContext* method_identifier();

  class  Alter_usage_listContext : public antlr4::ParserRuleContext {
  public:
    Alter_usage_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    List_nameContext *list_name();
    std::vector<Usage_list_optionsContext *> usage_list_options();
    Usage_list_optionsContext* usage_list_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_usage_listContext* alter_usage_list();

  class  Usage_list_optionsContext : public antlr4::ParserRuleContext {
  public:
    Usage_list_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *SIZE();
    NumContext *num();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *INACTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Usage_list_optionsContext* usage_list_options();

  class  Alter_user_mappingContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *PUBLIC();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_mappingContext* alter_user_mapping();

  class  Alter_viewContext : public antlr4::ParserRuleContext {
  public:
    Alter_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCOPE();
    antlr4::tree::TerminalNode* SCOPE(size_t i);
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_viewContext* alter_view();

  class  Alter_work_action_setContext : public antlr4::ParserRuleContext {
  public:
    Alter_work_action_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTION();
    antlr4::tree::TerminalNode* ACTION(size_t i);
    antlr4::tree::TerminalNode *SET();
    Action_set_nameContext *action_set_name();
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<Work_action_definitionContext *> work_action_definition();
    Work_action_definitionContext* work_action_definition(size_t i);
    std::vector<Work_action_alterationContext *> work_action_alteration();
    Work_action_alterationContext* work_action_alteration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<Action_nameContext *> action_name();
    Action_nameContext* action_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENABLE();
    antlr4::tree::TerminalNode* ENABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISABLE();
    antlr4::tree::TerminalNode* DISABLE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_work_action_setContext* alter_work_action_set();

  class  Alter_work_class_setContext : public antlr4::ParserRuleContext {
  public:
    Alter_work_class_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLASS();
    antlr4::tree::TerminalNode* CLASS(size_t i);
    antlr4::tree::TerminalNode *SET();
    Class_set_nameContext *class_set_name();
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<Work_class_definitionContext *> work_class_definition();
    Work_class_definitionContext* work_class_definition(size_t i);
    std::vector<Work_class_alterationContext *> work_class_alteration();
    Work_class_alterationContext* work_class_alteration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_work_class_setContext* alter_work_class_set();

  class  Alter_workloadContext : public antlr4::ParserRuleContext {
  public:
    Alter_workloadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WORKLOAD();
    std::vector<Workload_nameContext *> workload_name();
    Workload_nameContext* workload_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<Connection_attributesContext *> connection_attributes();
    Connection_attributesContext* connection_attributes(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DB();
    antlr4::tree::TerminalNode* DB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACCESS();
    antlr4::tree::TerminalNode* ACCESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENABLE();
    antlr4::tree::TerminalNode* ENABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISABLE();
    antlr4::tree::TerminalNode* DISABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MAXIMUM();
    antlr4::tree::TerminalNode* MAXIMUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEGREE();
    antlr4::tree::TerminalNode* DEGREE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SERVICE();
    antlr4::tree::TerminalNode* SERVICE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLASS();
    antlr4::tree::TerminalNode* CLASS(size_t i);
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POSITION();
    antlr4::tree::TerminalNode* POSITION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRIORITY();
    antlr4::tree::TerminalNode* PRIORITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLLECT();
    antlr4::tree::TerminalNode* COLLECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTIVITY();
    antlr4::tree::TerminalNode* ACTIVITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> METRICS();
    antlr4::tree::TerminalNode* METRICS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AGGREGATE();
    antlr4::tree::TerminalNode* AGGREGATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNIT();
    antlr4::tree::TerminalNode* UNIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TIMEOUT();
    antlr4::tree::TerminalNode* TIMEOUT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEADLOCK();
    antlr4::tree::TerminalNode* DEADLOCK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WAIT();
    antlr4::tree::TerminalNode* WAIT(size_t i);
    std::vector<Histogram_template_clauseContext *> histogram_template_clause();
    Histogram_template_clauseContext* histogram_template_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALLOW();
    antlr4::tree::TerminalNode* ALLOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISALLOW();
    antlr4::tree::TerminalNode* DISALLOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIUM();
    antlr4::tree::TerminalNode* MEDIUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CRITICAL();
    antlr4::tree::TerminalNode* CRITICAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HIGH();
    antlr4::tree::TerminalNode* HIGH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOW();
    antlr4::tree::TerminalNode* LOW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LAST();
    antlr4::tree::TerminalNode* LAST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BEFORE();
    antlr4::tree::TerminalNode* BEFORE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AFTER();
    antlr4::tree::TerminalNode* AFTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITHOUT();
    antlr4::tree::TerminalNode* WITHOUT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HISTORY();
    antlr4::tree::TerminalNode* HISTORY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCKS();
    antlr4::tree::TerminalNode* LOCKS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WAITING();
    antlr4::tree::TerminalNode* WAITING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MORE_();
    antlr4::tree::TerminalNode* MORE_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THAN();
    antlr4::tree::TerminalNode* THAN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNDER();
    antlr4::tree::TerminalNode* UNDER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COORDINATOR();
    antlr4::tree::TerminalNode* COORDINATOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DETAILS();
    antlr4::tree::TerminalNode* DETAILS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECONDS();
    antlr4::tree::TerminalNode* SECONDS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MICROSECONDS();
    antlr4::tree::TerminalNode* MICROSECONDS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTENDED();
    antlr4::tree::TerminalNode* EXTENDED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECTION();
    antlr4::tree::TerminalNode* SECTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUES();
    antlr4::tree::TerminalNode* VALUES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEMBER();
    antlr4::tree::TerminalNode* MEMBER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEMBERS();
    antlr4::tree::TerminalNode* MEMBERS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIST();
    antlr4::tree::TerminalNode* LIST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PACKAGE();
    antlr4::tree::TerminalNode* PACKAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXECUTABLE();
    antlr4::tree::TerminalNode* EXECUTABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTUALS();
    antlr4::tree::TerminalNode* ACTUALS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_workloadContext* alter_workload();

  class  Alter_wrapperContext : public antlr4::ParserRuleContext {
  public:
    Alter_wrapperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_wrapperContext* alter_wrapper();

  class  Alter_xsrobjectContext : public antlr4::ParserRuleContext {
  public:
    Alter_xsrobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();
    antlr4::tree::TerminalNode *DECOMPOSITION();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_xsrobjectContext* alter_xsrobject();

  class  Alter_moduleContext : public antlr4::ParserRuleContext {
  public:
    Alter_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *MODULE_();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *PUBLISH();
    Module_condition_definitionContext *module_condition_definition();
    Module_function_definitionContext *module_function_definition();
    Module_procedure_definitionContext *module_procedure_definition();
    Module_type_definitionContext *module_type_definition();
    Module_variable_definitionContext *module_variable_definition();
    antlr4::tree::TerminalNode *BODY();
    Module_object_identificationContext *module_object_identification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_moduleContext* alter_module();

  class  Module_variable_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_variable_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_variable_definitionContext* module_variable_definition();

  class  Module_function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<Function_nameContext *> function_name();
    Function_nameContext* function_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *RETURNS();
    Return_data_typeContext *return_data_type();
    Function_bodyContext *function_body();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *WITH();
    State_variable_declarationsContext *state_variable_declarations();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *INITIALIZE();
    std::vector<Procedure_designatorContext *> procedure_designator();
    Procedure_designatorContext* procedure_designator(size_t i);
    antlr4::tree::TerminalNode *ACCUMULATE();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *FINALIZE();
    Function_designatorContext *function_designator();
    std::vector<Function_parameterContext *> function_parameter();
    Function_parameterContext* function_parameter(size_t i);
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TEMPLATE();
    std::vector<Sql_option_listsContext *> sql_option_lists();
    Sql_option_listsContext* sql_option_lists(size_t i);
    std::vector<External_option_listsContext *> external_option_lists();
    External_option_listsContext* external_option_lists(size_t i);
    std::vector<Oledb_option_listsContext *> oledb_option_lists();
    Oledb_option_listsContext* oledb_option_lists(size_t i);
    std::vector<Aggregate_option_listsContext *> aggregate_option_lists();
    Aggregate_option_listsContext* aggregate_option_lists(size_t i);
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    std::vector<antlr4::tree::TerminalNode *> SPECIFIC();
    antlr4::tree::TerminalNode* SPECIFIC(size_t i);
    std::vector<Specific_nameContext *> specific_name();
    Specific_nameContext* specific_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NO();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_function_definitionContext* module_function_definition();

  class  Module_procedure_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_procedure_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Procedure_bodyContext *procedure_body();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Procedure_option_listsContext *> procedure_option_lists();
    Procedure_option_listsContext* procedure_option_lists(size_t i);
    std::vector<Procedure_parameterContext *> procedure_parameter();
    Procedure_parameterContext* procedure_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_procedure_definitionContext* module_procedure_definition();

  class  Module_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    Type_nameContext *type_name();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    Data_type1Context *data_type1();
    antlr4::tree::TerminalNode *ROW();
    Anchored_data_typeContext *anchored_data_type();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Field_definitionContext *> field_definition();
    Field_definitionContext* field_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ARRAY();
    antlr4::tree::TerminalNode* ARRAY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode* LR_SQUARE_BRACKET(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<Data_type2Context *> data_type2();
    Data_type2Context* data_type2(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode* RR_SQUARE_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CURSOR();
    antlr4::tree::TerminalNode* CURSOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WEAK();
    antlr4::tree::TerminalNode* WEAK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRONG();
    antlr4::tree::TerminalNode* STRONG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RULES();
    antlr4::tree::TerminalNode* RULES(size_t i);
    std::vector<Data_type_constraintsContext *> data_type_constraints();
    Data_type_constraintsContext* data_type_constraints(size_t i);
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *UNDER();
    Supertype_nameContext *supertype_name();
    std::vector<Attribute_definitionContext *> attribute_definition();
    Attribute_definitionContext* attribute_definition(size_t i);
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ACCESS();
    std::vector<antlr4::tree::TerminalNode *> REF();
    antlr4::tree::TerminalNode* REF(size_t i);
    antlr4::tree::TerminalNode *USING();
    Built_in_typeContext *built_in_type();
    std::vector<antlr4::tree::TerminalNode *> CAST();
    antlr4::tree::TerminalNode* CAST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SOURCE();
    antlr4::tree::TerminalNode* SOURCE(size_t i);
    std::vector<Function_nameContext *> function_name();
    Function_nameContext* function_name(size_t i);
    std::vector<Method_specificationContext *> method_specification();
    Method_specificationContext* method_specification(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_type_definitionContext* module_type_definition();

  class  Module_condition_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_condition_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITION();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *FOR();
    StringContext *string();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_condition_definitionContext* module_condition_definition();

  class  Module_object_identificationContext : public antlr4::ParserRuleContext {
  public:
    Module_object_identificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_designatorContext *function_designator();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *CONDITION();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_object_identificationContext* module_object_identification();

  class  Alter_histogram_templateContext : public antlr4::ParserRuleContext {
  public:
    Alter_histogram_templateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *VALUE();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_histogram_templateContext* alter_histogram_template();

  class  Alter_functionContext : public antlr4::ParserRuleContext {
  public:
    Alter_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    std::vector<Alter_function_elementsContext *> alter_function_elements();
    Alter_function_elementsContext* alter_function_elements(size_t i);
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_functionContext* alter_function();

  class  Alter_function_elementsContext : public antlr4::ParserRuleContext {
  public:
    Alter_function_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *THREADSAFE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_function_elementsContext* alter_function_elements();

  class  Alter_event_monitorContext : public antlr4::ParserRuleContext {
  public:
    Alter_event_monitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Monitor_nameContext *monitor_name();
    std::vector<Alter_event_monitor_elementsContext *> alter_event_monitor_elements();
    Alter_event_monitor_elementsContext* alter_event_monitor_elements(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_event_monitorContext* alter_event_monitor();

  class  Alter_event_monitor_elementsContext : public antlr4::ParserRuleContext {
  public:
    Alter_event_monitor_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *GROUP();
    Evm_groupContext *evm_group();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Target_table_optionsContext *target_table_options();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_event_monitor_elementsContext* alter_event_monitor_elements();

  class  Target_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Target_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_table_optionsContext* target_table_options();

  class  Evm_groupContext : public antlr4::ParserRuleContext {
  public:
    Evm_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Evm_groupContext* evm_group();

  class  Monitor_nameContext : public antlr4::ParserRuleContext {
  public:
    Monitor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Monitor_nameContext* monitor_name();

  class  Alter_database_partition_groupContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_partition_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Partition_nameContext *partition_name();
    std::vector<Alter_partition_elementContext *> alter_partition_element();
    Alter_partition_elementContext* alter_partition_element(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_partition_groupContext* alter_database_partition_group();

  class  Alter_partition_elementContext : public antlr4::ParserRuleContext {
  public:
    Alter_partition_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Db_partition_clauseContext *db_partition_clause();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    Db_partition_optionsContext *db_partition_options();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_partition_elementContext* alter_partition_element();

  class  Db_partition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Db_partition_numberContext *> db_partition_number();
    Db_partition_numberContext* db_partition_number(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_clauseContext* db_partition_clause();

  class  Db_partition_optionsContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    Db_partition_numberContext *db_partition_number();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *TABLESPACES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_optionsContext* db_partition_options();

  class  Db_partition_numberContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_numberContext* db_partition_number();

  class  Alter_bufferpoolContext : public antlr4::ParserRuleContext {
  public:
    Alter_bufferpoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Partition_group_nameContext *partition_group_name();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    std::vector<Number_of_pagesContext *> number_of_pages();
    Number_of_pagesContext* number_of_pages(size_t i);
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *AUTOMATIC();
    antlr4::tree::TerminalNode *MEMBER();
    Member_numberContext *member_number();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_bufferpoolContext* alter_bufferpool();

  class  Bufferpool_nameContext : public antlr4::ParserRuleContext {
  public:
    Bufferpool_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bufferpool_nameContext* bufferpool_name();

  class  Number_of_pagesContext : public antlr4::ParserRuleContext {
  public:
    Number_of_pagesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_of_pagesContext* number_of_pages();

  class  Member_numberContext : public antlr4::ParserRuleContext {
  public:
    Member_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_numberContext* member_number();

  class  Alter_audit_policyContext : public antlr4::ParserRuleContext {
  public:
    Alter_audit_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    std::vector<Audit_policy_elementsContext *> audit_policy_elements();
    Audit_policy_elementsContext* audit_policy_elements(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_audit_policyContext* alter_audit_policy();

  class  Audit_policy_elementsContext : public antlr4::ParserRuleContext {
  public:
    Audit_policy_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATEGORIES();
    std::vector<Audit_category_elementContext *> audit_category_element();
    Audit_category_elementContext* audit_category_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *AUDIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_policy_elementsContext* audit_policy_elements();

  class  Audit_category_elementContext : public antlr4::ParserRuleContext {
  public:
    Audit_category_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Audit_policy_categoryContext *audit_policy_category();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SUCCESS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_category_elementContext* audit_category_element();

  class  Audit_policy_categoryContext : public antlr4::ParserRuleContext {
  public:
    Audit_policy_categoryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *VALIDATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_policy_categoryContext* audit_policy_category();

  class  Alter_methodContext : public antlr4::ParserRuleContext {
  public:
    Alter_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Alter_method_designatorContext *alter_method_designator();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_methodContext* alter_method();

  class  Alter_method_designatorContext : public antlr4::ParserRuleContext {
  public:
    Alter_method_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_method_designatorContext* alter_method_designator();

  class  Alter_schemaContext : public antlr4::ParserRuleContext {
  public:
    Alter_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *CHANGES();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *TRACKING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_schemaContext* alter_schema();

  class  Alter_databaseContext : public antlr4::ParserRuleContext {
  public:
    Alter_databaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    Database_nameContext *database_name();
    std::vector<Alter_database_elementsContext *> alter_database_elements();
    Alter_database_elementsContext* alter_database_elements(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_databaseContext* alter_database();

  class  Alter_database_elementsContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *ON();
    std::vector<Storage_pathContext *> storage_path();
    Storage_pathContext* storage_path(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_elementsContext* alter_database_elements();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_nameContext* database_name();

  class  Storage_pathContext : public antlr4::ParserRuleContext {
  public:
    Storage_pathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Storage_pathContext* storage_path();

  class  Alter_indexContext : public antlr4::ParserRuleContext {
  public:
    Alter_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_indexContext* alter_index();

  class  Alter_maskContext : public antlr4::ParserRuleContext {
  public:
    Alter_maskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *MASK();
    Mask_nameContext *mask_name();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_maskContext* alter_mask();

  class  Alter_tableContext : public antlr4::ParserRuleContext {
  public:
    Alter_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TABLE();
    antlr4::tree::TerminalNode* TABLE(size_t i);
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    Add_partitionContext *add_partition();
    antlr4::tree::TerminalNode *ATTACH();
    Attach_partitionContext *attach_partition();
    antlr4::tree::TerminalNode *DETACH();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *HISTORY();
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    std::vector<Constraint_clauseContext *> constraint_clause();
    Constraint_clauseContext* constraint_clause(size_t i);
    std::vector<QueryContext *> query();
    QueryContext* query(size_t i);
    std::vector<Refreshable_table_optionsContext *> refreshable_table_options();
    Refreshable_table_optionsContext* refreshable_table_options(size_t i);
    std::vector<Constraint_nameContext *> constraint_name();
    Constraint_nameContext* constraint_name(size_t i);
    std::vector<Constraint_alterationContext *> constraint_alteration();
    Constraint_alterationContext* constraint_alteration(size_t i);
    std::vector<Column_alterationContext *> column_alteration();
    Column_alterationContext* column_alteration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACCESS();
    antlr4::tree::TerminalNode* ACCESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTROL();
    antlr4::tree::TerminalNode* CONTROL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RENAME();
    antlr4::tree::TerminalNode* RENAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESTRICT();
    antlr4::tree::TerminalNode* RESTRICT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISTRIBUTION();
    antlr4::tree::TerminalNode* DISTRIBUTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MATERIALIZED();
    antlr4::tree::TerminalNode* MATERIALIZED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QUERY();
    antlr4::tree::TerminalNode* QUERY(size_t i);
    std::vector<Period_definitionContext *> period_definition();
    Period_definitionContext* period_definition(size_t i);
    std::vector<Period_nameContext *> period_name();
    Period_nameContext* period_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CAPTURE();
    antlr4::tree::TerminalNode* CAPTURE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTIVATE();
    antlr4::tree::TerminalNode* ACTIVATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGGED();
    antlr4::tree::TerminalNode* LOGGED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INITIALLY();
    antlr4::tree::TerminalNode* INITIALLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PCTFREE();
    antlr4::tree::TerminalNode* PCTFREE(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCKSIZE();
    antlr4::tree::TerminalNode* LOCKSIZE(size_t i);
    std::vector<Row_tableContext *> row_table();
    Row_tableContext* row_table(size_t i);
    std::vector<antlr4::tree::TerminalNode *> APPEND();
    antlr4::tree::TerminalNode* APPEND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VOLATILE();
    antlr4::tree::TerminalNode* VOLATILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMPRESS();
    antlr4::tree::TerminalNode* COMPRESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUE();
    antlr4::tree::TerminalNode* VALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMPRESSION();
    antlr4::tree::TerminalNode* COMPRESSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOG();
    antlr4::tree::TerminalNode* LOG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INDEX();
    antlr4::tree::TerminalNode* INDEX(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BUILD();
    antlr4::tree::TerminalNode* BUILD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEACTIVATE();
    antlr4::tree::TerminalNode* DEACTIVATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROW();
    antlr4::tree::TerminalNode* ROW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OFF();
    antlr4::tree::TerminalNode* OFF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FOREIGN();
    antlr4::tree::TerminalNode* FOREIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHECK();
    antlr4::tree::TerminalNode* CHECK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRIMARY();
    antlr4::tree::TerminalNode* PRIMARY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNIQUE();
    antlr4::tree::TerminalNode* UNIQUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONSTRAINT();
    antlr4::tree::TerminalNode* CONSTRAINT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHANGES();
    antlr4::tree::TerminalNode* CHANGES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> YES();
    antlr4::tree::TerminalNode* YES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    std::vector<Cascade_restrictContext *> cascade_restrict();
    Cascade_restrictContext* cascade_restrict(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EMPTY();
    antlr4::tree::TerminalNode* EMPTY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CARDINALITY();
    antlr4::tree::TerminalNode* CARDINALITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LONGVAR();
    antlr4::tree::TerminalNode* LONGVAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMNS();
    antlr4::tree::TerminalNode* COLUMNS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADAPTIVE();
    antlr4::tree::TerminalNode* ADAPTIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATIC();
    antlr4::tree::TerminalNode* STATIC(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tableContext* alter_table();

  class  Period_nameContext : public antlr4::ParserRuleContext {
  public:
    Period_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *SYSTEM_TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_nameContext* period_name();

  class  Constraint_clauseContext : public antlr4::ParserRuleContext {
  public:
    Constraint_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unique_constraintContext *unique_constraint();
    Referential_constraintContext *referential_constraint();
    Check_constraintContext *check_constraint();
    Distribution_clauseContext *distribution_clause();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_clauseContext* constraint_clause();

  class  Cascade_restrictContext : public antlr4::ParserRuleContext {
  public:
    Cascade_restrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cascade_restrictContext* cascade_restrict();

  class  Row_tableContext : public antlr4::ParserRuleContext {
  public:
    Row_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *BLOCKINSERT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_tableContext* row_table();

  class  Column_alterationContext : public antlr4::ParserRuleContext {
  public:
    Column_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    NumContext *num();
    Default_clauseContext *default_clause();
    antlr4::tree::TerminalNode *EXPRESSION();
    As_generated_expression_clauseContext *as_generated_expression_clause();
    antlr4::tree::TerminalNode *GENERATED();
    Identity_optionsContext *identity_options();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SCOPE();
    Typed_tableview_nameContext *typed_tableview_name();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *WITH();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *DEFAULT();
    As_row_transaction_start_id_clauseContext *as_row_transaction_start_id_clause();
    As_row_transaction_timestamp_clauseContext *as_row_transaction_timestamp_clause();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *OFF();
    std::vector<Identity_alterationContext *> identity_alteration();
    Identity_alterationContext* identity_alteration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_alterationContext* column_alteration();

  class  Identity_alteration_optionContext : public antlr4::ParserRuleContext {
  public:
    Identity_alteration_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *WITH();
    NumContext *num();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *ORDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_alteration_optionContext* identity_alteration_option();

  class  Identity_alterationContext : public antlr4::ParserRuleContext {
  public:
    Identity_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    Identity_alteration_optionContext *identity_alteration_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_alterationContext* identity_alteration();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();

  class  Integer_constantContext : public antlr4::ParserRuleContext {
  public:
    Integer_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constantContext* integer_constant();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expression_nullContext *constant_expression_null();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultValueContext* defaultValue();

  class  Constant_expression_nullContext : public antlr4::ParserRuleContext {
  public:
    Constant_expression_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();
    StringContext *string();
    antlr4::tree::TerminalNode *NULL_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_expression_nullContext* constant_expression_null();

  class  Always_by_defaultContext : public antlr4::ParserRuleContext {
  public:
    Always_by_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Always_by_defaultContext* always_by_default();

  class  Set_dropContext : public antlr4::ParserRuleContext {
  public:
    Set_dropContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_dropContext* set_drop();

  class  With_setContext : public antlr4::ParserRuleContext {
  public:
    With_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_setContext* with_set();

  class  Create_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_functionContext *create_function();
    Create_procedureContext *create_procedure();
    Create_triggerContext *create_trigger();
    Create_indexContext *create_index();
    Create_index_extensionContext *create_index_extension();
    Create_roleContext *create_role();
    Create_schemaContext *create_schema();
    Create_sequenceContext *create_sequence();
    Create_synonymContext *create_synonym();
    Create_tableContext *create_table();
    Create_typeContext *create_type();
    Create_viewContext *create_view();
    Create_audit_policyContext *create_audit_policy();
    Create_bufferpoolContext *create_bufferpool();
    Create_database_partition_groupContext *create_database_partition_group();
    Create_event_monitorContext *create_event_monitor();
    Create_function_mappingContext *create_function_mapping();
    Create_global_temporary_tableContext *create_global_temporary_table();
    Create_histogram_templateContext *create_histogram_template();
    Create_maskContext *create_mask();
    Create_methodContext *create_method();
    Create_moduleContext *create_module();
    Create_nicknameContext *create_nickname();
    Create_permissionContext *create_permission();
    Create_security_labelContext *create_security_label();
    Create_security_policyContext *create_security_policy();
    Create_service_classContext *create_service_class();
    Create_serverContext *create_server();
    Create_stogroupContext *create_stogroup();
    Create_tablespaceContext *create_tablespace();
    Create_thresholdContext *create_threshold();
    Create_transformContext *create_transform();
    Create_trusted_contextContext *create_trusted_context();
    Create_usage_listContext *create_usage_list();
    Create_user_mappingContext *create_user_mapping();
    Create_variableContext *create_variable();
    Create_work_actionContext *create_work_action();
    Create_work_classContext *create_work_class();
    Create_workloadContext *create_workload();
    Create_wrapperContext *create_wrapper();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_statementContext* create_statement();

  class  Create_index_extensionContext : public antlr4::ParserRuleContext {
  public:
    Create_index_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *EXTENSION();
    Index_extention_nameContext *index_extention_name();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *SOURCE();
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *USING();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *METHODS();
    std::vector<Search_method_definitionContext *> search_method_definition();
    Search_method_definitionContext* search_method_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_extensionContext* create_index_extension();

  class  Search_method_definitionContext : public antlr4::ParserRuleContext {
  public:
    Search_method_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *THROUGH();
    std::vector<Function_callContext *> function_call();
    Function_callContext* function_call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *USING();
    Case_expressionContext *case_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_method_definitionContext* search_method_definition();

  class  Create_event_monitorContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> EVENT();
    antlr4::tree::TerminalNode* EVENT(size_t i);
    antlr4::tree::TerminalNode *MONITOR();
    Monitor_nameContext *monitor_name();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Event_monitor_elementsContext *> event_monitor_elements();
    Event_monitor_elementsContext* event_monitor_elements(size_t i);
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    Evm_group_infoContext *evm_group_info();
    antlr4::tree::TerminalNode *PIPE();
    Pipe_nameContext *pipe_name();
    antlr4::tree::TerminalNode *FILE();
    StringContext *string();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    NumContext *num();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *GLOBAL();
    std::vector<File_optionsContext *> file_options();
    File_optionsContext* file_options(size_t i);
    antlr4::tree::TerminalNode *ACTIVITIES();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Event_controlContext *> event_control();
    Event_controlContext* event_control(size_t i);
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *UNFORMATTED();
    Target_table_optionsContext *target_table_options();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *DETAILED();
    std::vector<Event_expression2Context *> event_expression2();
    Event_expression2Context* event_expression2(size_t i);
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *WORK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitorContext* create_event_monitor();

  class  Event_expression2Context : public antlr4::ParserRuleContext {
  public:
    Event_expression2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    NumContext *num();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    std::vector<Event_expression2Context *> event_expression2();
    Event_expression2Context* event_expression2(size_t i);
    antlr4::tree::TerminalNode *AND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_expression2Context* event_expression2();
  Event_expression2Context* event_expression2(int precedence);
  class  Event_controlContext : public antlr4::ParserRuleContext {
  public:
    Event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *BACKUP();
    antlr4::tree::TerminalNode *CFGALL();
    antlr4::tree::TerminalNode *DBCFG();
    antlr4::tree::TerminalNode *DBCFGVALUES();
    antlr4::tree::TerminalNode *DBMCFG();
    antlr4::tree::TerminalNode *DBMCFGVALUES();
    antlr4::tree::TerminalNode *DDLALL();
    antlr4::tree::TerminalNode *DDLDATA();
    antlr4::tree::TerminalNode *DDLFEDERATED();
    antlr4::tree::TerminalNode *DDLMONITOR();
    antlr4::tree::TerminalNode *DDLSECURITY();
    antlr4::tree::TerminalNode *DDLSQL();
    antlr4::tree::TerminalNode *DDLSTORAGE();
    antlr4::tree::TerminalNode *DDLWLM();
    antlr4::tree::TerminalNode *DDLXML();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *MOVETABLE();
    antlr4::tree::TerminalNode *ONLINERECOVERY();
    antlr4::tree::TerminalNode *REDISTRIBUTE();
    antlr4::tree::TerminalNode *REGVAR();
    antlr4::tree::TerminalNode *REGVARVALUES();
    antlr4::tree::TerminalNode *REORG();
    antlr4::tree::TerminalNode *RESTORE();
    antlr4::tree::TerminalNode *ROLLFORWARD();
    antlr4::tree::TerminalNode *RUNSTATS();
    antlr4::tree::TerminalNode *UTILALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_controlContext* event_control();

  class  File_optionsContext : public antlr4::ParserRuleContext {
  public:
    File_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *NONE();
    NumContext *num();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_optionsContext* file_options();

  class  Evm_group_infoContext : public antlr4::ParserRuleContext {
  public:
    Evm_group_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Evm_groupContext *> evm_group();
    Evm_groupContext* evm_group(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Target_table_options_createContext *> target_table_options_create();
    Target_table_options_createContext* target_table_options_create(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *BUFFERSIZE();
    NumContext *num();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *NONBLOCKED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Evm_group_infoContext* evm_group_info();

  class  Pipe_nameContext : public antlr4::ParserRuleContext {
  public:
    Pipe_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pipe_nameContext* pipe_name();

  class  Target_table_options_createContext : public antlr4::ParserRuleContext {
  public:
    Target_table_options_createContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    NumContext *num();
    antlr4::tree::TerminalNode *TRUNC();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INCLUDES();
    antlr4::tree::TerminalNode *EXCLUDES();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_table_options_createContext* target_table_options_create();

  class  Event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<Event_expressionContext *> event_expression();
    Event_expressionContext* event_expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    StringContext *string();
    antlr4::tree::TerminalNode *APPL_ID();
    antlr4::tree::TerminalNode *AUTH_ID();
    antlr4::tree::TerminalNode *APPL_NAME();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_expressionContext* event_expression();
  Event_expressionContext* event_expression(int precedence);
  class  Event_monitor_elementsContext : public antlr4::ParserRuleContext {
  public:
    Event_monitor_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *DEADLOCKS();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *BUFFERPOOLS();
    antlr4::tree::TerminalNode *CONNECTIONS();
    antlr4::tree::TerminalNode *STATEMENTS();
    antlr4::tree::TerminalNode *TRANSACTIONS();
    antlr4::tree::TerminalNode *WHERE();
    Event_expressionContext *event_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_monitor_elementsContext* event_monitor_elements();

  class  Create_wrapperContext : public antlr4::ParserRuleContext {
  public:
    Create_wrapperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *LIBRARY();
    Library_nameContext *library_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_wrapperContext* create_wrapper();

  class  Library_nameContext : public antlr4::ParserRuleContext {
  public:
    Library_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_nameContext* library_name();

  class  Create_workloadContext : public antlr4::ParserRuleContext {
  public:
    Create_workloadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WORKLOAD();
    std::vector<Workload_nameContext *> workload_name();
    Workload_nameContext* workload_name(size_t i);
    std::vector<Connection_attributesContext *> connection_attributes();
    Connection_attributesContext* connection_attributes(size_t i);
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *DEGREE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *PRIORITY();
    std::vector<antlr4::tree::TerminalNode *> COLLECT();
    antlr4::tree::TerminalNode* COLLECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTIVITY();
    antlr4::tree::TerminalNode* ACTIVITY(size_t i);
    antlr4::tree::TerminalNode *METRICS();
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AGGREGATE();
    antlr4::tree::TerminalNode* AGGREGATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNIT();
    antlr4::tree::TerminalNode* UNIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCK();
    antlr4::tree::TerminalNode* LOCK(size_t i);
    antlr4::tree::TerminalNode *TIMEOUT();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *WAIT();
    Histogram_template_clauseContext *histogram_template_clause();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AT();
    std::vector<antlr4::tree::TerminalNode *> WITHOUT();
    antlr4::tree::TerminalNode* WITHOUT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HISTORY();
    antlr4::tree::TerminalNode* HISTORY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *THAN();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> DETAILS();
    antlr4::tree::TerminalNode* DETAILS(size_t i);
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MICROSECONDS();
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTENDED();
    antlr4::tree::TerminalNode* EXTENDED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECTION();
    antlr4::tree::TerminalNode* SECTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUES();
    antlr4::tree::TerminalNode* VALUES(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    antlr4::tree::TerminalNode *LIST();
    std::vector<antlr4::tree::TerminalNode *> PACKAGE();
    antlr4::tree::TerminalNode* PACKAGE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXECUTABLE();
    antlr4::tree::TerminalNode* EXECUTABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTUALS();
    antlr4::tree::TerminalNode* ACTUALS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_workloadContext* create_workload();

  class  Connection_attributesContext : public antlr4::ParserRuleContext {
  public:
    Connection_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *APPNAME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_APPNAME();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Connection_attributesContext* connection_attributes();

  class  Create_work_classContext : public antlr4::ParserRuleContext {
  public:
    Create_work_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *SET();
    Class_set_nameContext *class_set_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Work_class_definitionContext *> work_class_definition();
    Work_class_definitionContext* work_class_definition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_work_classContext* create_work_class();

  class  Work_class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Work_class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_nameContext *class_name();
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *DML();
    Position_clauseContext *position_clause();
    For_from_to_clauseContext *for_from_to_clause();
    Data_tag_clauseContext *data_tag_clause();
    Schema_clauseContext *schema_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_definitionContext* work_class_definition();

  class  Work_class_alterationContext : public antlr4::ParserRuleContext {
  public:
    Work_class_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<For_from_to_alter_clauseContext *> for_from_to_alter_clause();
    For_from_to_alter_clauseContext* for_from_to_alter_clause(size_t i);
    std::vector<Schema_alter_clauseContext *> schema_alter_clause();
    Schema_alter_clauseContext* schema_alter_clause(size_t i);
    std::vector<Data_tag_alter_clauseContext *> data_tag_alter_clause();
    Data_tag_alter_clauseContext* data_tag_alter_clause(size_t i);
    std::vector<Position_clauseContext *> position_clause();
    Position_clauseContext* position_clause(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_alterationContext* work_class_alteration();

  class  Position_clauseContext : public antlr4::ParserRuleContext {
  public:
    Position_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *BEFORE();
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AT();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Position_clauseContext* position_clause();

  class  For_from_to_alter_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_from_to_alter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *UNITS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_from_to_alter_clauseContext* for_from_to_alter_clause();

  class  Schema_alter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Schema_alter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_alter_clauseContext* schema_alter_clause();

  class  Data_tag_alter_clauseContext : public antlr4::ParserRuleContext {
  public:
    Data_tag_alter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *CONTAINS();
    NumContext *num();
    antlr4::tree::TerminalNode *ANY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_tag_alter_clauseContext* data_tag_alter_clause();

  class  Schema_clauseContext : public antlr4::ParserRuleContext {
  public:
    Schema_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROUTINES();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_clauseContext* schema_clause();

  class  For_from_to_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_from_to_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *UNBOUNDED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_from_to_clauseContext* for_from_to_clause();

  class  Data_tag_clauseContext : public antlr4::ParserRuleContext {
  public:
    Data_tag_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *CONTAINS();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_tag_clauseContext* data_tag_clause();

  class  Create_work_actionContext : public antlr4::ParserRuleContext {
  public:
    Create_work_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    antlr4::tree::TerminalNode *ACTION();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    Action_set_nameContext *action_set_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> CLASS();
    antlr4::tree::TerminalNode* CLASS(size_t i);
    Class_set_nameContext *class_set_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SERVICE();
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Work_action_definitionContext *> work_action_definition();
    Work_action_definitionContext* work_action_definition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_work_actionContext* create_work_action();

  class  Work_action_definitionContext : public antlr4::ParserRuleContext {
  public:
    Work_action_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Action_nameContext *action_name();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    antlr4::tree::TerminalNode *CLASS();
    Class_nameContext *class_name();
    Action_type_clauseContext *action_type_clause();
    Histogram_template_clauseContext *histogram_template_clause();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_definitionContext* work_action_definition();

  class  Work_action_alterationContext : public antlr4::ParserRuleContext {
  public:
    Work_action_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Action_nameContext *action_name();
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    antlr4::tree::TerminalNode *ACTION();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLASS();
    antlr4::tree::TerminalNode* CLASS(size_t i);
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);
    std::vector<Alter_action_type_clauseContext *> alter_action_type_clause();
    Alter_action_type_clauseContext* alter_action_type_clause(size_t i);
    std::vector<Histogram_template_clauseContext *> histogram_template_clause();
    Histogram_template_clauseContext* histogram_template_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ENABLE();
    antlr4::tree::TerminalNode* ENABLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DISABLE();
    antlr4::tree::TerminalNode* DISABLE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_alterationContext* work_action_alteration();

  class  Action_type_clauseContext : public antlr4::ParserRuleContext {
  public:
    Action_type_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *TO();
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WHEN();
    Threshold_predicateContext *threshold_predicate();
    Threshold_exceeded_actionsContext *threshold_exceeded_actions();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> DETAILS();
    antlr4::tree::TerminalNode* DETAILS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECTION();
    antlr4::tree::TerminalNode* SECTION(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTUALS();
    antlr4::tree::TerminalNode* ACTUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *EXTENDED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_type_clauseContext* action_type_clause();

  class  Alter_action_type_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_action_type_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *TO();
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WHEN();
    Threshold_predicateContext *threshold_predicate();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *ACTION();
    std::vector<Alter_threshold_exceeded_actionsContext *> alter_threshold_exceeded_actions();
    Alter_threshold_exceeded_actionsContext* alter_threshold_exceeded_actions(size_t i);
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> DETAILS();
    antlr4::tree::TerminalNode* DETAILS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECTION();
    antlr4::tree::TerminalNode* SECTION(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTUALS();
    antlr4::tree::TerminalNode* ACTUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *EXTENDED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_action_type_clauseContext* alter_action_type_clause();

  class  Alter_threshold_exceeded_actionsContext : public antlr4::ParserRuleContext {
  public:
    Alter_threshold_exceeded_actionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    std::vector<antlr4::tree::TerminalNode *> DETAILS();
    antlr4::tree::TerminalNode* DETAILS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECTION();
    antlr4::tree::TerminalNode* SECTION(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTUALS();
    antlr4::tree::TerminalNode* ACTUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *TO();
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *LOG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_threshold_exceeded_actionsContext* alter_threshold_exceeded_actions();

  class  Action_nameContext : public antlr4::ParserRuleContext {
  public:
    Action_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_nameContext* action_name();

  class  Class_set_nameContext : public antlr4::ParserRuleContext {
  public:
    Class_set_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_set_nameContext* class_set_name();

  class  Action_set_nameContext : public antlr4::ParserRuleContext {
  public:
    Action_set_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_set_nameContext* action_set_name();

  class  Create_user_mappingContext : public antlr4::ParserRuleContext {
  public:
    Create_user_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *PUBLIC();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_user_mappingContext* create_user_mapping();

  class  Create_usage_listContext : public antlr4::ParserRuleContext {
  public:
    Create_usage_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USAGE();
    std::vector<antlr4::tree::TerminalNode *> LIST();
    antlr4::tree::TerminalNode* LIST(size_t i);
    List_nameContext *list_name();
    antlr4::tree::TerminalNode *FOR();
    Object_nameContext *object_name();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *SIZE();
    NumContext *num();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *INACTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_usage_listContext* create_usage_list();

  class  Object_nameContext : public antlr4::ParserRuleContext {
  public:
    Object_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_nameContext* object_name();

  class  List_nameContext : public antlr4::ParserRuleContext {
  public:
    List_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_nameContext* list_name();

  class  Create_trusted_contextContext : public antlr4::ParserRuleContext {
  public:
    Create_trusted_contextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    antlr4::tree::TerminalNode *BASED();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *AUTHID();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Address_or_encryptionsContext *> address_or_encryptions();
    Address_or_encryptionsContext* address_or_encryptions(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Authorization_elementsContext *> authorization_elements();
    Authorization_elementsContext* authorization_elements(size_t i);
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_trusted_contextContext* create_trusted_context();

  class  Context_nameContext : public antlr4::ParserRuleContext {
  public:
    Context_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Context_nameContext* context_name();

  class  Authorization_elementsContext : public antlr4::ParserRuleContext {
  public:
    Authorization_elementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Authorization_elementsContext* authorization_elements();

  class  Address_or_encryptionsContext : public antlr4::ParserRuleContext {
  public:
    Address_or_encryptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Address_or_encryptionsContext* address_or_encryptions();

  class  Create_transformContext : public antlr4::ParserRuleContext {
  public:
    Create_transformContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> SQL();
    antlr4::tree::TerminalNode* SQL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<Function_designatorContext *> function_designator();
    Function_designatorContext* function_designator(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_transformContext* create_transform();

  class  Create_thresholdContext : public antlr4::ParserRuleContext {
  public:
    Create_thresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *WHEN();
    Threshold_predicateContext *threshold_predicate();
    Threshold_exceeded_actionsContext *threshold_exceeded_actions();
    std::vector<antlr4::tree::TerminalNode *> DATABASE();
    antlr4::tree::TerminalNode* DATABASE(size_t i);
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);
    antlr4::tree::TerminalNode *STATEMENT();
    std::vector<antlr4::tree::TerminalNode *> WORKLOAD();
    antlr4::tree::TerminalNode* WORKLOAD(size_t i);
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *ACTIVITIES();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *TEXT();
    StringContext *string();
    antlr4::tree::TerminalNode *REFERENCE();
    Id_Context *id_();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *OCCURRENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_thresholdContext* create_threshold();

  class  Threshold_exceeded_actionsContext : public antlr4::ParserRuleContext {
  public:
    Threshold_exceeded_actionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *APPLICATION();
    antlr4::tree::TerminalNode *REMAP();
    std::vector<antlr4::tree::TerminalNode *> ACTIVITY();
    antlr4::tree::TerminalNode* ACTIVITY(size_t i);
    antlr4::tree::TerminalNode *TO();
    Class_nameContext *class_name();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    std::vector<antlr4::tree::TerminalNode *> DETAILS();
    antlr4::tree::TerminalNode* DETAILS(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    std::vector<antlr4::tree::TerminalNode *> SECTION();
    antlr4::tree::TerminalNode* SECTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTUALS();
    antlr4::tree::TerminalNode* ACTUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_exceeded_actionsContext* threshold_exceeded_actions();

  class  Threshold_predicateContext : public antlr4::ParserRuleContext {
  public:
    Threshold_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    std::vector<antlr4::tree::TerminalNode *> SECONDS();
    antlr4::tree::TerminalNode* SECONDS(size_t i);
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *EVERY();
    std::vector<antlr4::tree::TerminalNode *> SECOND();
    antlr4::tree::TerminalNode* SECOND(size_t i);
    antlr4::tree::TerminalNode *CPUTIME();
    antlr4::tree::TerminalNode *CPUTIMEINSC();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIMEINALLSC();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *DATATAGINSC();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_predicateContext* threshold_predicate();

  class  Create_tablespaceContext : public antlr4::ParserRuleContext {
  public:
    Create_tablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IN();
    Partition_group_nameContext *partition_group_name();
    antlr4::tree::TerminalNode *PAGESIZE();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *EXTENTSIZE();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    antlr4::tree::TerminalNode *OVERHEAD();
    antlr4::tree::TerminalNode *FILE();
    std::vector<antlr4::tree::TerminalNode *> SYSTEM();
    antlr4::tree::TerminalNode* SYSTEM(size_t i);
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *RECOVERY();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> AUTOMATIC();
    antlr4::tree::TerminalNode* AUTOMATIC(size_t i);
    antlr4::tree::TerminalNode *STORAGE();
    std::vector<antlr4::tree::TerminalNode *> DATABASE();
    antlr4::tree::TerminalNode* DATABASE(size_t i);
    std::vector<Float_literalContext *> float_literal();
    Float_literalContext* float_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INHERIT();
    antlr4::tree::TerminalNode* INHERIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<antlr4::tree::TerminalNode *> KILO();
    antlr4::tree::TerminalNode* KILO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *USER();
    std::vector<antlr4::tree::TerminalNode *> MEGA();
    antlr4::tree::TerminalNode* MEGA(size_t i);
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *STOGROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *INITIALSIZE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *MAXSIZE();
    std::vector<System_containersContext *> system_containers();
    System_containersContext* system_containers(size_t i);
    std::vector<Database_containersContext *> database_containers();
    Database_containersContext* database_containers(size_t i);
    antlr4::tree::TerminalNode *YES();
    std::vector<antlr4::tree::TerminalNode *> GIGA();
    antlr4::tree::TerminalNode* GIGA(size_t i);
    antlr4::tree::TerminalNode *PERCENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tablespaceContext* create_tablespace();

  class  Database_containersContext : public antlr4::ParserRuleContext {
  public:
    Database_containersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> FILE();
    antlr4::tree::TerminalNode* FILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEVICE();
    antlr4::tree::TerminalNode* DEVICE(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    On_db_partition_clauseContext *on_db_partition_clause();
    std::vector<antlr4::tree::TerminalNode *> KILO();
    antlr4::tree::TerminalNode* KILO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEGA();
    antlr4::tree::TerminalNode* MEGA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GIGA();
    antlr4::tree::TerminalNode* GIGA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_containersContext* database_containers();

  class  System_containersContext : public antlr4::ParserRuleContext {
  public:
    System_containersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    On_db_partition_clauseContext *on_db_partition_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_containersContext* system_containers();

  class  On_db_partition_clauseContext : public antlr4::ParserRuleContext {
  public:
    On_db_partition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_db_partition_clauseContext* on_db_partition_clause();

  class  Create_stogroupContext : public antlr4::ParserRuleContext {
  public:
    Create_stogroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *STOGROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *ON();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OVERHEAD();
    Float_literalContext *float_literal();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *RATE();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_stogroupContext* create_stogroup();

  class  Create_serverContext : public antlr4::ParserRuleContext {
  public:
    Create_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *VERSION();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *PASSWORD();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_serverContext* create_server();

  class  Create_service_classContext : public antlr4::ParserRuleContext {
  public:
    Create_service_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<Class_nameContext *> class_name();
    Class_nameContext* class_name(size_t i);
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> RESOURCE();
    antlr4::tree::TerminalNode* RESOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARES();
    antlr4::tree::TerminalNode* SHARES(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CPU();
    antlr4::tree::TerminalNode* CPU(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIMIT();
    antlr4::tree::TerminalNode* LIMIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ACTIVITY();
    antlr4::tree::TerminalNode* ACTIVITY(size_t i);
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *ORDER();
    std::vector<antlr4::tree::TerminalNode *> DEGREE();
    antlr4::tree::TerminalNode* DEGREE(size_t i);
    antlr4::tree::TerminalNode *SCALEBACK();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *PREFETCH();
    std::vector<antlr4::tree::TerminalNode *> PRIORITY();
    antlr4::tree::TerminalNode* PRIORITY(size_t i);
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *CORRELATOR();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    std::vector<antlr4::tree::TerminalNode *> COLLECT();
    antlr4::tree::TerminalNode* COLLECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AGGREGATE();
    antlr4::tree::TerminalNode* AGGREGATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST();
    antlr4::tree::TerminalNode* REQUEST(size_t i);
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *METRICS();
    Histogram_template_clauseContext *histogram_template_clause();
    antlr4::tree::TerminalNode *UOW();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *CUSTOM();
    std::vector<antlr4::tree::TerminalNode *> SOFT();
    antlr4::tree::TerminalNode* SOFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HARD();
    antlr4::tree::TerminalNode* HARD(size_t i);
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *LATENCY();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();
    std::vector<antlr4::tree::TerminalNode *> HIGH();
    antlr4::tree::TerminalNode* HIGH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MEDIUM();
    antlr4::tree::TerminalNode* MEDIUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOW();
    antlr4::tree::TerminalNode* LOW(size_t i);
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    StringContext *string();
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTENDED();
    antlr4::tree::TerminalNode* EXTENDED(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_service_classContext* create_service_class();

  class  Histogram_template_clauseContext : public antlr4::ParserRuleContext {
  public:
    Histogram_template_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Histogram_template_clauseContext* histogram_template_clause();

  class  Class_nameContext : public antlr4::ParserRuleContext {
  public:
    Class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_nameContext* class_name();

  class  Create_security_policyContext : public antlr4::ParserRuleContext {
  public:
    Create_security_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> SECURITY();
    antlr4::tree::TerminalNode* SECURITY(size_t i);
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *COMPONENTS();
    std::vector<Component_nameContext *> component_name();
    Component_nameContext* component_name(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DB2LBACRULES();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *OVERRIDE();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_policyContext* create_security_policy();

  class  Create_security_labelContext : public antlr4::ParserRuleContext {
  public:
    Create_security_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *COMPONENT();
    std::vector<Component_nameContext *> component_name();
    Component_nameContext* component_name(size_t i);
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LR_SQUARE_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LR_BRACE();
    antlr4::tree::TerminalNode *RR_BRACE();
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNDER();
    antlr4::tree::TerminalNode* UNDER(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_labelContext* create_security_label();

  class  Component_nameContext : public antlr4::ParserRuleContext {
  public:
    Component_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_nameContext* component_name();

  class  Create_permissionContext : public antlr4::ParserRuleContext {
  public:
    Create_permissionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *WHERE();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_permissionContext* create_permission();

  class  Create_nicknameContext : public antlr4::ParserRuleContext {
  public:
    Create_nicknameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *NICKNAME();
    NicknameContext *nickname();
    antlr4::tree::TerminalNode *FOR();
    Id_Context *id_();
    Table_element_listContext *table_element_list();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_nicknameContext* create_nickname();

  class  Create_moduleContext : public antlr4::ParserRuleContext {
  public:
    Create_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MODULE_();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_moduleContext* create_module();

  class  Create_methodContext : public antlr4::ParserRuleContext {
  public:
    Create_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *METHOD();
    Method_signatureContext *method_signature();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    Sql_method_bodyContext *sql_method_body();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_methodContext* create_method();

  class  Method_signatureContext : public antlr4::ParserRuleContext {
  public:
    Method_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOCATOR();
    antlr4::tree::TerminalNode* LOCATOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_signatureContext* method_signature();

  class  Sql_method_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sql_method_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Compound_statementContext *compound_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_method_bodyContext* sql_method_body();

  class  Create_maskContext : public antlr4::ParserRuleContext {
  public:
    Create_maskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MASK();
    Mask_nameContext *mask_name();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *COLUMN();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *RETURN();
    Case_expressionContext *case_expression();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_maskContext* create_mask();

  class  Create_histogram_templateContext : public antlr4::ParserRuleContext {
  public:
    Create_histogram_templateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *VALUE();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_histogram_templateContext* create_histogram_template();

  class  Create_function_mappingContext : public antlr4::ParserRuleContext {
  public:
    Create_function_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    Remote_serverContext *remote_server();
    Function_nameContext *function_name();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    Function_mapping_nameContext *function_mapping_name();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *INFIX();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_mappingContext* create_function_mapping();

  class  Create_database_partition_groupContext : public antlr4::ParserRuleContext {
  public:
    Create_database_partition_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    Db_partition_clauseContext *db_partition_clause();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_partition_groupContext* create_database_partition_group();

  class  Create_bufferpoolContext : public antlr4::ParserRuleContext {
  public:
    Create_bufferpoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<Partition_group_nameContext *> partition_group_name();
    Partition_group_nameContext* partition_group_name(size_t i);
    antlr4::tree::TerminalNode *SIZE();
    Except_clauseContext *except_clause();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    std::vector<Number_of_pagesContext *> number_of_pages();
    Number_of_pagesContext* number_of_pages(size_t i);
    antlr4::tree::TerminalNode *PAGESIZE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *AUTOMATIC();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *KILO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_bufferpoolContext* create_bufferpool();

  class  Except_clauseContext : public antlr4::ParserRuleContext {
  public:
    Except_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SIZE();
    antlr4::tree::TerminalNode* SIZE(size_t i);
    std::vector<Number_of_pagesContext *> number_of_pages();
    Number_of_pagesContext* number_of_pages(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Except_clauseContext* except_clause();

  class  Create_audit_policyContext : public antlr4::ParserRuleContext {
  public:
    Create_audit_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> AUDIT();
    antlr4::tree::TerminalNode* AUDIT(size_t i);
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    std::vector<Audit_policy_categoriesContext *> audit_policy_categories();
    Audit_policy_categoriesContext* audit_policy_categories(size_t i);
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NORMAL();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_audit_policyContext* create_audit_policy();

  class  Audit_policy_categoriesContext : public antlr4::ParserRuleContext {
  public:
    Audit_policy_categoriesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATEGORIES();
    Audit_policy_categoryContext *audit_policy_category();
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SUCCESS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_policy_categoriesContext* audit_policy_categories();

  class  Create_variableContext : public antlr4::ParserRuleContext {
  public:
    Create_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_variableContext* create_variable();

  class  Value_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Value_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_data_typeContext* value_data_type();

  class  Create_functionContext : public antlr4::ParserRuleContext {
  public:
    Create_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<Function_nameContext *> function_name();
    Function_nameContext* function_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *RETURNS();
    Return_data_typeContext *return_data_type();
    Function_bodyContext *function_body();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *WITH();
    State_variable_declarationsContext *state_variable_declarations();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *INITIALIZE();
    std::vector<Procedure_designatorContext *> procedure_designator();
    Procedure_designatorContext* procedure_designator(size_t i);
    antlr4::tree::TerminalNode *ACCUMULATE();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *FINALIZE();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<Function_parameterContext *> function_parameter();
    Function_parameterContext* function_parameter(size_t i);
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TEMPLATE();
    std::vector<Sql_option_listsContext *> sql_option_lists();
    Sql_option_listsContext* sql_option_lists(size_t i);
    std::vector<External_option_listsContext *> external_option_lists();
    External_option_listsContext* external_option_lists(size_t i);
    std::vector<Oledb_option_listsContext *> oledb_option_lists();
    Oledb_option_listsContext* oledb_option_lists(size_t i);
    std::vector<Aggregate_option_listsContext *> aggregate_option_lists();
    Aggregate_option_listsContext* aggregate_option_lists(size_t i);
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    std::vector<antlr4::tree::TerminalNode *> SPECIFIC();
    antlr4::tree::TerminalNode* SPECIFIC(size_t i);
    std::vector<Specific_nameContext *> specific_name();
    Specific_nameContext* specific_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NO();
    std::vector<Data_type1Context *> data_type1();
    Data_type1Context* data_type1(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_functionContext* create_function();

  class  State_variable_declarationsContext : public antlr4::ParserRuleContext {
  public:
    State_variable_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Built_in_typeContext *> built_in_type();
    Built_in_typeContext* built_in_type(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  State_variable_declarationsContext* state_variable_declarations();

  class  Function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    antlr4::tree::TerminalNode *ATOMIC();
    std::vector<Type_declarationsContext *> type_declarations();
    Type_declarationsContext* type_declarations(size_t i);
    std::vector<Sql_variable_declarationsContext *> sql_variable_declarations();
    Sql_variable_declarationsContext* sql_variable_declarations(size_t i);
    std::vector<Condition_declarationsContext *> condition_declarations();
    Condition_declarationsContext* condition_declarations(size_t i);
    std::vector<Return_codes_declarationsContext *> return_codes_declarations();
    Return_codes_declarationsContext* return_codes_declarations(size_t i);
    std::vector<Statement_declarationsContext *> statement_declarations();
    Statement_declarationsContext* statement_declarations(size_t i);
    std::vector<Declare_cursor_statementsContext *> declare_cursor_statements();
    Declare_cursor_statementsContext* declare_cursor_statements(size_t i);
    std::vector<Procedure_declarationsContext *> procedure_declarations();
    Procedure_declarationsContext* procedure_declarations(size_t i);
    std::vector<Handler_declarationsContext *> handler_declarations();
    Handler_declarationsContext* handler_declarations(size_t i);
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *NOT();
    Return_statementContext *return_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_bodyContext* function_body();

  class  Oledb_option_listsContext : public antlr4::ParserRuleContext {
  public:
    Oledb_option_listsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *OLEDB();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CARDINALITY();
    NumContext *num();
    antlr4::tree::TerminalNode *SECURED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oledb_option_listsContext* oledb_option_lists();

  class  Aggregate_option_listsContext : public antlr4::ParserRuleContext {
  public:
    Aggregate_option_listsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *SECURED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregate_option_listsContext* aggregate_option_lists();

  class  Sql_option_listsContext : public antlr4::ParserRuleContext {
  public:
    Sql_option_listsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Predicate_specificationContext *predicate_specification();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *REQUEST();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *SECURED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_option_listsContext* sql_option_lists();

  class  External_option_listsContext : public antlr4::ParserRuleContext {
  public:
    External_option_listsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *CPP();
    antlr4::tree::TerminalNode *PYTHON();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *NPSGENERIC();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *THREADSAFE();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    NumContext *num();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Predicate_specificationContext *predicate_specification();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *RESIDENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_option_listsContext* external_option_lists();

  class  Predicate_specificationContext : public antlr4::ParserRuleContext {
  public:
    Predicate_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LTGT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    ConstantContext *constant();
    antlr4::tree::TerminalNode *EXPRESSION();
    antlr4::tree::TerminalNode *AS();
    Expression_nameContext *expression_name();
    Data_filterContext *data_filter();
    Index_exploitationContext *index_exploitation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Predicate_specificationContext* predicate_specification();

  class  Data_filterContext : public antlr4::ParserRuleContext {
  public:
    Data_filterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *USING();
    Function_callContext *function_call();
    Case_expressionContext *case_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_filterContext* data_filter();

  class  Index_exploitationContext : public antlr4::ParserRuleContext {
  public:
    Index_exploitationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *EXTENSION();
    Index_extention_nameContext *index_extention_name();
    antlr4::tree::TerminalNode *EXACT();
    std::vector<Exploitation_ruleContext *> exploitation_rule();
    Exploitation_ruleContext* exploitation_rule(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_exploitationContext* index_exploitation();

  class  Index_extention_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_extention_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_extention_nameContext* index_extention_name();

  class  Exploitation_ruleContext : public antlr4::ParserRuleContext {
  public:
    Exploitation_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *KEY();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *USE();
    Search_method_nameContext *search_method_name();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exploitation_ruleContext* exploitation_rule();

  class  Search_method_nameContext : public antlr4::ParserRuleContext {
  public:
    Search_method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_method_nameContext* search_method_name();

  class  Expression_nameContext : public antlr4::ParserRuleContext {
  public:
    Expression_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_nameContext* expression_name();

  class  Function_column_listContext : public antlr4::ParserRuleContext {
  public:
    Function_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_column_listContext* function_column_list();

  class  Function_parameterContext : public antlr4::ParserRuleContext {
  public:
    Function_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type1Context *data_type1();
    Parameter_nameContext *parameter_name();
    antlr4::tree::TerminalNode *DEFAULT();
    Default_valuesContext *default_values();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_parameterContext* function_parameter();

  class  Return_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Return_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Column_elementContext *> column_element();
    Column_elementContext* column_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *TABLE();
    Type_nameContext *type_name();
    Anchored_data_typeContext *anchored_data_type();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *OF();
    std::vector<Data_type4Context *> data_type4();
    Data_type4Context* data_type4(size_t i);
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *GENERIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_data_typeContext* return_data_type();

  class  Data_type4Context : public antlr4::ParserRuleContext {
  public:
    Data_type4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_data_typeContext *anchored_data_type();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type4Context* data_type4();

  class  Table_typeContext : public antlr4::ParserRuleContext {
  public:
    Table_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Column_elementContext *> column_element();
    Column_elementContext* column_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_typeContext* table_type();

  class  Column_elementContext : public antlr4::ParserRuleContext {
  public:
    Column_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Built_in_typeContext *built_in_type();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LOCATOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_elementContext* column_element();

  class  Create_indexContext : public antlr4::ParserRuleContext {
  public:
    Create_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Index_column_parameterContext *> index_column_parameter();
    Index_column_parameterContext* index_column_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *UNIQUE();
    std::vector<Asc_descContext *> asc_desc();
    Asc_descContext* asc_desc(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PARTITIONED();
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *SPECIFICATION();
    antlr4::tree::TerminalNode *ONLY();
    std::vector<antlr4::tree::TerminalNode *> INCLUDE();
    antlr4::tree::TerminalNode* INCLUDE(size_t i);
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    Xml_index_specificationContext *xml_index_specification();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *USING();
    Index_extension_nameContext *index_extension_name();
    std::vector<antlr4::tree::TerminalNode *> PCTFREE();
    antlr4::tree::TerminalNode* PCTFREE(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *LEVEL2();
    antlr4::tree::TerminalNode *MINPCTUSED();
    antlr4::tree::TerminalNode *REVERSE();
    antlr4::tree::TerminalNode *SCANS();
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *SPLIT();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *KEYS();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *SYMMETRIC();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *EXCLUDE();
    std::vector<Constant_expression_nullContext *> constant_expression_null();
    Constant_expression_nullContext* constant_expression_null(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *DETAILED();
    antlr4::tree::TerminalNode *SAMPLED();
    antlr4::tree::TerminalNode *UNSAMPLED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_indexContext* create_index();

  class  Index_column_parameterContext : public antlr4::ParserRuleContext {
  public:
    Index_column_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_column_nameContext *simple_column_name();
    Function_callContext *function_call();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_column_parameterContext* index_column_parameter();

  class  Index_extension_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_extension_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_extension_nameContext* index_extension_name();

  class  Xml_index_specificationContext : public antlr4::ParserRuleContext {
  public:
    Xml_index_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *XMLPATTERN();
    Xmlpattern_clauseContext *xmlpattern_clause();
    Xmltype_clauseContext *xmltype_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_index_specificationContext* xml_index_specification();

  class  Xmltype_clauseContext : public antlr4::ParserRuleContext {
  public:
    Xmltype_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SQL();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *REJECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmltype_clauseContext* xmltype_clause();

  class  Xmlpattern_clauseContext : public antlr4::ParserRuleContext {
  public:
    Xmlpattern_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmlpattern_clauseContext* xmlpattern_clause();

  class  Create_procedureContext : public antlr4::ParserRuleContext {
  public:
    Create_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Procedure_bodyContext *procedure_body();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Procedure_option_listsContext *> procedure_option_lists();
    Procedure_option_listsContext* procedure_option_lists(size_t i);
    std::vector<Procedure_parameterContext *> procedure_parameter();
    Procedure_parameterContext* procedure_parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedureContext* create_procedure();

  class  Procedure_parameterContext : public antlr4::ParserRuleContext {
  public:
    Procedure_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    Data_type1Context *data_type1();
    antlr4::tree::TerminalNode *DEFAULT();
    Default_valuesContext *default_values();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_parameterContext* procedure_parameter();

  class  Procedure_option_listsContext : public antlr4::ParserRuleContext {
  public:
    Procedure_option_listsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *SETS();
    NumContext *num();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_option_listsContext* procedure_option_lists();

  class  Procedure_bodyContext : public antlr4::ParserRuleContext {
  public:
    Procedure_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    antlr4::tree::TerminalNode *ATOMIC();
    std::vector<Type_declarationsContext *> type_declarations();
    Type_declarationsContext* type_declarations(size_t i);
    std::vector<Sql_variable_declarationsContext *> sql_variable_declarations();
    Sql_variable_declarationsContext* sql_variable_declarations(size_t i);
    std::vector<Condition_declarationsContext *> condition_declarations();
    Condition_declarationsContext* condition_declarations(size_t i);
    std::vector<Return_codes_declarationsContext *> return_codes_declarations();
    Return_codes_declarationsContext* return_codes_declarations(size_t i);
    std::vector<Statement_declarationsContext *> statement_declarations();
    Statement_declarationsContext* statement_declarations(size_t i);
    std::vector<Declare_cursor_statementsContext *> declare_cursor_statements();
    Declare_cursor_statementsContext* declare_cursor_statements(size_t i);
    std::vector<Procedure_declarationsContext *> procedure_declarations();
    Procedure_declarationsContext* procedure_declarations(size_t i);
    std::vector<Handler_declarationsContext *> handler_declarations();
    Handler_declarationsContext* handler_declarations(size_t i);
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_bodyContext* procedure_body();

  class  Declare_cursor_statementsContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursor_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SEMI();
    Select_statementContext *select_statement();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *INSENSITIVE();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITHOUT();
    antlr4::tree::TerminalNode* WITHOUT(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CLIENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursor_statementsContext* declare_cursor_statements();

  class  Handler_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Handler_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *HANDLER();
    antlr4::tree::TerminalNode *FOR();
    Sql_statementContext *sql_statement();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *UNDO();
    Specific_condition_valueContext *specific_condition_value();
    General_condition_valueContext *general_condition_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Handler_declarationsContext* handler_declarations();

  class  Specific_condition_valueContext : public antlr4::ParserRuleContext {
  public:
    Specific_condition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SQLSTATE();
    antlr4::tree::TerminalNode* SQLSTATE(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<Condition_nameContext *> condition_name();
    Condition_nameContext* condition_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUE();
    antlr4::tree::TerminalNode* VALUE(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specific_condition_valueContext* specific_condition_value();

  class  General_condition_valueContext : public antlr4::ParserRuleContext {
  public:
    General_condition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SQLEXCEPTION();
    antlr4::tree::TerminalNode* SQLEXCEPTION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SQLWARNING();
    antlr4::tree::TerminalNode* SQLWARNING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FOUND();
    antlr4::tree::TerminalNode* FOUND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_condition_valueContext* general_condition_value();

  class  Sql_procedure_statementsContext : public antlr4::ParserRuleContext {
  public:
    Sql_procedure_statementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sql_procedure_statementContext *sql_procedure_statement();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_procedure_statementsContext* sql_procedure_statements();

  class  Sql_procedure_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_procedure_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sql_statementContext *sql_statement();
    Compound_statementContext *compound_statement();
    Label_declarationContext *label_declaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_procedure_statementContext* sql_procedure_statement();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    While_statementContext *while_statement();
    If_statementContext *if_statement();
    Leave_statementContext *leave_statement();
    Loop_statementContext *loop_statement();
    Return_statementContext *return_statement();
    For_statementContext *for_statement();
    Iterate_statementContext *iterate_statement();
    Signal_statementContext *signal_statement();
    Goto_statementContext *goto_statement();
    Get_diagnostics_statementContext *get_diagnostics_statement();
    Repeat_statementContext *repeat_statement();
    Resignal_statementContext *resignal_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Repeat_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT();
    antlr4::tree::TerminalNode* REPEAT(size_t i);
    antlr4::tree::TerminalNode *UNTIL();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_statementContext* repeat_statement();

  class  Get_diagnostics_statementContext : public antlr4::ParserRuleContext {
  public:
    Get_diagnostics_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    antlr4::tree::TerminalNode *EXCEPTION();
    NumContext *num();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *ROW_COUNT();
    std::vector<antlr4::tree::TerminalNode *> DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode* DB2_TOKEN_STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MESSAGE_TEXT();
    antlr4::tree::TerminalNode* MESSAGE_TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_diagnostics_statementContext* get_diagnostics_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Leave_statementContext : public antlr4::ParserRuleContext {
  public:
    Leave_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    Label_nameContext *label_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Leave_statementContext* leave_statement();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    Select_only_statementContext *select_only_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    For_loop_nameContext *for_loop_name();
    antlr4::tree::TerminalNode *AS();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *INSENSITIVE();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *HOLD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

  class  For_loop_nameContext : public antlr4::ParserRuleContext {
  public:
    For_loop_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_loop_nameContext* for_loop_name();

  class  Iterate_statementContext : public antlr4::ParserRuleContext {
  public:
    Iterate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE();
    Label_nameContext *label_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Iterate_statementContext* iterate_statement();

  class  Signal_statementContext : public antlr4::ParserRuleContext {
  public:
    Signal_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SQLSTATE();
    StringContext *string();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_statementContext* signal_statement();

  class  Resignal_statementContext : public antlr4::ParserRuleContext {
  public:
    Resignal_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *SQLSTATE();
    StringContext *string();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resignal_statementContext* resignal_statement();

  class  Fetch_statementContext : public antlr4::ParserRuleContext {
  public:
    Fetch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *INTO();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    Descriptor_nameContext *descriptor_name();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_statementContext* fetch_statement();

  class  Descriptor_nameContext : public antlr4::ParserRuleContext {
  public:
    Descriptor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Descriptor_nameContext* descriptor_name();

  class  Goto_statementContext : public antlr4::ParserRuleContext {
  public:
    Goto_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    Label_nameContext *label_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_statementContext* goto_statement();

  class  Procedure_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Procedure_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Procedure_bodyContext *procedure_body();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    std::vector<Parameter_declarationContext *> parameter_declaration();
    Parameter_declarationContext* parameter_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_declarationsContext* procedure_declarations();

  class  Return_codes_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Return_codes_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    NumContext *num();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *SQLCODE();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *DEFAULT();
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_codes_declarationsContext* return_codes_declarations();

  class  Sql_variable_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Sql_variable_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *RESULT_SET_LOCATOR();
    antlr4::tree::TerminalNode *VARYING();
    Data_type1Context *data_type1();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *NULL_();
    ConstantContext *constant();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Cursor_value_constructorContext *cursor_value_constructor();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_variable_declarationsContext* sql_variable_declarations();

  class  Cursor_value_constructorContext : public antlr4::ParserRuleContext {
  public:
    Cursor_value_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    Select_statementContext *select_statement();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Parameter_declarationContext *> parameter_declaration();
    Parameter_declarationContext* parameter_declaration(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_value_constructorContext* cursor_value_constructor();

  class  Statement_nameContext : public antlr4::ParserRuleContext {
  public:
    Statement_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_nameContext* statement_name();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    Data_type3Context *data_type3();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Condition_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Condition_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *CONDITION();
    StringContext *string();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_declarationsContext* condition_declarations();

  class  Condition_nameContext : public antlr4::ParserRuleContext {
  public:
    Condition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_nameContext* condition_name();

  class  Statement_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Statement_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    std::vector<Statement_nameContext *> statement_name();
    Statement_nameContext* statement_name(size_t i);
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_declarationsContext* statement_declarations();

  class  Type_declarationsContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    Array_type_definitionContext *array_type_definition();
    Distinct_type_definitionContext *distinct_type_definition();
    Row_type_definitionContext *row_type_definition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationsContext* type_declarations();

  class  Array_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Array_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type1Context *data_type1();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *RR_SQUARE_BRACKET();
    NumContext *num();
    Data_type2Context *data_type2();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_type_definitionContext* array_type_definition();

  class  Distinct_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Distinct_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Source_data_typeContext *source_data_type();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WEAK();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Distinct_type_definitionContext* distinct_type_definition();

  class  Row_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Row_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Field_nameContext *> field_name();
    Field_nameContext* field_name(size_t i);
    std::vector<Data_type3Context *> data_type3();
    Data_type3Context* data_type3(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Anchored_data_typeContext *anchored_data_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_type_definitionContext* row_type_definition();

  class  Source_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Source_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_non_row_data_typeContext *anchored_non_row_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_data_typeContext* source_data_type();

  class  Label_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    Label_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Label_declarationContext* label_declaration();

  class  Built_in_typeContext : public antlr4::ParserRuleContext {
  public:
    Built_in_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *KILO();
    antlr4::tree::TerminalNode *MEGA();
    antlr4::tree::TerminalNode *GIGA();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    Encoding_optionContext *encoding_option();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *CLOB();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NATIONAL();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *NCLOB();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *VARGRAPHIC();
    antlr4::tree::TerminalNode *DBCLOB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Built_in_typeContext* built_in_type();

  class  Encoding_optionContext : public antlr4::ParserRuleContext {
  public:
    Encoding_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Encoding_optionContext* encoding_option();

  class  Create_roleContext : public antlr4::ParserRuleContext {
  public:
    Create_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_roleContext* create_role();

  class  Create_schemaContext : public antlr4::ParserRuleContext {
  public:
    Create_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    User_nameContext *user_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CAPTURE();
    std::vector<Create_tableContext *> create_table();
    Create_tableContext* create_table(size_t i);
    std::vector<Create_viewContext *> create_view();
    Create_viewContext* create_view(size_t i);
    std::vector<Create_indexContext *> create_index();
    Create_indexContext* create_index(size_t i);
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *TRACKING();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *CHANGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schemaContext* create_schema();

  class  Create_sequenceContext : public antlr4::ParserRuleContext {
  public:
    Create_sequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *INTEGER();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *ORDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_sequenceContext* create_sequence();

  class  Sequence_elementContext : public antlr4::ParserRuleContext {
  public:
    Sequence_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Built_in_typeContext *built_in_type();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    SignedIntegerContext *signedInteger();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *CYCLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_elementContext* sequence_element();

  class  SignedIntegerContext : public antlr4::ParserRuleContext {
  public:
    SignedIntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedIntegerContext* signedInteger();

  class  Create_synonymContext : public antlr4::ParserRuleContext {
  public:
    Create_synonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    Synonym_nameContext *synonym_name();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *SYNONYM();
    antlr4::tree::TerminalNode *FOR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *MODULE_();
    antlr4::tree::TerminalNode *SEQUENCE();
    antlr4::tree::TerminalNode *TABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_synonymContext* create_synonym();

  class  Create_tableContext : public antlr4::ParserRuleContext {
  public:
    Create_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    Table_element_listContext *table_element_list();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *OF();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    Staging_table_definitionContext *staging_table_definition();
    If_not_existsContext *if_not_exists();
    std::vector<antlr4::tree::TerminalNode *> ORGANIZE();
    antlr4::tree::TerminalNode* ORGANIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CAPTURE();
    antlr4::tree::TerminalNode* CAPTURE(size_t i);
    std::vector<Distribution_clauseContext *> distribution_clause();
    Distribution_clauseContext* distribution_clause(size_t i);
    std::vector<Partitioning_clauseContext *> partitioning_clause();
    Partitioning_clauseContext* partitioning_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMPRESS();
    antlr4::tree::TerminalNode* COMPRESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUE();
    antlr4::tree::TerminalNode* VALUE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMPRESSION();
    antlr4::tree::TerminalNode* COMPRESSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RESTRICT();
    antlr4::tree::TerminalNode* RESTRICT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGGED();
    antlr4::tree::TerminalNode* LOGGED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INITIALLY();
    antlr4::tree::TerminalNode* INITIALLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CCSID();
    antlr4::tree::TerminalNode* CCSID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SECURITY();
    antlr4::tree::TerminalNode* SECURITY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> POLICY();
    antlr4::tree::TerminalNode* POLICY(size_t i);
    std::vector<Policy_nameContext *> policy_name();
    Policy_nameContext* policy_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPTIONS();
    antlr4::tree::TerminalNode* OPTIONS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Table_option_nameContext *> table_option_name();
    Table_option_nameContext* table_option_name(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    Refreshable_table_optionsContext *refreshable_table_options();
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CHANGES();
    antlr4::tree::TerminalNode* CHANGES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASCII();
    antlr4::tree::TerminalNode* ASCII(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNICODE();
    antlr4::tree::TerminalNode* UNICODE(size_t i);
    Copy_optionsContext *copy_options();
    Typed_table_optionsContext *typed_table_options();
    Simple_column_name_listContext *simple_column_name_list();
    std::vector<antlr4::tree::TerminalNode *> ROW();
    antlr4::tree::TerminalNode* ROW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> YES();
    antlr4::tree::TerminalNode* YES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    std::vector<Tablespace_clausesContext *> tablespace_clauses();
    Tablespace_clausesContext* tablespace_clauses(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADAPTIVE();
    antlr4::tree::TerminalNode* ADAPTIVE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATIC();
    antlr4::tree::TerminalNode* STATIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Dimensions_clauseContext *> dimensions_clause();
    Dimensions_clauseContext* dimensions_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEQUENCE();
    antlr4::tree::TerminalNode* SEQUENCE(size_t i);
    std::vector<Sequence_key_specContext *> sequence_key_spec();
    Sequence_key_specContext* sequence_key_spec(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INSERT();
    antlr4::tree::TerminalNode* INSERT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TIME();
    antlr4::tree::TerminalNode* TIME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> USING();
    antlr4::tree::TerminalNode* USING(size_t i);
    antlr4::tree::TerminalNode *EXTERNAL();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<Option_valueContext *> option_value();
    Option_valueContext* option_value(size_t i);
    File_nameContext *file_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tableContext* create_table();

  class  Create_global_temporary_tableContext : public antlr4::ParserRuleContext {
  public:
    Create_global_temporary_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    Table_element_listContext *table_element_list();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *OF();
    Type_nameContext *type_name();
    As_result_tableContext *as_result_table();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    antlr4::tree::TerminalNode *COMMIT();
    std::vector<antlr4::tree::TerminalNode *> ROWS();
    antlr4::tree::TerminalNode* ROWS(size_t i);
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    Distribution_clauseContext *distribution_clause();
    std::vector<antlr4::tree::TerminalNode *> DELETE();
    antlr4::tree::TerminalNode* DELETE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PRESERVE();
    antlr4::tree::TerminalNode* PRESERVE(size_t i);
    Copy_optionsContext *copy_options();
    Typed_table_optionsContext *typed_table_options();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ROLLBACK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_global_temporary_tableContext* create_global_temporary_table();

  class  Option_nameContext : public antlr4::ParserRuleContext {
  public:
    Option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_nameContext* option_name();

  class  Option_valueContext : public antlr4::ParserRuleContext {
  public:
    Option_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_valueContext* option_value();

  class  File_nameContext : public antlr4::ParserRuleContext {
  public:
    File_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_nameContext* file_name();

  class  Policy_nameContext : public antlr4::ParserRuleContext {
  public:
    Policy_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Policy_nameContext* policy_name();

  class  Table_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_option_nameContext* table_option_name();

  class  Copy_optionsContext : public antlr4::ParserRuleContext {
  public:
    Copy_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULTS();
    std::vector<antlr4::tree::TerminalNode *> INCLUDING();
    antlr4::tree::TerminalNode* INCLUDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUDING();
    antlr4::tree::TerminalNode* EXCLUDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *ATTRIBUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_optionsContext* copy_options();

  class  If_not_existsContext : public antlr4::ParserRuleContext {
  public:
    If_not_existsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_not_existsContext* if_not_exists();

  class  Typed_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Typed_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HIERARCHY();
    Id_Context *id_();
    Under_clauseContext *under_clause();
    Typed_element_listContext *typed_element_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_table_optionsContext* typed_table_options();

  class  Under_clauseContext : public antlr4::ParserRuleContext {
  public:
    Under_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDER();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *PRIVILEGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Under_clauseContext* under_clause();

  class  Table_element_listContext : public antlr4::ParserRuleContext {
  public:
    Table_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Table_elementContext *> table_element();
    Table_elementContext* table_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_element_listContext* table_element_list();

  class  Table_elementContext : public antlr4::ParserRuleContext {
  public:
    Table_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_definitionContext *column_definition();
    Period_definitionContext *period_definition();
    Unique_constraintContext *unique_constraint();
    Referential_constraintContext *referential_constraint();
    Check_constraintContext *check_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_elementContext* table_element();

  class  Period_definitionContext : public antlr4::ParserRuleContext {
  public:
    Period_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *BUSINESS_TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_definitionContext* period_definition();

  class  Typed_element_listContext : public antlr4::ParserRuleContext {
  public:
    Typed_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Typed_elementContext *> typed_element();
    Typed_elementContext* typed_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_element_listContext* typed_element_list();

  class  Typed_elementContext : public antlr4::ParserRuleContext {
  public:
    Typed_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Oid_column_definitionContext *oid_column_definition();
    With_optionsContext *with_options();
    Unique_constraintContext *unique_constraint();
    Check_constraintContext *check_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_elementContext* typed_element();

  class  Oid_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Oid_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *IS();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *GENERATED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oid_column_definitionContext* oid_column_definition();

  class  Unique_constraintContext : public antlr4::ParserRuleContext {
  public:
    Unique_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Column_identifierContext *> column_identifier();
    Column_identifierContext* column_identifier(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *OVERLAPS();
    Constraint_attributesContext *constraint_attributes();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unique_constraintContext* unique_constraint();

  class  Referential_constraintContext : public antlr4::ParserRuleContext {
  public:
    Referential_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    Column_listContext *column_list();
    References_clauseContext *references_clause();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Referential_constraintContext* referential_constraint();

  class  Check_constraintContext : public antlr4::ParserRuleContext {
  public:
    Check_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    Constraint_attributesContext *constraint_attributes();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_constraintContext* check_constraint();

  class  Check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Search_conditionContext *search_condition();
    Functional_dependencyContext *functional_dependency();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_conditionContext* check_condition();

  class  Functional_dependencyContext : public antlr4::ParserRuleContext {
  public:
    Functional_dependencyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DETERMINED();
    antlr4::tree::TerminalNode *BY();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Simple_column_name_listContext *> simple_column_name_list();
    Simple_column_name_listContext* simple_column_name_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Functional_dependencyContext* functional_dependency();

  class  With_optionsContext : public antlr4::ParserRuleContext {
  public:
    With_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<Column_optionsContext *> column_options();
    Column_optionsContext* column_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_optionsContext* with_options();

  class  Column_optionsContext : public antlr4::ParserRuleContext {
  public:
    Column_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    Default_clauseContext *default_clause();
    Generated_clauseContext *generated_clause();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UNIQUE();
    References_clauseContext *references_clause();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    Constraint_attributesContext *constraint_attributes();
    Lob_optionsContext *lob_options();
    antlr4::tree::TerminalNode *SCOPE();
    Typed_tableview_nameContext *typed_tableview_name();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    NumContext *num();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *WITH();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *HIDDEN_();
    antlr4::tree::TerminalNode *IMPLICITLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_optionsContext* column_options();

  class  Constraint_attributesContext : public antlr4::ParserRuleContext {
  public:
    Constraint_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENFORCED();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *TRUSTED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_attributesContext* constraint_attributes();

  class  Lob_optionsContext : public antlr4::ParserRuleContext {
  public:
    Lob_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *COMPACT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lob_optionsContext* lob_options();

  class  Typed_tableview_nameContext : public antlr4::ParserRuleContext {
  public:
    Typed_tableview_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_tableview_nameContext* typed_tableview_name();

  class  Security_label_nameContext : public antlr4::ParserRuleContext {
  public:
    Security_label_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Security_label_nameContext* security_label_name();

  class  As_result_tableContext : public antlr4::ParserRuleContext {
  public:
    As_result_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DATA();
    Simple_column_name_listContext *simple_column_name_list();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_result_tableContext* as_result_table();

  class  Refreshable_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Refreshable_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INITIALLY();
    std::vector<antlr4::tree::TerminalNode *> DEFERRED();
    antlr4::tree::TerminalNode* DEFERRED(size_t i);
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Refreshable_table_optionsContext* refreshable_table_options();

  class  Staging_table_definitionContext : public antlr4::ParserRuleContext {
  public:
    Staging_table_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    Simple_column_name_listContext *simple_column_name_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Staging_table_definitionContext* staging_table_definition();

  class  Tablespace_clausesContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    antlr4::tree::TerminalNode *CYCLE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *LONG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_clausesContext* tablespace_clauses();

  class  Tablespace_nameContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_nameContext* tablespace_name();

  class  Distribution_clauseContext : public antlr4::ParserRuleContext {
  public:
    Distribution_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Simple_column_name_listContext *simple_column_name_list();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *RANDOM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Distribution_clauseContext* distribution_clause();

  class  Partitioning_clauseContext : public antlr4::ParserRuleContext {
  public:
    Partitioning_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Range_partition_specContext *range_partition_spec();
    antlr4::tree::TerminalNode *RANGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partitioning_clauseContext* partitioning_clause();

  class  Range_partition_specContext : public antlr4::ParserRuleContext {
  public:
    Range_partition_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Partition_expressionContext *> partition_expression();
    Partition_expressionContext* partition_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Partition_elementContext *> partition_element();
    Partition_elementContext* partition_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_partition_specContext* range_partition_spec();

  class  Partition_expressionContext : public antlr4::ParserRuleContext {
  public:
    Partition_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_column_nameContext *simple_column_name();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *FIRST();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_expressionContext* partition_expression();

  class  Partition_elementContext : public antlr4::ParserRuleContext {
  public:
    Partition_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_specContext *boundary_spec();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *PARTITION();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ConstantContext *constant();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<Partition_tablespace_optionsContext *> partition_tablespace_options();
    Partition_tablespace_optionsContext* partition_tablespace_options(size_t i);
    Duration_labelContext *duration_label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_elementContext* partition_element();

  class  Add_partitionContext : public antlr4::ParserRuleContext {
  public:
    Add_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_specContext *boundary_spec();
    Partition_nameContext *partition_name();
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *LONG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_partitionContext* add_partition();

  class  Attach_partitionContext : public antlr4::ParserRuleContext {
  public:
    Attach_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_specContext *boundary_spec();
    antlr4::tree::TerminalNode *FROM();
    Table_nameContext *table_name();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *BUILD();
    antlr4::tree::TerminalNode *MISSING();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *MATCHING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attach_partitionContext* attach_partition();

  class  Duration_labelContext : public antlr4::ParserRuleContext {
  public:
    Duration_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Duration_labelContext* duration_label();

  class  Partition_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_nameContext* partition_name();

  class  Boundary_startingContext : public antlr4::ParserRuleContext {
  public:
    Boundary_startingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Boundary_elementContext *> boundary_element();
    Boundary_elementContext* boundary_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boundary_startingContext* boundary_starting();

  class  Boundary_endingContext : public antlr4::ParserRuleContext {
  public:
    Boundary_endingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Boundary_elementContext *> boundary_element();
    Boundary_elementContext* boundary_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boundary_endingContext* boundary_ending();

  class  Boundary_specContext : public antlr4::ParserRuleContext {
  public:
    Boundary_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_startingContext *boundary_starting();
    Boundary_endingContext *boundary_ending();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boundary_specContext* boundary_spec();

  class  Boundary_elementContext : public antlr4::ParserRuleContext {
  public:
    Boundary_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boundary_elementContext* boundary_element();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();
    StringContext *string();
    HexadecimalContext *hexadecimal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  Partition_tablespace_optionsContext : public antlr4::ParserRuleContext {
  public:
    Partition_tablespace_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *LONG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_tablespace_optionsContext* partition_tablespace_options();

  class  Dimensions_clauseContext : public antlr4::ParserRuleContext {
  public:
    Dimensions_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<Simple_column_name_listContext *> simple_column_name_list();
    Simple_column_name_listContext* simple_column_name_list(size_t i);
    antlr4::tree::TerminalNode *DIMESIONS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dimensions_clauseContext* dimensions_clause();

  class  Sequence_key_specContext : public antlr4::ParserRuleContext {
  public:
    Sequence_key_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Sequence_key_elementContext *> sequence_key_element();
    Sequence_key_elementContext* sequence_key_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OVERFLOW();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PCTFREE();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_key_specContext* sequence_key_spec();

  class  Sequence_key_elementContext : public antlr4::ParserRuleContext {
  public:
    Sequence_key_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_column_nameContext *simple_column_name();
    antlr4::tree::TerminalNode *ENDING();
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *FROM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_key_elementContext* sequence_key_element();

  class  Create_triggerContext : public antlr4::ParserRuleContext {
  public:
    Create_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    Trigger_eventContext *trigger_event();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    Trigger_actionContext *trigger_action();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *REFERENCING();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CASCADE();
    std::vector<Referencing_clauseContext *> referencing_clause();
    Referencing_clauseContext* referencing_clause(size_t i);
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_triggerContext* create_trigger();

  class  Trigger_actionContext : public antlr4::ParserRuleContext {
  public:
    Trigger_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Trigger_bodyContext *trigger_body();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_actionContext* trigger_action();

  class  Trigger_bodyContext : public antlr4::ParserRuleContext {
  public:
    Trigger_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    Label_declarationContext *label_declaration();
    antlr4::tree::TerminalNode *ATOMIC();
    std::vector<Sql_procedure_statementsContext *> sql_procedure_statements();
    Sql_procedure_statementsContext* sql_procedure_statements(size_t i);
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *NOT();
    Sql_procedure_statementContext *sql_procedure_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_bodyContext* trigger_body();

  class  Referencing_clauseContext : public antlr4::ParserRuleContext {
  public:
    Referencing_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OLD();
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *TABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Referencing_clauseContext* referencing_clause();

  class  Trigger_eventContext : public antlr4::ParserRuleContext {
  public:
    Trigger_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INSERT();
    antlr4::tree::TerminalNode* INSERT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DELETE();
    antlr4::tree::TerminalNode* DELETE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UPDATE();
    antlr4::tree::TerminalNode* UPDATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OF();
    antlr4::tree::TerminalNode* OF(size_t i);
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_eventContext* trigger_event();

  class  Create_typeContext : public antlr4::ParserRuleContext {
  public:
    Create_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    Type_nameContext *type_name();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    Data_type1Context *data_type1();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    Anchored_data_typeContext *anchored_data_type();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<Field_definitionContext *> field_definition();
    Field_definitionContext* field_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ARRAY();
    antlr4::tree::TerminalNode* ARRAY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode* LR_SQUARE_BRACKET(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<Data_type2Context *> data_type2();
    Data_type2Context* data_type2(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode* RR_SQUARE_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CURSOR();
    antlr4::tree::TerminalNode* CURSOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WEAK();
    antlr4::tree::TerminalNode* WEAK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRONG();
    antlr4::tree::TerminalNode* STRONG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RULES();
    antlr4::tree::TerminalNode* RULES(size_t i);
    std::vector<Data_type_constraintsContext *> data_type_constraints();
    Data_type_constraintsContext* data_type_constraints(size_t i);
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *UNDER();
    Supertype_nameContext *supertype_name();
    std::vector<Attribute_definitionContext *> attribute_definition();
    Attribute_definitionContext* attribute_definition(size_t i);
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *COMPRESSIONS();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ACCESS();
    std::vector<antlr4::tree::TerminalNode *> REF();
    antlr4::tree::TerminalNode* REF(size_t i);
    antlr4::tree::TerminalNode *USING();
    std::vector<Built_in_typeContext *> built_in_type();
    Built_in_typeContext* built_in_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CAST();
    antlr4::tree::TerminalNode* CAST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SOURCE();
    antlr4::tree::TerminalNode* SOURCE(size_t i);
    std::vector<Function_nameContext *> function_name();
    Function_nameContext* function_name(size_t i);
    std::vector<Method_specificationContext *> method_specification();
    Method_specificationContext* method_specification(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    Remote_serverContext *remote_server();
    std::vector<antlr4::tree::TerminalNode *> FROM();
    antlr4::tree::TerminalNode* FROM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TO();
    antlr4::tree::TerminalNode* TO(size_t i);
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *REMOTE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *DATA();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_typeContext* create_type();

  class  Remote_serverContext : public antlr4::ParserRuleContext {
  public:
    Remote_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *VERSION();
    StringContext *string();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remote_serverContext* remote_server();

  class  Server_nameContext : public antlr4::ParserRuleContext {
  public:
    Server_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_nameContext* server_name();

  class  Wrapper_nameContext : public antlr4::ParserRuleContext {
  public:
    Wrapper_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wrapper_nameContext* wrapper_name();

  class  Attribute_definitionContext : public antlr4::ParserRuleContext {
  public:
    Attribute_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_nameContext *attribute_name();
    Data_typeContext *data_type();
    Lob_optionsContext *lob_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_definitionContext* attribute_definition();

  class  Attribute_nameContext : public antlr4::ParserRuleContext {
  public:
    Attribute_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_nameContext* attribute_name();

  class  Method_specificationContext : public antlr4::ParserRuleContext {
  public:
    Method_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *OVERRIDING();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *SELF();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    antlr4::tree::TerminalNode *RESULT();
    Sql_routine_characteristicsContext *sql_routine_characteristics();
    External_routine_characteristicsContext *external_routine_characteristics();
    Parameter_nameContext *parameter_name();
    std::vector<antlr4::tree::TerminalNode *> LOCATOR();
    antlr4::tree::TerminalNode* LOCATOR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_specificationContext* method_specification();

  class  Sql_routinesContext : public antlr4::ParserRuleContext {
  public:
    Sql_routinesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_routinesContext* sql_routines();

  class  Sql_routine_characteristicsContext : public antlr4::ParserRuleContext {
  public:
    Sql_routine_characteristicsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    std::vector<Sql_routinesContext *> sql_routines();
    Sql_routinesContext* sql_routines(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_routine_characteristicsContext* sql_routine_characteristics();

  class  External_routine_characteristicsContext : public antlr4::ParserRuleContext {
  public:
    External_routine_characteristicsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    std::vector<antlr4::tree::TerminalNode *> PARAMETER();
    antlr4::tree::TerminalNode* PARAMETER(size_t i);
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *DB2GENERAL();
    std::vector<antlr4::tree::TerminalNode *> SQL();
    antlr4::tree::TerminalNode* SQL(size_t i);
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *THREADSAFE();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_routine_characteristicsContext* external_routine_characteristics();

  class  Field_definitionContext : public antlr4::ParserRuleContext {
  public:
    Field_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Field_nameContext *field_name();
    Data_type3Context *data_type3();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_definitionContext* field_definition();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_nameContext* field_name();

  class  Method_nameContext : public antlr4::ParserRuleContext {
  public:
    Method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_nameContext* method_name();

  class  Specific_nameContext : public antlr4::ParserRuleContext {
  public:
    Specific_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specific_nameContext* specific_name();

  class  Supertype_nameContext : public antlr4::ParserRuleContext {
  public:
    Supertype_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_nameContext *type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Supertype_nameContext* supertype_name();

  class  Data_type1Context : public antlr4::ParserRuleContext {
  public:
    Data_type1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_data_typeContext *anchored_data_type();
    Type_nameContext *type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type1Context* data_type1();

  class  Data_type2Context : public antlr4::ParserRuleContext {
  public:
    Data_type2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LR_BRACKET();
    NumContext *num();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *VARYING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *CODEUNITS32();
    Anchored_non_row_data_typeContext *anchored_non_row_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type2Context* data_type2();

  class  Data_type3Context : public antlr4::ParserRuleContext {
  public:
    Data_type3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_data_typeContext *anchored_data_type();
    Anchored_non_row_data_typeContext *anchored_non_row_data_type();
    Type_nameContext *type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type3Context* data_type3();

  class  Data_type_constraintsContext : public antlr4::ParserRuleContext {
  public:
    Data_type_constraintsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RR_BRACKET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_constraintsContext* data_type_constraints();

  class  Anchored_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Anchored_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANCHOR();
    Variable_nameContext *variable_name();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *ROW();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *OF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anchored_data_typeContext* anchored_data_type();

  class  Anchored_non_row_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Anchored_non_row_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANCHOR();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TO();
    Variable_nameContext *variable_name();
    Column_nameContext *column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anchored_non_row_data_typeContext* anchored_non_row_data_type();

  class  Variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_name_idContext *variable_name_id();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> LR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode* LR_SQUARE_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_SQUARE_BRACKET();
    antlr4::tree::TerminalNode* RR_SQUARE_BRACKET(size_t i);
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *QUESTION_MARK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_nameContext* variable_name();

  class  Data_source_nameContext : public antlr4::ParserRuleContext {
  public:
    Data_source_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_source_nameContext* data_source_name();

  class  Single_quoted_stringContext : public antlr4::ParserRuleContext {
  public:
    Single_quoted_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_quoted_stringContext* single_quoted_string();

  class  Create_viewContext : public antlr4::ParserRuleContext {
  public:
    Create_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *OF();
    Type_nameContext *type_name();
    Query_factoring_clauseContext *query_factoring_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *MOVEMENT();
    Root_view_definitionContext *root_view_definition();
    Subview_definitionContext *subview_definition();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_viewContext* create_view();

  class  Root_view_definitionContext : public antlr4::ParserRuleContext {
  public:
    Root_view_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *LR_BRACKET();
    Oid_columnContext *oid_column();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<View_elementContext *> view_element();
    View_elementContext* view_element(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Root_view_definitionContext* root_view_definition();

  class  Subview_definitionContext : public antlr4::ParserRuleContext {
  public:
    Subview_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DB2SQL();
    Under_clauseContext *under_clause();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<View_elementContext *> view_element();
    View_elementContext* view_element(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *EXTEND();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subview_definitionContext* subview_definition();

  class  Oid_columnContext : public antlr4::ParserRuleContext {
  public:
    Oid_columnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *IS();
    Oid_column_nameContext *oid_column_name();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *UNCHECKED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oid_columnContext* oid_column();

  class  View_elementContext : public antlr4::ParserRuleContext {
  public:
    View_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTIONS();
    std::vector<View_column_optionsContext *> view_column_options();
    View_column_optionsContext* view_column_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_elementContext* view_element();

  class  View_column_optionsContext : public antlr4::ParserRuleContext {
  public:
    View_column_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCOPE();
    Typed_tableview_nameContext *typed_tableview_name();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_column_optionsContext* view_column_options();

  class  Oid_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Oid_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oid_column_nameContext* oid_column_name();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<QueryContext *> query();
    QueryContext* query(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    Select_expressionContext *select_expression();
    Values_expressionContext *values_expression();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();
  QueryContext* query(int precedence);
  class  Select_expressionContext : public antlr4::ParserRuleContext {
  public:
    Select_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    std::vector<Select_itemContext *> select_item();
    Select_itemContext* select_item(size_t i);
    From_clauseContext *from_clause();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Into_clauseContext *into_clause();
    Where_clauseContext *where_clause();
    Group_by_clauseContext *group_by_clause();
    Having_clauseContext *having_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_expressionContext* select_expression();

  class  Into_clauseContext : public antlr4::ParserRuleContext {
  public:
    Into_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTO();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Into_clauseContext* into_clause();

  class  Select_itemContext : public antlr4::ParserRuleContext {
  public:
    Select_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Simple_column_nameContext *simple_column_name();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_itemContext* select_item();

  class  Simple_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Simple_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_column_nameContext* simple_column_name();

  class  Definition_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Definition_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Definition_column_name_idContext *definition_column_name_id();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_column_nameContext* definition_column_name();

  class  Drop_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Drop_aliasContext *drop_alias();
    Drop_audit_policyContext *drop_audit_policy();
    Drop_bufferpoolContext *drop_bufferpool();
    Drop_database_partition_groupContext *drop_database_partition_group();
    Drop_event_monitorContext *drop_event_monitor();
    Drop_functionContext *drop_function();
    Drop_function_mappingContext *drop_function_mapping();
    Drop_histogram_templateContext *drop_histogram_template();
    Drop_indexContext *drop_index();
    Drop_index_extensionContext *drop_index_extension();
    Drop_maskContext *drop_mask();
    Drop_methodContext *drop_method();
    Drop_moduleContext *drop_module();
    Drop_nicknameContext *drop_nickname();
    Drop_packageContext *drop_package();
    Drop_permissionContext *drop_permission();
    Drop_procedureContext *drop_procedure();
    Drop_roleContext *drop_role();
    Drop_schemaContext *drop_schema();
    Drop_security_labelContext *drop_security_label();
    Drop_security_policyContext *drop_security_policy();
    Drop_sequenceContext *drop_sequence();
    Drop_serverContext *drop_server();
    Drop_service_classContext *drop_service_class();
    Drop_stogroupContext *drop_stogroup();
    Drop_tableContext *drop_table();
    Drop_table_hierarchyContext *drop_table_hierarchy();
    Drop_tablespaceContext *drop_tablespace();
    Drop_transformContext *drop_transform();
    Drop_thresholdContext *drop_threshold();
    Drop_triggerContext *drop_trigger();
    Drop_trusted_contextContext *drop_trusted_context();
    Drop_typeContext *drop_type();
    Drop_type_mappingContext *drop_type_mapping();
    Drop_usage_listContext *drop_usage_list();
    Drop_user_mappingContext *drop_user_mapping();
    Drop_variableContext *drop_variable();
    Drop_viewContext *drop_view();
    Drop_view_hierarchyContext *drop_view_hierarchy();
    Drop_work_action_setContext *drop_work_action_set();
    Drop_work_class_setContext *drop_work_class_set();
    Drop_workloadContext *drop_workload();
    Drop_wrapperContext *drop_wrapper();
    Drop_xsrobjectContext *drop_xsrobject();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_statementContext* drop_statement();

  class  Drop_aliasContext : public antlr4::ParserRuleContext {
  public:
    Drop_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Alias_designatorContext *alias_designator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_aliasContext* drop_alias();

  class  Drop_audit_policyContext : public antlr4::ParserRuleContext {
  public:
    Drop_audit_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_audit_policyContext* drop_audit_policy();

  class  Drop_bufferpoolContext : public antlr4::ParserRuleContext {
  public:
    Drop_bufferpoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_bufferpoolContext* drop_bufferpool();

  class  Drop_database_partition_groupContext : public antlr4::ParserRuleContext {
  public:
    Drop_database_partition_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Partition_nameContext *partition_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_database_partition_groupContext* drop_database_partition_group();

  class  Drop_event_monitorContext : public antlr4::ParserRuleContext {
  public:
    Drop_event_monitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Monitor_nameContext *monitor_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_event_monitorContext* drop_event_monitor();

  class  Drop_functionContext : public antlr4::ParserRuleContext {
  public:
    Drop_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_functionContext* drop_function();

  class  Drop_function_mappingContext : public antlr4::ParserRuleContext {
  public:
    Drop_function_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MAPPING();
    Function_mapping_nameContext *function_mapping_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_function_mappingContext* drop_function_mapping();

  class  Drop_histogram_templateContext : public antlr4::ParserRuleContext {
  public:
    Drop_histogram_templateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_histogram_templateContext* drop_histogram_template();

  class  Drop_indexContext : public antlr4::ParserRuleContext {
  public:
    Drop_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_indexContext* drop_index();

  class  Drop_index_extensionContext : public antlr4::ParserRuleContext {
  public:
    Drop_index_extensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *EXTENSION();
    Index_extention_nameContext *index_extention_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_index_extensionContext* drop_index_extension();

  class  Drop_maskContext : public antlr4::ParserRuleContext {
  public:
    Drop_maskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *MASK();
    Mask_nameContext *mask_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_maskContext* drop_mask();

  class  Drop_methodContext : public antlr4::ParserRuleContext {
  public:
    Drop_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Alter_method_designatorContext *alter_method_designator();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_methodContext* drop_method();

  class  Drop_moduleContext : public antlr4::ParserRuleContext {
  public:
    Drop_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *MODULE_();
    Module_nameContext *module_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_moduleContext* drop_module();

  class  Drop_nicknameContext : public antlr4::ParserRuleContext {
  public:
    Drop_nicknameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *NICKNAME();
    NicknameContext *nickname();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_nicknameContext* drop_nickname();

  class  Drop_packageContext : public antlr4::ParserRuleContext {
  public:
    Drop_packageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    StringContext *string();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    antlr4::tree::TerminalNode *VERSION();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_packageContext* drop_package();

  class  Drop_permissionContext : public antlr4::ParserRuleContext {
  public:
    Drop_permissionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_permissionContext* drop_permission();

  class  Drop_procedureContext : public antlr4::ParserRuleContext {
  public:
    Drop_procedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_procedureContext* drop_procedure();

  class  Drop_roleContext : public antlr4::ParserRuleContext {
  public:
    Drop_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_roleContext* drop_role();

  class  Drop_schemaContext : public antlr4::ParserRuleContext {
  public:
    Drop_schemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_schemaContext* drop_schema();

  class  Drop_security_labelContext : public antlr4::ParserRuleContext {
  public:
    Drop_security_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Label_nameContext *label_name();
    antlr4::tree::TerminalNode *COMPONENT();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_security_labelContext* drop_security_label();

  class  Drop_security_policyContext : public antlr4::ParserRuleContext {
  public:
    Drop_security_policyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_security_policyContext* drop_security_policy();

  class  Drop_sequenceContext : public antlr4::ParserRuleContext {
  public:
    Drop_sequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_sequenceContext* drop_sequence();

  class  Drop_serverContext : public antlr4::ParserRuleContext {
  public:
    Drop_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_serverContext* drop_server();

  class  Drop_service_classContext : public antlr4::ParserRuleContext {
  public:
    Drop_service_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Service_class_designatorContext *service_class_designator();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_service_classContext* drop_service_class();

  class  Drop_stogroupContext : public antlr4::ParserRuleContext {
  public:
    Drop_stogroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *STOGROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_stogroupContext* drop_stogroup();

  class  Drop_synonymContext : public antlr4::ParserRuleContext {
  public:
    Drop_synonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *SYNONYM();
    Synonym_nameContext *synonym_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_synonymContext* drop_synonym();

  class  Drop_tableContext : public antlr4::ParserRuleContext {
  public:
    Drop_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tableContext* drop_table();

  class  Drop_table_hierarchyContext : public antlr4::ParserRuleContext {
  public:
    Drop_table_hierarchyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *HIERARCHY();
    Table_nameContext *table_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_table_hierarchyContext* drop_table_hierarchy();

  class  Drop_tablespaceContext : public antlr4::ParserRuleContext {
  public:
    Drop_tablespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_tablespaceContext* drop_tablespace();

  class  Drop_transformContext : public antlr4::ParserRuleContext {
  public:
    Drop_transformContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *ALL();
    Group_nameContext *group_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_transformContext* drop_transform();

  class  Drop_thresholdContext : public antlr4::ParserRuleContext {
  public:
    Drop_thresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_thresholdContext* drop_threshold();

  class  Drop_triggerContext : public antlr4::ParserRuleContext {
  public:
    Drop_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_triggerContext* drop_trigger();

  class  Drop_trusted_contextContext : public antlr4::ParserRuleContext {
  public:
    Drop_trusted_contextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_trusted_contextContext* drop_trusted_context();

  class  Drop_typeContext : public antlr4::ParserRuleContext {
  public:
    Drop_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_typeContext* drop_type();

  class  Drop_type_mappingContext : public antlr4::ParserRuleContext {
  public:
    Drop_type_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *MAPPING();
    Type_nameContext *type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_type_mappingContext* drop_type_mapping();

  class  Drop_usage_listContext : public antlr4::ParserRuleContext {
  public:
    Drop_usage_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    List_nameContext *list_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_usage_listContext* drop_usage_list();

  class  Drop_user_mappingContext : public antlr4::ParserRuleContext {
  public:
    Drop_user_mappingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    User_nameContext *user_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_user_mappingContext* drop_user_mapping();

  class  Drop_variableContext : public antlr4::ParserRuleContext {
  public:
    Drop_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_variableContext* drop_variable();

  class  Drop_viewContext : public antlr4::ParserRuleContext {
  public:
    Drop_viewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_viewContext* drop_view();

  class  Drop_view_hierarchyContext : public antlr4::ParserRuleContext {
  public:
    Drop_view_hierarchyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *HIERARCHY();
    View_nameContext *view_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_view_hierarchyContext* drop_view_hierarchy();

  class  Drop_work_action_setContext : public antlr4::ParserRuleContext {
  public:
    Drop_work_action_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SET();
    Action_set_nameContext *action_set_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_work_action_setContext* drop_work_action_set();

  class  Drop_work_class_setContext : public antlr4::ParserRuleContext {
  public:
    Drop_work_class_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *SET();
    Class_set_nameContext *class_set_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_work_class_setContext* drop_work_class_set();

  class  Drop_workloadContext : public antlr4::ParserRuleContext {
  public:
    Drop_workloadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_workloadContext* drop_workload();

  class  Drop_wrapperContext : public antlr4::ParserRuleContext {
  public:
    Drop_wrapperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_wrapperContext* drop_wrapper();

  class  Drop_xsrobjectContext : public antlr4::ParserRuleContext {
  public:
    Drop_xsrobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_xsrobjectContext* drop_xsrobject();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  HexadecimalContext : public antlr4::ParserRuleContext {
  public:
    HexadecimalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HEX_STRING_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HexadecimalContext* hexadecimal();

  class  Threshold_nameContext : public antlr4::ParserRuleContext {
  public:
    Threshold_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_nameContext* threshold_name();

  class  Profile_nameContext : public antlr4::ParserRuleContext {
  public:
    Profile_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Profile_nameContext* profile_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_nameContext* schema_name();

  class  Role_nameContext : public antlr4::ParserRuleContext {
  public:
    Role_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_nameContext* role_name();

  class  Label_nameContext : public antlr4::ParserRuleContext {
  public:
    Label_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Label_nameContext* label_name();

  class  Xsrobject_nameContext : public antlr4::ParserRuleContext {
  public:
    Xsrobject_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xsrobject_nameContext* xsrobject_name();

  class  Aggregate_nameContext : public antlr4::ParserRuleContext {
  public:
    Aggregate_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregate_nameContext* aggregate_name();

  class  Constraint_nameContext : public antlr4::ParserRuleContext {
  public:
    Constraint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_nameContext* constraint_name();

  class  Partition_group_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_group_nameContext* partition_group_name();

  class  Function_mapping_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_mapping_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_mapping_nameContext* function_mapping_name();

  class  Template_nameContext : public antlr4::ParserRuleContext {
  public:
    Template_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Template_nameContext* template_name();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_nameContext* column_name();

  class  Mask_nameContext : public antlr4::ParserRuleContext {
  public:
    Mask_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mask_nameContext* mask_name();

  class  Module_nameContext : public antlr4::ParserRuleContext {
  public:
    Module_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_nameContext* module_name();

  class  NicknameContext : public antlr4::ParserRuleContext {
  public:
    NicknameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NicknameContext* nickname();

  class  Package_nameContext : public antlr4::ParserRuleContext {
  public:
    Package_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_nameContext* package_name();

  class  Permission_nameContext : public antlr4::ParserRuleContext {
  public:
    Permission_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Permission_nameContext* permission_name();

  class  Correlation_nameContext : public antlr4::ParserRuleContext {
  public:
    Correlation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Correlation_nameContext* correlation_name();

  class  Group_nameContext : public antlr4::ParserRuleContext {
  public:
    Group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_nameContext* group_name();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Call_function_nameContext : public antlr4::ParserRuleContext {
  public:
    Call_function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_name_idContext *function_name_id();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_function_nameContext* call_function_name();

  class  Function_name_idContext : public antlr4::ParserRuleContext {
  public:
    Function_name_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    Function_name_keywordContext *function_name_keyword();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_name_idContext* function_name_id();

  class  Index_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_nameContext* index_name();

  class  Procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    Procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_nameContext* procedure_name();

  class  Parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_nameContext* parameter_name();

  class  Sequence_nameContext : public antlr4::ParserRuleContext {
  public:
    Sequence_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_nameContext* sequence_name();

  class  Synonym_nameContext : public antlr4::ParserRuleContext {
  public:
    Synonym_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Synonym_nameContext* synonym_name();

  class  Trigger_nameContext : public antlr4::ParserRuleContext {
  public:
    Trigger_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_nameContext* trigger_name();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_name_idContext *type_name_id();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

  class  User_nameContext : public antlr4::ParserRuleContext {
  public:
    User_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_nameContext* user_name();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_nameContext* view_name();

  class  Cursor_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_nameContext* cursor_name();

  class  Interval_typeContext : public antlr4::ParserRuleContext {
  public:
    Interval_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *MONTHS();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *SECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_typeContext* interval_type();

  class  Type_name_idContext : public antlr4::ParserRuleContext {
  public:
    Type_name_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    Type_name_keywordContext *type_name_keyword();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_name_idContext* type_name_id();

  class  Variable_name_idContext : public antlr4::ParserRuleContext {
  public:
    Variable_name_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    Variable_name_keywordContext *variable_name_keyword();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_name_idContext* variable_name_id();

  class  Definition_column_name_idContext : public antlr4::ParserRuleContext {
  public:
    Definition_column_name_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    Definition_column_name_keywordContext *definition_column_name_keyword();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Definition_column_name_idContext* definition_column_name_id();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_ID();
    KeywordContext *keyword();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_Context* id_();

  class  NumContext : public antlr4::ParserRuleContext {
  public:
    NumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumContext* num();

  class  Float_literalContext : public antlr4::ParserRuleContext {
  public:
    Float_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Float_literalContext* float_literal();

  class  ExpressionsContext : public antlr4::ParserRuleContext {
  public:
    ExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionsContext* expressions();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *op = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primitive_expressionContext *primitive_expression();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    Table_subqueryContext *table_subquery();
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    Case_expressionContext *case_expression();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *FOR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *PIPE_PIPE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Primitive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Primitive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    Special_registerContext *special_register();
    LiteralContext *literal();
    Interval_typeContext *interval_type();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *STAR();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *QUESTION_MARK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primitive_expressionContext* primitive_expression();

  class  Table_function_callContext : public antlr4::ParserRuleContext {
  public:
    Table_function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASE_TABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *UNNEST();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ORDINALITY();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *CARDINALITY();
    NumContext *num();
    antlr4::tree::TerminalNode *MULTIPLIER();
    Json_table_clauseContext *json_table_clause();
    Xml_table_clauseContext *xml_table_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_function_callContext* table_function_call();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY_AGG();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    ExpressionsContext *expressions();
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();
    Order_by_clauseContext *order_by_clause();
    antlr4::tree::TerminalNode *AVG();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    All_distinctContext *all_distinct();
    antlr4::tree::TerminalNode *CAST();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    Built_in_typeContext *built_in_type();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *COUNT_BIG();
    antlr4::tree::TerminalNode *CUME_DIST();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *CHAR_LENGTH();
    antlr4::tree::TerminalNode *CHARACTER_LENGTH();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> USING();
    antlr4::tree::TerminalNode* USING(size_t i);
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *EXTRACT();
    Extract_datetime_valueContext *extract_datetime_value();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *LISTAGG();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *MIN();
    antlr4::tree::TerminalNode *PERCENTILE_CONT();
    antlr4::tree::TerminalNode *PERCENTILE_DISC();
    antlr4::tree::TerminalNode *PERCENT_RANK();
    antlr4::tree::TerminalNode *STDDEV();
    antlr4::tree::TerminalNode *STDDEV_SAMP();
    antlr4::tree::TerminalNode *SUM();
    antlr4::tree::TerminalNode *VARIANCE();
    antlr4::tree::TerminalNode *VARIANCE_SAMP();
    antlr4::tree::TerminalNode *XMLAGG();
    Xml_expressionContext *xml_expression();
    antlr4::tree::TerminalNode *XMLGROUP();
    antlr4::tree::TerminalNode *OPTION();
    std::vector<antlr4::tree::TerminalNode *> ROW();
    antlr4::tree::TerminalNode* ROW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROOT();
    antlr4::tree::TerminalNode* ROOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ATTRIBUTES();
    antlr4::tree::TerminalNode* ATTRIBUTES(size_t i);
    antlr4::tree::TerminalNode *JSON_ARRAY();
    std::vector<Json_array_elementContext *> json_array_element();
    Json_array_elementContext* json_array_element(size_t i);
    QueryContext *query();
    Json_on_null_clauseContext *json_on_null_clause();
    Json_return_clauseContext *json_return_clause();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *JSON_OBJECT();
    Json_object_contentContext *json_object_content();
    antlr4::tree::TerminalNode *JSON_QUERY();
    Json_query_wrapper_clauseContext *json_query_wrapper_clause();
    Json_query_quotes_clauseContext *json_query_quotes_clause();
    Json_query_on_empty_clauseContext *json_query_on_empty_clause();
    Json_query_on_error_clauseContext *json_query_on_error_clause();
    antlr4::tree::TerminalNode *JSON_VALUE();
    Json_value_on_empty_clauseContext *json_value_on_empty_clause();
    Json_value_on_error_clauseContext *json_value_on_error_clause();
    antlr4::tree::TerminalNode *OVERLAY();
    antlr4::tree::TerminalNode *PLACING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *TRIM();
    Strip_charContext *strip_char();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *B();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *UNICODE_STR();
    antlr4::tree::TerminalNode *UTF8();
    antlr4::tree::TerminalNode *UTF16();
    antlr4::tree::TerminalNode *XMLATTRIBUTES();
    std::vector<Correlation_nameContext *> correlation_name();
    Correlation_nameContext* correlation_name(size_t i);
    antlr4::tree::TerminalNode *XMLELEMENT();
    antlr4::tree::TerminalNode *NAME();
    std::vector<Xml_element_nameContext *> xml_element_name();
    Xml_element_nameContext* xml_element_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EMPTY();
    antlr4::tree::TerminalNode* EMPTY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> XMLBINARY();
    antlr4::tree::TerminalNode* XMLBINARY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE64();
    antlr4::tree::TerminalNode* BASE64(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HEX();
    antlr4::tree::TerminalNode* HEX(size_t i);
    antlr4::tree::TerminalNode *XMLFOREST();
    Xmlnamespaces_declarationContext *xmlnamespaces_declaration();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *XMLPARSE();
    antlr4::tree::TerminalNode *DOCUMENT();
    antlr4::tree::TerminalNode *WHITESPACE();
    antlr4::tree::TerminalNode *STRIP();
    antlr4::tree::TerminalNode *PRESERVE();
    antlr4::tree::TerminalNode *XMLPI();
    antlr4::tree::TerminalNode *XMLQUERY();
    antlr4::tree::TerminalNode *PASSING();
    std::vector<Xquery_argumentContext *> xquery_argument();
    Xquery_argumentContext* xquery_argument(size_t i);
    antlr4::tree::TerminalNode *RETURNING();
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REF();
    antlr4::tree::TerminalNode* REF(size_t i);
    antlr4::tree::TerminalNode *XMLROW();
    antlr4::tree::TerminalNode *XMLSERIALIZE();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *CONTENT();
    std::vector<antlr4::tree::TerminalNode *> VERSION();
    antlr4::tree::TerminalNode* VERSION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> XMLDECLARATION();
    antlr4::tree::TerminalNode* XMLDECLARATION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCLUDING();
    antlr4::tree::TerminalNode* EXCLUDING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INCLUDING();
    antlr4::tree::TerminalNode* INCLUDING(size_t i);
    antlr4::tree::TerminalNode *XMLVALIDATE();
    Xml_validate_according_to_clauseContext *xml_validate_according_to_clause();
    antlr4::tree::TerminalNode *XSLTRANSFORM();
    antlr4::tree::TerminalNode *WITH();
    Call_function_nameContext *call_function_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Json_table_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_table_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JSON_TABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COMMA();
    StringContext *string();
    Json_column_clauseContext *json_column_clause();
    std::vector<antlr4::tree::TerminalNode *> ERROR();
    antlr4::tree::TerminalNode* ERROR(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *BSON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_table_clauseContext* json_table_clause();

  class  Json_column_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_column_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Json_column_definitionContext *> json_column_definition();
    Json_column_definitionContext* json_column_definition(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_column_clauseContext* json_column_clause();

  class  Json_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Json_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *PATH();
    ExpressionContext *expression();
    Json_value_on_empty_clauseContext *json_value_on_empty_clause();
    Json_value_on_error_clauseContext *json_value_on_error_clause();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *JSON();
    Json_query_wrapper_clauseContext *json_query_wrapper_clause();
    Json_query_quotes_clauseContext *json_query_quotes_clause();
    Json_query_on_empty_clauseContext *json_query_on_empty_clause();
    Json_query_on_error_clauseContext *json_query_on_error_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_column_definitionContext* json_column_definition();

  class  Json_object_contentContext : public antlr4::ParserRuleContext {
  public:
    Json_object_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Json_object_entryContext *> json_object_entry();
    Json_object_entryContext* json_object_entry(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Json_on_null_clauseContext *json_on_null_clause();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *KEYS();
    Json_return_clauseContext *json_return_clause();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_object_contentContext* json_object_content();

  class  Json_object_entryContext : public antlr4::ParserRuleContext {
  public:
    Json_object_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *BSON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_object_entryContext* json_object_entry();

  class  Json_array_elementContext : public antlr4::ParserRuleContext {
  public:
    Json_array_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *BSON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_array_elementContext* json_array_element();

  class  Json_query_wrapper_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_query_wrapper_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WRAPPER();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *UNCONDITIONAL();
    antlr4::tree::TerminalNode *CONDITIONAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_query_wrapper_clauseContext* json_query_wrapper_clause();

  class  Json_query_quotes_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_query_quotes_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTES();
    antlr4::tree::TerminalNode *KEEP();
    antlr4::tree::TerminalNode *OMIT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SCALAR();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_query_quotes_clauseContext* json_query_quotes_clause();

  class  Json_query_on_error_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_query_on_error_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> ERROR();
    antlr4::tree::TerminalNode* ERROR(size_t i);
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *OBJECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_query_on_error_clauseContext* json_query_on_error_clause();

  class  Json_query_on_empty_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_query_on_empty_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> EMPTY();
    antlr4::tree::TerminalNode* EMPTY(size_t i);
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *OBJECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_query_on_empty_clauseContext* json_query_on_empty_clause();

  class  Json_value_on_empty_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_value_on_empty_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFAULT();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_value_on_empty_clauseContext* json_value_on_empty_clause();

  class  Json_value_on_error_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_value_on_error_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> ERROR();
    antlr4::tree::TerminalNode* ERROR(size_t i);
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFAULT();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_value_on_error_clauseContext* json_value_on_error_clause();

  class  Json_on_null_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_on_null_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *ABSENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_on_null_clauseContext* json_on_null_clause();

  class  Json_return_clauseContext : public antlr4::ParserRuleContext {
  public:
    Json_return_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNING();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *ENCODING();
    antlr4::tree::TerminalNode *UTF8();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Json_return_clauseContext* json_return_clause();

  class  Xml_table_clauseContext : public antlr4::ParserRuleContext {
  public:
    Xml_table_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XMLTABLE();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Id_Context *id_();
    antlr4::tree::TerminalNode *DOT();
    Xmlnamespaces_declarationContext *xmlnamespaces_declaration();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *PASSING();
    std::vector<Xquery_argumentContext *> xquery_argument();
    Xquery_argumentContext* xquery_argument(size_t i);
    antlr4::tree::TerminalNode *COLUMNS();
    std::vector<Xml_table_column_definitionContext *> xml_table_column_definition();
    Xml_table_column_definitionContext* xml_table_column_definition(size_t i);
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *REF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_table_clauseContext* xml_table_clause();

  class  Xml_table_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Xml_table_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *REF();
    Default_clauseContext *default_clause();
    antlr4::tree::TerminalNode *PATH();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ORDINALITY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_table_column_definitionContext* xml_table_column_definition();

  class  Xquery_argumentContext : public antlr4::ParserRuleContext {
  public:
    Xquery_argumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    Id_Context *id_();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *REF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xquery_argumentContext* xquery_argument();

  class  Xmlnamespaces_declarationContext : public antlr4::ParserRuleContext {
  public:
    Xmlnamespaces_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    antlr4::tree::TerminalNode *XMLNAMESPACES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    std::vector<Correlation_nameContext *> correlation_name();
    Correlation_nameContext* correlation_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    antlr4::tree::TerminalNode *DOT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmlnamespaces_declarationContext* xmlnamespaces_declaration();

  class  Element_content_expressionContext : public antlr4::ParserRuleContext {
  public:
    Element_content_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_content_expressionContext* element_content_expression();

  class  Strip_charContext : public antlr4::ParserRuleContext {
  public:
    Strip_charContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Strip_charContext* strip_char();

  class  Extract_datetime_valueContext : public antlr4::ParserRuleContext {
  public:
    Extract_datetime_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EPOCH();
    antlr4::tree::TerminalNode *MILLENNIUM();
    antlr4::tree::TerminalNode *MILLENNIUMS();
    antlr4::tree::TerminalNode *CENTURY();
    antlr4::tree::TerminalNode *CENTURIES();
    antlr4::tree::TerminalNode *DECADE();
    antlr4::tree::TerminalNode *DECADES();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *DOW();
    antlr4::tree::TerminalNode *DOY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MILLISECOND();
    antlr4::tree::TerminalNode *MILLISECONDS();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extract_datetime_valueContext* extract_datetime_value();

  class  Xml_expressionContext : public antlr4::ParserRuleContext {
  public:
    Xml_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_expressionContext* xml_expression();

  class  Xml_validate_according_to_clauseContext : public antlr4::ParserRuleContext {
  public:
    Xml_validate_according_to_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    antlr4::tree::TerminalNode *ID_();
    Xml_schema_nameContext *xml_schema_name();
    antlr4::tree::TerminalNode *ELEMENT();
    Xml_element_nameContext *xml_element_name();
    antlr4::tree::TerminalNode *URI();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NAMESPACE();
    antlr4::tree::TerminalNode* NAMESPACE(size_t i);
    antlr4::tree::TerminalNode *LOCATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_validate_according_to_clauseContext* xml_validate_according_to_clause();

  class  Xml_schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Xml_schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_schema_nameContext* xml_schema_name();

  class  Xml_element_nameContext : public antlr4::ParserRuleContext {
  public:
    Xml_element_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_element_nameContext* xml_element_name();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    HexadecimalContext *hexadecimal();
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    SignContext *sign();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Searched_caseContext *searched_case();
    Extended_caseContext *extended_case();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_expressionContext* case_expression();

  class  Searched_caseContext : public antlr4::ParserRuleContext {
  public:
    Searched_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Searched_caseContext* searched_case();

  class  Extended_caseContext : public antlr4::ParserRuleContext {
  public:
    Extended_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<When_operandContext *> when_operand();
    When_operandContext* when_operand(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extended_caseContext* extended_case();

  class  When_operandContext : public antlr4::ParserRuleContext {
  public:
    When_operandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LIKE();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *IN();
    Table_subqueryContext *table_subquery();
    antlr4::tree::TerminalNode *LR_BRACKET();
    ExpressionsContext *expressions();
    antlr4::tree::TerminalNode *RR_BRACKET();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *SOME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  When_operandContext* when_operand();

  class  Select_only_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_only_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    Query_factoring_clauseContext *query_factoring_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_only_statementContext* select_only_statement();

  class  Query_factoring_clauseContext : public antlr4::ParserRuleContext {
  public:
    Query_factoring_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<Factoring_elementContext *> factoring_element();
    Factoring_elementContext* factoring_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_factoring_clauseContext* query_factoring_clause();

  class  Factoring_elementContext : public antlr4::ParserRuleContext {
  public:
    Factoring_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_nameContext *query_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    QueryContext *query();
    antlr4::tree::TerminalNode *RR_BRACKET();
    Column_listContext *column_list();
    Order_by_clauseContext *order_by_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Factoring_elementContext* factoring_element();

  class  Query_nameContext : public antlr4::ParserRuleContext {
  public:
    Query_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Query_nameContext* query_name();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_only_statementContext *select_only_statement();
    For_update_clauseContext *for_update_clause();
    Optimize_for_clauseContext *optimize_for_clause();
    Isolation_clauseContext *isolation_clause();
    Concurrent_access_resolution_clauseContext *concurrent_access_resolution_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statementContext* select_statement();

  class  For_update_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_update_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OF();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_update_clauseContext* for_update_clause();

  class  Isolation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Isolation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *UR();
    Lock_request_clauseContext *lock_request_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Isolation_clauseContext* isolation_clause();

  class  Lock_request_clauseContext : public antlr4::ParserRuleContext {
  public:
    Lock_request_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *KEEP();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *EXCLUSIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_request_clauseContext* lock_request_clause();

  class  Optimize_for_clauseContext : public antlr4::ParserRuleContext {
  public:
    Optimize_for_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *FOR();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optimize_for_clauseContext* optimize_for_clause();

  class  Concurrent_access_resolution_clauseContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_access_resolution_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NOWAIT();
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_access_resolution_clauseContext* concurrent_access_resolution_clause();

  class  All_distinctContext : public antlr4::ParserRuleContext {
  public:
    All_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_distinctContext* all_distinct();

  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    std::vector<Table_referenceContext *> table_reference();
    Table_referenceContext* table_reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_clauseContext* from_clause();

  class  Table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    std::vector<Period_specificationContext *> period_specification();
    Period_specificationContext* period_specification(size_t i);
    Correlation_clauseContext *correlation_clause();
    Tablesample_clauseContext *tablesample_clause();
    antlr4::tree::TerminalNode *ANALYZE_TABLE();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    StringContext *string();
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    Table_function_callContext *table_function_call();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *ONLY();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *UNTIL();
    std::vector<Federated_specific_condition_valueContext *> federated_specific_condition_value();
    Federated_specific_condition_valueContext* federated_specific_condition_value(size_t i);
    antlr4::tree::TerminalNode *WITHIN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *EXTERNAL();
    File_nameContext *file_name();
    antlr4::tree::TerminalNode *USING();
    Correlation_nameContext *correlation_name();
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    std::vector<Option_nameContext *> option_name();
    Option_nameContext* option_name(size_t i);
    std::vector<Option_valueContext *> option_value();
    Option_valueContext* option_value(size_t i);
    antlr4::tree::TerminalNode *AS();
    std::vector<Table_referenceContext *> table_reference();
    Table_referenceContext* table_reference(size_t i);
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *ON();
    Boolean_expressionContext *boolean_expression();
    Using_clauseContext *using_clause();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_referenceContext* table_reference();
  Table_referenceContext* table_reference(int precedence);
  class  Federated_specific_condition_valueContext : public antlr4::ParserRuleContext {
  public:
    Federated_specific_condition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *SQLSTATE();
    StringContext *string();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *SQLCODE();
    std::vector<NumContext *> num();
    NumContext* num(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Federated_specific_condition_valueContext* federated_specific_condition_value();

  class  Tablesample_clauseContext : public antlr4::ParserRuleContext {
  public:
    Tablesample_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESAMPLE();
    std::vector<antlr4::tree::TerminalNode *> LR_BRACKET();
    antlr4::tree::TerminalNode* LR_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RR_BRACKET();
    antlr4::tree::TerminalNode* RR_BRACKET(size_t i);
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *REPEATABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablesample_clauseContext* tablesample_clause();

  class  Period_specificationContext : public antlr4::ParserRuleContext {
  public:
    Period_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *OF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BETWEEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_specificationContext* period_specification();

  class  Using_clauseContext : public antlr4::ParserRuleContext {
  public:
    Using_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Using_clauseContext* using_clause();

  class  Correlation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Correlation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<Simple_column_nameContext *> simple_column_name();
    Simple_column_nameContext* simple_column_name(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Correlation_clauseContext* correlation_clause();

  class  Group_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Group_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *LR_BRACKET();
    antlr4::tree::TerminalNode *RR_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_clauseContext* group_by_clause();

  class  Having_clauseContext : public antlr4::ParserRuleContext {
  public:
    Having_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    Boolean_expressionContext *boolean_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Having_clauseContext* having_clause();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<Order_by_itemContext *> order_by_item();
    Order_by_itemContext* order_by_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Order_by_itemContext : public antlr4::ParserRuleContext {
  public:
    Order_by_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Asc_descContext *asc_desc();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_itemContext* order_by_item();

  class  Asc_descContext : public antlr4::ParserRuleContext {
  public:
    Asc_descContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *RANDOM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asc_descContext* asc_desc();

  class  ColumnPositionContext : public antlr4::ParserRuleContext {
  public:
    ColumnPositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumContext *num();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnPositionContext* columnPosition();

  class  Values_expressionContext : public antlr4::ParserRuleContext {
  public:
    Values_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *LR_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RR_BRACKET();
    ExpressionsContext *expressions();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_expressionContext* values_expression();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool search_conditionSempred(Search_conditionContext *_localctx, size_t predicateIndex);
  bool boolean_expressionSempred(Boolean_expressionContext *_localctx, size_t predicateIndex);
  bool event_expression2Sempred(Event_expression2Context *_localctx, size_t predicateIndex);
  bool event_expressionSempred(Event_expressionContext *_localctx, size_t predicateIndex);
  bool querySempred(QueryContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool table_referenceSempred(Table_referenceContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpp_wv_db2
