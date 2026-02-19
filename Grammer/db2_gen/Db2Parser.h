
// Generated from Db2Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpp_db2 {


class  Db2Parser : public antlr4::Parser {
public:
  enum {
    ACCESS = 1, ACCESSCTRL = 2, ACCESSTOKEN = 3, ACCESSTOKENTYPE = 4, ACCORDING = 5, 
    ACCUMULATE = 6, ACTION = 7, ACTIVATE = 8, ACTIVE = 9, ACTIVITIES = 10, 
    ACTIVITY = 11, ACTIVITYTOTALRUNTIME = 12, ACTIVITYTOTALRUNTIMEINALLSC = 13, 
    ACTIVITYTOTALTIME = 14, ACTUALS = 15, ADAPTIVE = 16, ADC = 17, ADD = 18, 
    ADDRESS = 19, ADMIN = 20, ADMISSION = 21, AFTER = 22, AGE = 23, AGGREGATE = 24, 
    AGGSQLTEMPSPACE = 25, ALIAS = 26, ALL = 27, ALLOCATE = 28, ALLOW = 29, 
    ALTER = 30, ALTERIN = 31, ALWAYS = 32, ANALYZE = 33, ANCHOR = 34, AND = 35, 
    ANY = 36, APIKEY = 37, APPEND = 38, APPLICATION = 39, APPLNAME = 40, 
    ARRAY = 41, ARRAY_EXISTS = 42, AS = 43, ASC = 44, ASCII = 45, ASENSITIVE = 46, 
    ASSOCIATE = 47, ASYNCHRONY = 48, AT = 49, ATOMIC = 50, ATTACH = 51, 
    ATTRIBUTE = 52, ATTRIBUTES = 53, AUDIT = 54, AUTHENTICATION = 55, AUTHID = 56, 
    AUTHORIZATION = 57, AUTHORIZATIONS = 58, AUTHORIZED = 59, AUTOMATIC = 60, 
    AUTONOMOUS = 61, AUTORESIZE = 62, AUTOSTART = 63, BACKUP = 64, BASE = 65, 
    BATCH = 66, BEFORE = 67, BEGIN = 68, BERNOULLI = 69, BETWEEN = 70, BIGINT = 71, 
    BIN = 72, BINARY = 73, BIND = 74, BINDADD = 75, BIT = 76, BLOB = 77, 
    BLOCKED = 78, BLOCKING = 79, BLOCKINSERT = 80, BLOCKSIZE = 81, BODY = 82, 
    BOOLEAN = 83, BOTH = 84, BREAK = 85, BSON = 86, BUFFER = 87, BUFFERPOOL = 88, 
    BUFFERPOOLS = 89, BUFFERSIZE = 90, BUILD = 91, BUSINESS_TIME = 92, BUSINESS_TYPE = 93, 
    BY = 94, CACHE = 95, CACHING = 96, CALL = 97, CALLED = 98, CALLER = 99, 
    CAPTURE = 100, CARDINALITY = 101, CASCADE = 102, CASCADED = 103, CASE = 104, 
    CAST = 105, CATEGORIES = 106, CBMCFGVALUES = 107, CCSID = 108, CFGALL = 109, 
    CHANGE = 110, CHANGES = 111, CHAR = 112, CHARACTER = 113, CHECK = 114, 
    CHECKED = 115, CHECKING = 116, CLASS_ = 117, CLIENT = 118, CLIENT_ACCTNG = 119, 
    CLIENT_APPLNAME = 120, CLIENT_USERID = 121, CLIENT_WRKSTNNAME = 122, 
    CLOB = 123, CLOSE = 124, CLR = 125, COBOL = 126, CODEUNITS16 = 127, 
    CODEUNITS32 = 128, COLLECT = 129, COLUMN = 130, COLUMNS = 131, COMMENT = 132, 
    COMMIT = 133, COMPACT = 134, COMPARISONS = 135, COMPILATION = 136, COMPONENT = 137, 
    COMPONENTS = 138, COMPOUND = 139, COMPRESS = 140, COMPRESSION = 141, 
    CONCAT = 142, CONCURRENTDBCOORDACTIVITIES = 143, CONCURRENTWORKLOADACTIVITIES = 144, 
    CONCURRENTWORKLOADOCCURRENCES = 145, CONDITION = 146, CONFIRM = 147, 
    CONNECT = 148, CONNECTION = 149, CONNECTIONIDLETIME = 150, CONSTANT = 151, 
    CONSTRAINT = 152, CONTAINERS = 153, CONTAINS = 154, CONTEXT = 155, CONTINUE = 156, 
    CONTROL = 157, CONVERT = 158, COORDINATOR = 159, CORRELATOR = 160, COUNT = 161, 
    CPP = 162, CPU = 163, CPUTIME = 164, CPUTIMEINSC = 165, CREATE = 166, 
    CREATEIN = 167, CREATETAB = 168, CREATE_EXTERNAL_ROUTINE = 169, CREATE_NOT_FENCED_ROUTINE = 170, 
    CREATE_SECURE_OBJECT = 171, CREATE_SOURCE_OBJECT = 172, CRITICAL = 173, 
    CROSS = 174, CS = 175, CUBE = 176, CURRENT = 177, CURRENT_PATH = 178, 
    CURRENT_USER = 179, CURSOR = 180, CURSORS = 181, CUSTOM = 182, CYCLE = 183, 
    C_ = 184, DATA = 185, DATAACCESS = 186, DATABASE = 187, DATALAKE = 188, 
    DATATAGINSC = 189, DATE = 190, DAY = 191, DAYS = 192, DB = 193, DB2GENERAL = 194, 
    DB2LBACREADARRAY = 195, DB2LBACREADSET = 196, DB2LBACREADTREE = 197, 
    DB2LBACRULES = 198, DB2LBACWRITEARRAY = 199, DB2LBACWRITESET = 200, 
    DB2LBACWRITETREE = 201, DB2SQL = 202, DB2_RETURN_STATUS = 203, DB2_SQL_NESTING_LEVEL = 204, 
    DB2_TOKEN_STRING = 205, DBADM = 206, DBCFG = 207, DBCFGVALUES = 208, 
    DBCLOB = 209, DBINFO = 210, DBMCFG = 211, DBPARTITIONNUM = 212, DBPARTITIONNUMS = 213, 
    DDL = 214, DDLALL = 215, DDLDATA = 216, DDLFEDERATED = 217, DDLMONITOR = 218, 
    DDLSECURITY = 219, DDLSQL = 220, DDLSTORAGE = 221, DDLWLM = 222, DDLXML = 223, 
    DEACTIVATE = 224, DEADLOCK = 225, DEC = 226, DECFLOAT = 227, DECIMAL = 228, 
    DECLARE = 229, DECOMPOSITION = 230, DEFAULT = 231, DEFAULTS = 232, DEFERRED = 233, 
    DEGREE_ = 234, DELETE = 235, DELETEIN = 236, DESC = 237, DESCRIBE = 238, 
    DESCRIPTOR = 239, DETACH = 240, DETAIL = 241, DETAILED = 242, DETAILS = 243, 
    DETERMINISTIC = 244, DEVICE = 245, DIAGNOSTICS = 246, DIMENSIONS = 247, 
    DISABLE = 248, DISALLOW = 249, DISCONNECT = 250, DISPATCH = 251, DISTINCT = 252, 
    DISTRIBUTE = 253, DISTRIBUTED = 254, DISTRIBUTION = 255, DML = 256, 
    DO = 257, DOUBLE = 258, DROP = 259, DROPIN = 260, DROPPED = 261, DYNAMIC = 262, 
    EACH = 263, ELEMENT = 264, ELSE = 265, ELSEIF = 266, EMPTY = 267, EMPTY_BLOB = 268, 
    EMPTY_CLOB = 269, EMPTY_DBCLOB = 270, EMPTY_NCLOB = 271, ENABLE = 272, 
    ENCRYPTION = 273, END = 274, ENDING = 275, ENFORCED = 276, ENFORCEMENT = 277, 
    ENVIRONMENT = 278, ERROR = 279, ESCAPE = 280, ESTIMATEDCOST = 281, ESTIMATEDSQLCOST = 282, 
    EVALUATE = 283, EVENT = 284, EVERY = 285, EXACT = 286, EXCEEDED = 287, 
    EXCEPT = 288, EXCEPTION = 289, EXCLUDING = 290, EXCLUSIVE = 291, EXECUTABLE = 292, 
    EXECUTE = 293, EXECUTEIN = 294, EXECUTETIME = 295, EXECUTION = 296, 
    EXEMPTION = 297, EXISTS = 298, EXPLAIN = 299, EXPRESSION = 300, EXTEND = 301, 
    EXTENDED = 302, EXTENSION = 303, EXTENTSIZE = 304, EXTERNAL = 305, FAILURE = 306, 
    FALSE = 307, FEDERATED = 308, FEDERATED_TOOL = 309, FENCED = 310, FETCH = 311, 
    FIFO = 312, FILE = 313, FILTER = 314, FINAL = 315, FINALIZE = 316, FIRST = 317, 
    FIRST_VALUE = 318, FLOAT = 319, FLUSH = 320, FOLLOWING = 321, FOR = 322, 
    FORCE = 323, FOREIGN = 324, FORMAT = 325, FOUND = 326, FREE = 327, FROM = 328, 
    FULL = 329, FUNCTION = 330, G = 331, GENERAL = 332, GENERATE = 333, 
    GENERATED = 334, GENERIC = 335, GET = 336, GLOBAL = 337, GO = 338, GOTO = 339, 
    GRANT = 340, GRAPHIC = 341, GROUP = 342, GROUPING = 343, HARD = 344, 
    HASH = 345, HIDDEN_ = 346, HIERARCHY = 347, HIGH = 348, HISTOGRAM = 349, 
    HISTORY = 350, HOLD = 351, HOUR = 352, HOURS = 353, IDENTITY = 354, 
    IF = 355, IGNORE = 356, IMMEDIATE = 357, IMPLEMENTATION = 358, IMPLICIT = 359, 
    IMPLICITLY = 360, IMPLICIT_SCHEMA = 361, IN = 362, INACTIVE = 363, INCLUDE = 364, 
    INCLUDING = 365, INCLUSIVE = 366, INCREASESIZE = 367, INCREMENT = 368, 
    INCREMENTAL = 369, INDEX = 370, INDEXES = 371, INFIX = 372, INHERIT = 373, 
    INITIALIZE = 374, INITIALLY = 375, INITIALSIZE = 376, INLINE = 377, 
    INNER = 378, INOUT = 379, INPUT = 380, INSENSITIVE = 381, INSERT = 382, 
    INSERTIN = 383, INSTANTIABLE = 384, INSTEAD = 385, INT = 386, INTEGER = 387, 
    INTEGRITY = 388, INTERACTIVE = 389, INTERARRIVALTIME = 390, INTERSECT = 391, 
    INTERVAL = 392, INTO = 393, INVALIDATION = 394, IS = 395, ISOLATION = 396, 
    ITERATE = 397, JAVA = 398, JOIN = 399, JSON = 400, JSON_EXISTS = 401, 
    K = 402, KEEP = 403, KEY = 404, LABEL = 405, LANGUAGE = 406, LARGE = 407, 
    LAST = 408, LAST_VALUE = 409, LATENCY = 410, LATERAL = 411, LC_MESSAGES_ = 412, 
    LC_TIME_ = 413, LEAVE = 414, LEFT = 415, LENGTH = 416, LEVEL = 417, 
    LIBRARY = 418, LIFETIME = 419, LIKE = 420, LIMIT = 421, LIST = 422, 
    LOAD = 423, LOCAL = 424, LOCALE = 425, LOCATION = 426, LOCATOR = 427, 
    LOCATORS = 428, LOCK = 429, LOCKED = 430, LOCKING = 431, LOCKS = 432, 
    LOCKSIZE = 433, LOG = 434, LOGGED = 435, LOGICAL = 436, LONG = 437, 
    LONGVAR = 438, LOOP = 439, LOW = 440, LOWER = 441, L_ONE = 442, L_ZERO = 443, 
    M = 444, MAIN = 445, MAINTAINED = 446, MANAGED = 447, MANUALSTART = 448, 
    MAP = 449, MAPPING = 450, MARK = 451, MASK = 452, MATCHED = 453, MATCHING = 454, 
    MATERIALIZED = 455, MAX = 456, MAXFILES = 457, MAXFILESIZE = 458, MAXIMUM = 459, 
    MAXSIZE = 460, MAXVALUE = 461, MDC = 462, MEDIUM = 463, MEMBER = 464, 
    MEMBERS = 465, MERGE = 466, MESSAGE_TEXT = 467, METHOD = 468, METRICS = 469, 
    MICROSECOND = 470, MICROSECONDS = 471, MINIMUM = 472, MINUTE = 473, 
    MINUTES = 474, MINVALUE = 475, MIXED = 476, MODE = 477, MODEL = 478, 
    MODIFICATION = 479, MODIFIES = 480, MONITOR = 481, MONTH = 482, MONTHS = 483, 
    MORE_ = 484, MOVEMENT = 485, MOVETABLE = 486, MULTIPLIER = 487, NAME = 488, 
    NAMESPACE = 489, NATIONAL = 490, NCHAR = 491, NCLOB = 492, NESTED = 493, 
    NEW = 494, NEXT = 495, NICKNAME = 496, NO = 497, NONBLOCKED = 498, NONE = 499, 
    NORCAC = 500, NORMAL = 501, NOT = 502, NOWAIT = 503, NPSGENERIC = 504, 
    NTH_VALUE = 505, NULLS = 506, NULL_ = 507, NUM = 508, NUMBER = 509, 
    NUMBLOCKPAGES = 510, NUMERIC = 511, NUM_EXECUTIONS = 512, NVARCHAR = 513, 
    OBJECT = 514, OBJMAINT = 515, OCCURENCE = 516, OCTETS = 517, OF = 518, 
    OFF = 519, OFFSET = 520, OLD = 521, OLE = 522, OLEDB = 523, ON = 524, 
    ONCE = 525, ONLINE = 526, ONLINERECOVERY = 527, ONLY = 528, OPEN = 529, 
    OPTIMIZATION = 530, OPTIMIZE = 531, OPTION = 532, OPTIONS = 533, OR = 534, 
    ORDER = 535, ORDINALITY = 536, ORGANIZED = 537, OUT = 538, OUTBOUND = 539, 
    OUTCOME = 540, OUTER = 541, OUTPUT = 542, OVER = 543, OVERFLOW_WV = 544, 
    OVERHEAD = 545, OVERLAPS = 546, OVERRIDE_ = 547, OVERRIDING = 548, OWNERSHIP = 549, 
    PACKAGE = 550, PACKAGESET = 551, PAGESIZE = 552, PARALLEL = 553, PARAMETER = 554, 
    PARAMETERS = 555, PARTITION = 556, PARTITIONINGS = 557, PARTITIONS = 558, 
    PASSTHRU = 559, PASSWORD = 560, PATH = 561, PCTDEACTIVATE = 562, PCTFREE = 563, 
    PERCENT = 564, PERFORM = 565, PERIOD = 566, PERMISSION = 567, PIPE = 568, 
    PLAN = 569, POLICY = 570, PORTION = 571, POSITION = 572, PRECEDING = 573, 
    PRECISION = 574, PREDICATES = 575, PREFETCH = 576, PREFETCHSIZE = 577, 
    PREPARE = 578, PRESERVE = 579, PREVENT = 580, PREVIOUS = 581, PRIMARY = 582, 
    PRIORITY = 583, PRIVILEGES = 584, PROCEDURE = 585, PROFILE = 586, PROGRAM = 587, 
    PROPAGATE = 588, PRUNE = 589, PUBLIC = 590, PUBLISH = 591, PYTHON = 592, 
    P_ = 593, QUERY = 594, QUERYNO = 595, QUERYTAG = 596, QUEUE = 597, QUEUEDACTIVITIES = 598, 
    QUEUEDCONNECTIONS = 599, QUEUETIME = 600, QUIESCE_CONNECT = 601, RANDOM = 602, 
    RANGE = 603, RATE = 604, RATION_TO_REPORT = 605, READ = 606, READS = 607, 
    REAL = 608, REBALANCE = 609, RECOMMEND = 610, RECORD = 611, RECOVERY = 612, 
    REDISTRIBUTE = 613, REDUCE = 614, REF = 615, REFERENCE = 616, REFERENCES = 617, 
    REFERENCING = 618, REFRESH = 619, REGEXP_LIKE = 620, REGISTERS = 621, 
    REGULAR = 622, REGVAR = 623, REGVARVALUES = 624, RELATIONAL = 625, RELEASE = 626, 
    RELEASED = 627, REMAP = 628, REMOTE = 629, REMOVE = 630, RENAME = 631, 
    REOPT = 632, REORG = 633, REPEAT = 634, REPEATABLE = 635, REPLACE = 636, 
    REPLICATION = 637, REQUEST = 638, REQUIRE = 639, RESET = 640, RESIDENT = 641, 
    RESIGNAL = 642, RESIZE = 643, RESOURCE = 644, RESPECT = 645, RESTART = 646, 
    RESTORE = 647, RESTRICT = 648, RESULT = 649, RESUME = 650, RETAIN = 651, 
    RETURN = 652, RETURNS = 653, REUSE = 654, REVERT = 655, REVOKE = 656, 
    RIGHT = 657, ROLE = 658, ROLLBACK = 659, ROLLFORWARD = 660, ROLLOUT = 661, 
    ROLLUP = 662, ROOT = 663, ROUNDING = 664, ROUND_CEILING = 665, ROUND_DOWN = 666, 
    ROUND_FLOOR = 667, ROUND_HALF_EVEN = 668, ROUND_HALF_UP = 669, ROUTINES = 670, 
    ROW = 671, ROWS = 672, ROW_COUNT = 673, ROW_NUMBER = 674, RR = 675, 
    RS = 676, RULE = 677, RULES = 678, RUN = 679, RUNSTATS = 680, SAVEPOINT = 681, 
    SCALEBACK = 682, SCHEMA = 683, SCHEMAADM = 684, SCOPE = 685, SCRATCHPAD = 686, 
    SEARCH = 687, SECADM = 688, SECMAINT = 689, SECOND = 690, SECONDS = 691, 
    SECTION = 692, SECURED = 693, SECURITY = 694, SELECT = 695, SELECTIN = 696, 
    SELECTION = 697, SELECTIVITY = 698, SELF = 699, SEQUENCE = 700, SERVER = 701, 
    SERVICE = 702, SESSION = 703, SESSION_USER = 704, SET = 705, SETS = 706, 
    SETSESSIONUSER = 707, SHARE = 708, SHARES = 709, SHOW = 710, SIGNAL = 711, 
    SINGLE = 712, SIZE = 713, SKIP_ = 714, SMALLINT = 715, SNAPSHOT = 716, 
    SOFT = 717, SOME = 718, SORTMEM = 719, SORTSHRHEAPUTIL = 720, SOURCE = 721, 
    SPECIAL = 722, SPECIFIC = 723, SQL = 724, SQLADM = 725, SQLCA = 726, 
    SQLCODE = 727, SQLDA = 728, SQLERROR = 729, SQLROWSREAD = 730, SQLROWSREADINSC = 731, 
    SQLROWSRETURNED = 732, SQLSTATE = 733, SQLTEMPSPACE = 734, SQLWARNING = 735, 
    SQL_CCFLAGS = 736, STAGING = 737, START = 738, STARTING = 739, STATE = 740, 
    STATEMENT = 741, STATEMENTS = 742, STATIC = 743, STATISTICS = 744, STATUS = 745, 
    STAY = 746, STMT_EXEC_TIME = 747, STOGROUP = 748, STOP = 749, STORAGE = 750, 
    STRIPE = 751, STRONG = 752, STYLE = 753, SUB = 754, SUCCESS = 755, SUSPEND = 756, 
    SWITCH = 757, SYSADMIN = 758, SYSDEFAULTHISTOGRAM = 759, SYSDEFAULTUSERCLASS = 760, 
    SYSTEM = 761, SYSTEM_TIME = 762, SYSTEM_USER = 763, S_ = 764, TABLE = 765, 
    TABLES = 766, TABLESAMPLE = 767, TABLESPACE = 768, TABLESPACES = 769, 
    TAG = 770, TARGET = 771, TEMPLATE = 772, TEMPORAL = 773, TEMPORARY = 774, 
    TEXT = 775, THAN = 776, THEN = 777, THREADSAFE = 778, THRESHOLD = 779, 
    THROUGH = 780, TIME = 781, TIMEOUT = 782, TIMERONCOST = 783, TIMESTAMP = 784, 
    TO = 785, TOKEN = 786, TOTALMEMBERCONNECTIONS = 787, TOTALSCMEMBERCONNECTIONS = 788, 
    TRACKING = 789, TRANSACTION = 790, TRANSFER = 791, TRANSFERRATE = 792, 
    TRANSFORM = 793, TRANSFORMS = 794, TREAT = 795, TREE = 796, TRIGGER = 797, 
    TRIGGERS = 798, TRUE = 799, TRUNCATE = 800, TRUSTED = 801, TYPE = 802, 
    TYPES = 803, UNBOUNDED = 804, UNCHECKED = 805, UNDER = 806, UNFORMATTED = 807, 
    UNICODE_WV = 808, UNION = 809, UNIQUE = 810, UNIT = 811, UNITS = 812, 
    UNKNOWN = 813, UNNEST = 814, UNTIL = 815, UOW = 816, UOWTOTALTIME = 817, 
    UPDATE = 818, UPDATED_SINCE_BOUNDARY_TIME = 819, UPDATEIN = 820, UPON = 821, 
    UR = 822, URI = 823, USAGE = 824, USE = 825, USER = 826, USING = 827, 
    UTILALL = 828, VALIDATE = 829, VALIDATED = 830, VALUE = 831, VALUES = 832, 
    VARBINARY = 833, VARCHAR = 834, VARGRAPHIC = 835, VARIABLE = 836, VARYING = 837, 
    VERSION = 838, VERSIONING = 839, VIEW = 840, VIOLATIONS = 841, VOLATILE = 842, 
    WAIT = 843, WAITING = 844, WATER = 845, WEAK = 846, WHEN = 847, WHENEVER = 848, 
    WHERE = 849, WHILE = 850, WITH = 851, WITHIN = 852, WITHOUT = 853, WLMADM = 854, 
    WORK = 855, WORKLOAD = 856, WRAP = 857, WRAPPER = 858, WRITE = 859, 
    WRITEDOWN = 860, WRITEUP = 861, XML = 862, XMLCAST = 863, XMLEXISTS = 864, 
    XMLPARSE = 865, XMLSCHEMA = 866, XQUERY = 867, XSROBJECT = 868, YEAR = 869, 
    YEARS = 870, YES = 871, WHITE_SPACE = 872, SQL_COMMENT = 873, LINE_COMMENT = 874, 
    DOUBLE_QUOTE_ID = 875, SINGLE_QUOTE = 876, ID = 877, STRING_LITERAL = 878, 
    DECIMAL_LITERAL = 879, SINGLE_DIGIT = 880, FLOAT_LITERAL = 881, REAL_LITERAL = 882, 
    CHAR_LITERAL = 883, NE = 884, LTGT = 885, EQ = 886, GT = 887, GE = 888, 
    LT = 889, LE = 890, EXCLAMATION = 891, PIPE_CHAR = 892, PIPE_PIPE = 893, 
    DOT = 894, LEFT_RND_BKT = 895, RIGHT_RND_BKT = 896, LEFT_SQR_BKT = 897, 
    RIGHT_SQR_BKT = 898, LEFT_CURLY_BKT = 899, RIGHT_CURLY_BKT = 900, COMMA = 901, 
    SEMI = 902, TILDE = 903, STAR = 904, STAR_STAR = 905, DIVIDE = 906, 
    MODULE = 907, PLUS = 908, MINUS = 909, CARET = 910, AMPERSAND = 911, 
    COLON = 912, DOT_DOT = 913, ARROW = 914, ASSOC = 915
  };

  enum {
    RuleDb2_file = 0, RuleBatch = 1, RuleSql_statement = 2, RuleSql_schema_statement = 3, 
    RuleSql_data_change_statement = 4, RuleSql_data_statement = 5, RuleSql_transaction_statement = 6, 
    RuleSql_connection_statement = 7, RuleSql_dynamic_statement = 8, RuleSql_session_statement = 9, 
    RuleSql_embedded_host_language_statement = 10, RuleSql_constrol_statement = 11, 
    RuleSelect_statement = 12, RuleRead_only_clause = 13, RuleUpdate_clause = 14, 
    RuleOptimize_for_clause = 15, RuleConcurrent_access_resolution_clause = 16, 
    RuleDelete_statement = 17, RuleDelete_statement_searched_delete = 18, 
    RuleTable_or_view_name = 19, RuleDelete_statement_positioned_delete = 20, 
    RuleDelete_deltalake_statement = 21, RuleInsert_statement = 22, RuleInsert_datalake_statement = 23, 
    RuleValues_item = 24, RuleMerge_statement = 25, RuleTable_view_fullselect = 26, 
    RuleCommon_table_expression_list = 27, RuleMatching_condition = 28, 
    RuleModification_operation = 29, RuleUpdate_operation = 30, RuleDelete_operation = 31, 
    RuleInsert_operation = 32, RuleExpr_null_default_list = 33, RuleIsolation_level = 34, 
    RuleTruncate_statement = 35, RuleUpdate_statement = 36, RuleUpdate_statement_searched_update = 37, 
    RuleSkip_wait = 38, RuleUpdate_statement_positioned_update = 39, RuleInclude_columns = 40, 
    RuleAssignment_clause = 41, RuleAssignment_item = 42, RulePeriod_clause = 43, 
    RuleTime_sec = 44, RuleUpdate_datalake_statement = 45, RuleGrant_database_authorities_statement = 46, 
    RuleDb_privilege_list = 47, RuleDb_privilege = 48, RuleGrantee = 49, 
    RuleGrantee_user_group = 50, RuleUser_group = 51, RuleGrantee_list = 52, 
    RuleGrantee_list_public = 53, RuleGrantee_list_user_group = 54, RuleGrant_exemption_statement = 55, 
    RuleExemption_privilege = 56, RuleGrant_global_variable_privileges_statement = 57, 
    RuleVariable_privilege = 58, RuleRead_write = 59, RuleWith_grant_option = 60, 
    RuleGrant_index_privileges_statement = 61, RuleGrant_module_privileges_statement = 62, 
    RuleGrant_package_privileges_statement = 63, RulePackage_privilege_list = 64, 
    RulePackage_privilege = 65, RuleGrant_role_statement = 66, RuleRole_list = 67, 
    RuleGrant_routine_privileges_statement = 68, RuleGrant_schema_privileges_statement = 69, 
    RuleSchema_privilege_list = 70, RuleSchema_privilege = 71, RuleGrant_security_label_statement = 72, 
    RuleGrant_sequence_privileges_statement = 73, RuleSequence_privilege_list = 74, 
    RuleSequence_privilege = 75, RuleGrant_server_privileges_statement = 76, 
    RuleGrant_setsessionuser_privilege_statement = 77, RuleUser_list = 78, 
    RuleUser_auth = 79, RuleGrant_table_space_privileges_statement = 80, 
    RuleGrant_table_view_or_nickname_privileges_statement = 81, RuleTvn_privilege_list = 82, 
    RuleTvn_privilege = 83, RuleColumn_name_list_paren = 84, RuleColumn_name_list = 85, 
    RuleGrant_workload_privileges_statement = 86, RuleGrant_xsr_object_privileges_statement = 87, 
    RuleRevoke_database_authorities_statement = 88, RuleBy_all = 89, RuleRevoke_exemption_statement = 90, 
    RuleRevoke_global_variable_privileges_statement = 91, RuleRevoke_index_privileges_statement = 92, 
    RuleRevoke_module_privileges_statement = 93, RuleRevoke_package_privileges_statement = 94, 
    RuleRevoke_role_statement = 95, RuleRevoke_routine_privileges_statement = 96, 
    RuleRevoke_schema_privileges_statement = 97, RuleRevoke_security_label_statement = 98, 
    RuleRevoke_sequence_privileges_statement = 99, RuleRevoke_server_privileges_statement = 100, 
    RuleRevoke_setsessionuser_privilege_statement = 101, RuleRevoke_table_space_privileges_statement = 102, 
    RuleRevoke_table_view_or_nickname_privileges_statement = 103, RuleRevoke_workload_privileges_statement = 104, 
    RuleRevoke_xsr_object_privileges_statement = 105, RuleUser_group_role = 106, 
    RuleRollback_statement = 107, RuleSavepoint_statement = 108, RuleRelease_savepoint_statement = 109, 
    RuleAllocate_cursor_statement = 110, RuleAlter_audit_policy_statement = 111, 
    RuleStatus_spec = 112, RuleNormal_audit = 113, RuleAlter_bufferpool_statement = 114, 
    RuleImmediate_deferred = 115, RuleAlter_database_partition_group_statement = 116, 
    RuleDb_partition_group_list_item = 117, RuleDb_partition_num_nums = 118, 
    RuleDb_partitions_clause = 119, RuleDb_partition_options = 120, RuleAlter_database_statement = 121, 
    RuleAlter_database_opts = 122, RuleAlter_event_monitor_statement = 123, 
    RuleAlter_event_monitor_opts = 124, RuleAlter_function_statement = 125, 
    RuleAlter_function_opts = 126, RuleFunction_designator = 127, RuleData_type_list = 128, 
    RuleData_type_list_paren = 129, RuleAlter_histogram_template_statement = 130, 
    RuleAlter_index_statement = 131, RuleYes_no = 132, RuleAlter_mask_statement = 133, 
    RuleEnable_disable = 134, RuleAlter_method_statement = 135, RuleMethod_designator = 136, 
    RuleAlter_model_statement = 137, RuleAlter_module_statement = 138, RuleAlter_module_opts = 139, 
    RuleModule_function_definition = 140, RuleModule_procedure_definition = 141, 
    RuleModule_type_definition = 142, RuleModule_variable_definition = 143, 
    RuleModule_condition_definition = 144, RuleModule_object_identification = 145, 
    RuleModule_function_designator = 146, RuleModule_procedure_designator = 147, 
    RuleAlter_nickname_statement = 148, RuleAlter_nickname_opts_1 = 149, 
    RuleAlter_nickname_opts_1_item = 150, RuleAlter_nickname_opts_2 = 151, 
    RuleAlter_nickname_opts_2_item = 152, RuleConstraint_alteration = 153, 
    RuleAlter_package_statement = 154, RuleAlter_package_opts = 155, RuleAlter_permission_statement = 156, 
    RuleAlter_procedure_external_statement = 157, RuleAlter_procedure_external_opts = 158, 
    RuleProcedure_designator = 159, RuleAlter_procedure_sourced_statement = 160, 
    RuleParameter_alteration = 161, RuleAlter_procedure_sql_statement = 162, 
    RuleAlter_schema_statement = 163, RuleNone_changes = 164, RuleAlter_security_label_component_statement = 165, 
    RuleAdd_element_clause = 166, RuleArray_element_clause = 167, RuleTree_element_clause = 168, 
    RuleAlter_security_policy_statement = 169, RuleAlter_security_policy_opts = 170, 
    RuleAlter_sequence_statement = 171, RuleAlter_sequence_opts = 172, RuleAlter_server_statement = 173, 
    RuleAlter_server_opts = 174, RuleAlter_service_class_statement = 175, 
    RuleAlter_service_class_opts = 176, RuleDefault_on_off = 177, RuleDefault_high_medium_low = 178, 
    RuleAlter_stogroup_statement = 179, RuleAlter_stogroup_opts = 180, RuleAlter_table_statement = 181, 
    RuleAlter_table_opts = 182, RuleNull_on_off = 183, RuleCascade_restrict = 184, 
    RuleMaterialized_query_definition = 185, RuleRefreshable_table_options = 186, 
    RuleColumn_alteration = 187, RuleGeneration_alteration = 188, RuleIdentity_alteration = 189, 
    RuleGeneration_attribute = 190, RuleAs_identity_clause = 191, RuleAs_identity_clause_opts = 192, 
    RulePeriod_definition_alter = 193, RuleAdd_partition = 194, RuleBoundary_spec_alter = 195, 
    RuleAttach_partition = 196, RuleActivate_deactivate = 197, RuleAlter_tablespace_statement = 198, 
    RuleAlter_tablespace_opts = 199, RuleAdd_clause = 200, RuleDb_container_clause = 201, 
    RuleDb_container_clause_opts = 202, RuleDrop_container_clause = 203, 
    RuleFile_device = 204, RuleAll_containers_clause = 205, RuleSystem_container_clause = 206, 
    RuleStripeset = 207, RuleKm = 208, RuleKmg_percent = 209, RuleAlter_threshold_statement = 210, 
    RuleAlter_threshold_opts = 211, RuleAlter_threshold_predicate = 212, 
    RuleAlter_threshold_exceeded_actions = 213, RuleDt_units = 214, RuleDt_units_with_seconds = 215, 
    RuleAlter_trigger_statement = 216, RuleAlter_trusted_context_statement = 217, 
    RuleAlter_trusted_context_opts = 218, RuleAlter_trusted_context_opts_alter_opts = 219, 
    RuleAddr_clause_encryption_val = 220, RuleAddress_clause = 221, RuleUser_clause = 222, 
    RuleUse_for_opts = 223, RuleUse_for_opts_2 = 224, RuleAlter_type_statement = 225, 
    RuleAlter_type_opts = 226, RuleMethod_identifier = 227, RuleMethod_options = 228, 
    RuleAlter_usage_list_statement = 229, RuleAlter_usage_list_opts_item = 230, 
    RuleAlter_user_mapping_statement = 231, RuleAlter_user_mapping_opts_item = 232, 
    RuleAdd_set = 233, RuleAlter_view_statement = 234, RuleAlter_view_opts = 235, 
    RuleAlter_work_action_set_statement = 236, RuleAlter_work_action_set_opts = 237, 
    RuleWork_action_alteration = 238, RuleWork_action_alteration_opts = 239, 
    RuleAlter_action_types_clause = 240, RuleThreshold_predicate_clause = 241, 
    RuleAlter_work_class_set_statement = 242, RuleAlter_work_class_set_opts = 243, 
    RuleWork_class_alteration = 244, RuleWork_class_alteration_opts = 245, 
    RuleFor_from_to_alter_clause = 246, RuleSchema_alter_clause = 247, RuleData_tag_alter_clause = 248, 
    RuleAlter_workload_statement = 249, RuleAlter_workload_opts_item = 250, 
    RulePackage_executable = 251, RuleBase_none = 252, RuleExtended_base_none = 253, 
    RuleAlter_collect_activity_data_clause = 254, RuleWith_opts = 255, RuleAlter_collect_history_clause = 256, 
    RuleAlter_collect_lock_wait_data_clause = 257, RuleAlter_wrapper_statement = 258, 
    RuleAlter_wrapper_opts_item = 259, RuleAlter_xsrobject_statement = 260, 
    RuleString = 261, RuleString_constant = 262, RuleNumeric_constant = 263, 
    RuleData_type = 264, RuleAnchored_data_type = 265, RuleAnchored_non_row_data_type = 266, 
    RuleAnchored_row_data_type = 267, RuleSource_data_type = 268, RuleData_type_constrainst = 269, 
    RuleCheck_condition = 270, RuleData_type_2 = 271, RuleBuilt_in_type = 272, 
    RuleInteger_paren = 273, RuleInteger_kmg_paren = 274, RuleChar_character = 275, 
    RuleOctets_codeunits = 276, RuleCodeunits = 277, RuleKmg = 278, RuleRs_locator_variable = 279, 
    RuleInteger_constant_list = 280, RuleInteger_constant = 281, RuleInteger_value = 282, 
    RulePositive_integer = 283, RuleBigint_value = 284, RuleBigint_constant = 285, 
    RuleMember_number = 286, RuleVersion_id = 287, RuleDrop_statement = 288, 
    RuleAlias_designator = 289, RuleService_class_designator = 290, RuleTablespace_name_list = 291, 
    RuleAssociate_locators_statement = 292, RuleAudit_statement = 293, RuleBegin_declare_section_statement = 294, 
    RuleCall_statement = 295, RuleArg_list_paren = 296, RuleArg_list = 297, 
    RuleArgument = 298, RuleCase_statement = 299, RuleSearched_case_statement_when_clause = 300, 
    RuleSimple_case_statement_when_clause = 301, RuleClose_statement = 302, 
    RuleComment_statement = 303, RuleColumn_comment = 304, RuleComment_objects = 305, 
    RuleCommit_statement = 306, RuleConnect_type_1_statement = 307, RuleAuthorization = 308, 
    RulePasswords = 309, RuleLock_block = 310, RuleAccesstoken = 311, RuleToken = 312, 
    RuleApi_key = 313, RuleToken_type = 314, RuleDeclare_cursor_statement = 315, 
    RuleDeclare_global_temporary_table_statement = 316, RuleDescribe_statement = 317, 
    RuleXquery_statement = 318, RuleDescribe_input_statement = 319, RuleDescribe_output_statement = 320, 
    RuleDisconnect_statement = 321, RuleEnd_declare_section_statement = 322, 
    RuleExecute_statement = 323, RuleHost_variable_expression = 324, RuleAssignment_target = 325, 
    RuleExecute_immediate_statement = 326, RuleExplain_statement = 327, 
    RuleExplainable_sql_statement = 328, RuleFetch_statement = 329, RuleFlush_bufferpools_statement = 330, 
    RuleFlush_event_monitor_statement = 331, RuleFlush_federated_cache_statement = 332, 
    RuleFlush_optimization_profile_cache_statement = 333, RuleFlush_package_cache_statement = 334, 
    RuleFlush_authentication_cache_statement = 335, RuleFree_locator_statement = 336, 
    RuleGet_diagnostics_statement = 337, RuleStatement_information = 338, 
    RuleCondition_information = 339, RuleCondition_var_assignment = 340, 
    RuleLock_table_statement = 341, RulePipe_statement = 342, RuleRefresh_table_statement = 343, 
    RuleRelease_connection_statement = 344, RuleRename_statement = 345, 
    RuleRename_stogroup_statement = 346, RuleRename_tablespace_statement = 347, 
    RuleSet_statement = 348, RuleAccess_mode_clause = 349, RuleCascade_clause = 350, 
    RuleTo_descendent_types = 351, RuleTable_type_list = 352, RuleTable_type = 353, 
    RuleTable_checked_options_list = 354, RuleTable_checked_options = 355, 
    RuleOnline_options = 356, RuleQuery_optimization_options = 357, RuleCheck_options = 358, 
    RuleIncremental_options = 359, RuleException_clause = 360, RuleIn_table_use_clause = 361, 
    RuleTable_unchecked_options = 362, RuleFull_access = 363, RuleIntegrity_options = 364, 
    RuleIntegrity_options_item = 365, RuleVar_def_list = 366, RuleVar_def = 367, 
    RuleExpr_null = 368, RuleExpr_null_default = 369, RuleArray_index = 370, 
    RuleRow_fullselect = 371, RuleTarget_variable = 372, RuleTarget_cursor_variable = 373, 
    RuleTarget_row_variable = 374, RuleRow_array_element_specification = 375, 
    RuleRow_field_reference = 376, RuleField_reference = 377, RuleSearch_condition = 378, 
    RulePredicate = 379, RuleAccording_to_clause = 380, RuleXml_schema_identification_list = 381, 
    RuleXml_schema_identification = 382, RuleFullselect_in_parentheses = 383, 
    RuleSome_any_all = 384, RuleRow_value_expression = 385, RuleComparison_operator = 386, 
    RuleRow_expression = 387, RulePath_opt_list = 388, RulePath_opt = 389, 
    RulePkg_opt_list = 390, RulePkg_opt = 391, RuleMaintain_opt_list = 392, 
    RuleMaintain_opt = 393, RuleVariable = 394, RuleHost_variable = 395, 
    RuleSet_integrity_statement = 396, RuleTransfer_ownership_statement = 397, 
    RuleObjects = 398, RuleWhenever_statement = 399, RuleFor_statement = 400, 
    RuleGoto_statement = 401, RuleIf_statement = 402, RuleInclude_statement = 403, 
    RuleResignal_statement = 404, RuleSignal_information = 405, RuleDiagnostic_string_constant = 406, 
    RuleSignal_statement = 407, RuleSqlstate_string_constant = 408, RuleSqlstate_string_variable = 409, 
    RuleSignal_information_2 = 410, RuleDiagnostic_string_expression = 411, 
    RuleIterate_statement = 412, RuleLeave_statement = 413, RuleLoop_statement = 414, 
    RuleOpen_statement = 415, RuleVariable_or_expression = 416, RuleSelect_into_statement = 417, 
    RuleValues_into_statement = 418, RulePrepare_statement = 419, RuleRepeat_statement = 420, 
    RuleReturn_statement = 421, RuleWhile_statement = 422, RuleSql_routine_statement = 423, 
    RuleCommon_table_expression = 424, RuleCreate_alias_statement = 425, 
    RuleTable_alias = 426, RuleModule_alias = 427, RuleSequence_alias = 428, 
    RuleOr_replace = 429, RuleCreate_audit_policy_statement = 430, RuleAudit_policy_opts = 431, 
    RuleAudit_policy_categories_opts = 432, RuleCreate_bufferpool_statement = 433, 
    RuleBufferpool_opts = 434, RuleExcept_clause = 435, RuleMember_list = 436, 
    RuleMember_list_item = 437, RuleCreate_database_partition_group_statement = 438, 
    RuleCreate_event_monitor_statement = 439, RuleCreate_event_monitor_activities_statement = 440, 
    RuleFormatted_event_table_info_3 = 441, RuleCreate_event_monitor_change_history_statement = 442, 
    RuleEvent_control_list = 443, RuleEvent_control = 444, RuleCreate_event_monitor_locking_statement = 445, 
    RuleCreate_event_monitor_package_cache_statement = 446, RuleFilter_and_collection_options = 447, 
    RuleEvent_condition = 448, RuleEvent_condition_item = 449, RuleCreate_event_monitor_statistics_statement = 450, 
    RuleEvent_monitor_statistics_opts = 451, RuleCreate_event_monitor_threshold_violations_statement = 452, 
    RuleFormatted_event_table_info_2 = 453, RuleFile_options = 454, RuleEvent_monitor_threshold_opts = 455, 
    RulePages = 456, RuleCreate_event_monitor_unit_of_work = 457, RuleFormatted_event_table_info = 458, 
    RuleAutostart_manualstart = 459, RuleEvm_group = 460, RuleTarget_table_options = 461, 
    RuleCreate_external_table_statement = 462, RuleExt_table_option = 463, 
    RuleExt_table_option_value = 464, RuleCreate_function_statement = 465, 
    RuleCreate_function_aggregate_interface_statement = 466, RuleAgg_fn_param_decl = 467, 
    RuleAgg_fn_option_list = 468, RuleState_variable_declaration = 469, 
    RuleCreate_function_external_scalar_statement = 470, RuleExt_scalar_param_decl = 471, 
    RuleExt_scalar_option_list = 472, RuleExt_scalar_option_list_item = 473, 
    RulePredicate_specification = 474, RuleData_filter = 475, RuleIndex_exploitation = 476, 
    RuleExploitation_rule = 477, RuleCreate_function_external_table_statement = 478, 
    RuleExt_table_param_decl_list = 479, RuleExt_table_param_decl = 480, 
    RuleExt_table_option_list = 481, RuleExt_table_option_list_item = 482, 
    RuleCreate_function_old_db_external_function_statement = 483, RuleOledb_option_list = 484, 
    RuleOledb_option_list_item = 485, RuleCreate_function_sourced_or_template_statement = 486, 
    RuleFn_return_opts = 487, RuleFn_return_opts_item = 488, RuleTemplate_opts = 489, 
    RuleTemplate_opts_item = 490, RuleAscii_unicode = 491, RuleParam_decl_list_3 = 492, 
    RuleParam_decl_3 = 493, RuleCreate_function_sql_scalar_table_or_row_statement = 494, 
    RuleParam_decl_list_2 = 495, RuleParam_decl_2 = 496, RuleSql_function_body = 497, 
    RuleCreate_function_mapping_statement = 498, RuleFunction_options = 499, 
    RuleFunction_option_name = 500, RuleCreate_global_temporary_table_statement = 501, 
    RuleCreate_global_temporary_table_opts = 502, RuleCreate_global_temporary_table_item = 503, 
    RuleDelete_preserve = 504, RuleCreate_histogram_template_statement = 505, 
    RuleCreate_index_statement = 506, RuleIndex_col_opts = 507, RuleIndex_col_opts_item = 508, 
    RuleKey_expression = 509, RuleCreate_index_extension_statement = 510, 
    RuleParam_list = 511, RuleIndex_maintenance = 512, RuleTable_function_invocation = 513, 
    RuleIndex_search = 514, RuleSearch_method_definition = 515, RuleCreate_mask_statement = 516, 
    RuleCase_expression = 517, RuleRange_producing_funciton_invocation = 518, 
    RuleIndex_filtering_function_invocation = 519, RuleCreate_method_statement = 520, 
    RuleMethod_opts = 521, RuleMethod_opts_item = 522, RuleMethod_signature = 523, 
    RuleMethod_param_list = 524, RuleData_type_3 = 525, RuleData_type_4 = 526, 
    RuleSql_method_body = 527, RuleCompound_sql_inlined = 528, RuleSql_statement_inlined = 529, 
    RuleCompound_sql_compiled = 530, RuleSql_statement_compiled = 531, RuleCreate_module_statement = 532, 
    RuleCreate_nickname_statement = 533, RuleNick_name_option_name = 534, 
    RuleRemote_object_name = 535, RuleNon_relational_data_definition = 536, 
    RuleNick_name_column_list = 537, RuleNick_name_column_list_item = 538, 
    RuleNick_name_column_definition = 539, RuleNick_name_column_options = 540, 
    RuleFederated_column_options = 541, RuleColumn_option_name = 542, RuleCreate_permission_statement = 543, 
    RuleCreate_procedure_statement = 544, RuleCreate_procedure_external_statement = 545, 
    RuleProc_ext_param_list = 546, RuleProc_ext_param = 547, RuleOption_list_2 = 548, 
    RuleOption_list_2_item = 549, RuleCreate_procedure_sourced_statement = 550, 
    RuleSource_procedure_clause = 551, RuleSource_object_name = 552, RuleOption_list_1 = 553, 
    RuleOption_list_1_item = 554, RuleResult_set_element_number = 555, RuleUnique_id = 556, 
    RuleCreate_procedure_sql_statement = 557, RuleProc_parameter_list = 558, 
    RuleProc_parameter_list_item = 559, RuleIn_out_inout = 560, RuleOption_list = 561, 
    RuleOption_list_item = 562, RuleSql_procedure_body = 563, RuleCreate_role_statement = 564, 
    RuleCreate_schema_statement = 565, RuleSchema_sql_statement = 566, RuleCreate_security_label_component_statement = 567, 
    RuleArray_clause = 568, RuleSet_clause = 569, RuleTree_clause = 570, 
    RuleTree_clause_item = 571, RuleCreate_security_label_statement = 572, 
    RuleCreate_security_label_item = 573, RuleCreate_security_policy_statement = 574, 
    RuleCreate_sequence_statement = 575, RuleCreate_sequence_opts = 576, 
    RuleCreate_sequence_opts_item = 577, RuleCreate_service_class_statement = 578, 
    RuleHigh_medium_low = 579, RuleOn_off = 580, RuleSoft_hard = 581, RuleCreate_server_statement = 582, 
    RulePassword_ = 583, RuleCreate_stogroup_statement = 584, RuleCreate_stogroup_opts = 585, 
    RuleCreate_synonym_statement = 586, RuleCreate_table_statement = 587, 
    RuleCreate_table_opts = 588, RuleTable_option_list = 589, RuleTable_option_list_item = 590, 
    RuleTable_option_name = 591, RuleElement_list = 592, RuleElement_list_item = 593, 
    RuleColumn_definition = 594, RulePeriod_definition = 595, RuleUnique_constraint = 596, 
    RuleReferential_constraint = 597, RuleCheck_constraint = 598, RuleColumn_options = 599, 
    RuleColumn_options_item = 600, RuleReferences_clause = 601, RuleRule_clause = 602, 
    RuleConstraint_attributes = 603, RuleDefault_clause = 604, RuleDefault_values = 605, 
    RuleGenerated_clause = 606, RuleDatetime_special_register = 607, RuleUser_special_register = 608, 
    RuleCast_function = 609, RuleIdentity_options = 610, RuleIdentity_options_item = 611, 
    RuleAs_row_change_timestamp_clause = 612, RuleAs_generated_expression_clause = 613, 
    RuleGeneration_expression = 614, RuleAs_row_transaction_timestamp_clause = 615, 
    RuleAs_row_transaction_start_id_clause = 616, RuleOid_column_definition = 617, 
    RuleRange_partition_spec = 618, RulePartition_expression_list = 619, 
    RulePartition_expression = 620, RulePartition_element_list = 621, RulePartition_element = 622, 
    RuleBoundary_spec = 623, RulePartition_tablespace_options = 624, RuleDuration_label = 625, 
    RuleStarting_clause = 626, RuleConst_min_max_list = 627, RuleConst_min_max = 628, 
    RuleEnding_clause = 629, RuleTyped_table_options = 630, RuleTyped_element_list = 631, 
    RuleTyped_element_list_item = 632, RuleAs_result_table = 633, RuleCopy_options = 634, 
    RuleMaterialized_query_options = 635, RuleStaging_table_definition = 636, 
    RuleDimensions_clause = 637, RuleCol_names = 638, RuleSequence_key_spec = 639, 
    RuleSequence_key_spec_list = 640, RuleSequence_key_spec_list_item = 641, 
    RuleTablespace_clauses = 642, RuleDistribution_clause = 643, RulePartitioning_clause = 644, 
    RuleIf_not_exists = 645, RuleCreate_tablespace_statement = 646, RuleStorage_group = 647, 
    RuleSize_attributes = 648, RuleSystem_containers = 649, RuleContainer_string_list = 650, 
    RuleDatabase_containers = 651, RuleContainer_clause = 652, RuleContainer_clause_list = 653, 
    RuleContainer_clause_list_item = 654, RuleOn_db_partitions_clause = 655, 
    RuleDb_partition_number_list = 656, RuleDb_partition_number_list_item = 657, 
    RuleDb_partition_number = 658, RuleNumber_of_pages = 659, RuleNumber_of_files = 660, 
    RuleNumber_of_milliseconds = 661, RuleNumber_megabytes_per_second = 662, 
    RuleCreate_threshold_statement = 663, RuleThreshold_domain = 664, RuleStatement_text = 665, 
    RuleExecutable_id = 666, RuleEnforcement_scope = 667, RuleThreshold_predicate = 668, 
    RuleChecking_every = 669, RuleHour_to_seconds = 670, RuleDay_to_minutes = 671, 
    RuleDay_to_seconds = 672, RuleThreshold_exceeded_actions_2 = 673, RuleDetails_section = 674, 
    RuleRemap_activity_action = 675, RuleCreate_transform_statement = 676, 
    RuleTranform_list = 677, RuleTranform_list_item = 678, RuleTransform_group_list = 679, 
    RuleTransform_group_list_item = 680, RuleCreate_trigger_statement = 681, 
    RuleRef_list = 682, RuleRef_list_item = 683, RuleOld_new = 684, RuleCorrelation_name = 685, 
    RuleIdentifier = 686, RuleTrigger_event = 687, RuleTriggered_action = 688, 
    RuleSql_procedure_statement = 689, RuleSql_function_statement = 690, 
    RuleCreate_trusted_context_statement = 691, RuleAttr_list = 692, RuleAttr_list_item = 693, 
    RuleAuth_list = 694, RuleAuth_list_item = 695, RuleAddress_value = 696, 
    RuleEncryption_value = 697, RuleCreate_type_statement = 698, RuleCreate_type_array_statement = 699, 
    RuleCreate_type_cursor_statement = 700, RuleCreate_type_distinct_statement = 701, 
    RuleCreate_type_row_statement = 702, RuleField_definition_list_paren = 703, 
    RuleField_definition_list = 704, RuleField_definition = 705, RuleCreate_type_structured_statement = 706, 
    RuleStructured_type_seq = 707, RuleAttribute_definition_list_paren = 708, 
    RuleAttribute_definition_list = 709, RuleAttribute_definition = 710, 
    RuleMethod_specification_list = 711, RuleMethod_specification = 712, 
    RuleMethod_specification_seq = 713, RuleAs_locator = 714, RuleParam_decl_list_paren = 715, 
    RuleParam_decl_list = 716, RuleParam_decl = 717, RuleSql_routine_characteristics = 718, 
    RuleExternal_routine_characteristics = 719, RuleLength = 720, RuleRep_type = 721, 
    RuleVarchars = 722, RuleVarbinaries = 723, RuleFor_bit_data = 724, RuleLob_options = 725, 
    RuleCreate_type_mapping_statement = 726, RuleFor_bit_data_precision = 727, 
    RulePrecision = 728, RuleScale = 729, RulePrecision_scale_comp = 730, 
    RuleFrom_to = 731, RuleData_source_data_type = 732, RuleLocal_data_type = 733, 
    RuleRemote_server = 734, RuleServer_version = 735, RuleServer_type = 736, 
    RuleVersion = 737, RuleRelease = 738, RuleMod = 739, RuleCreate_usage_list_statement = 740, 
    RuleCreate_user_mapping_statement = 741, RuleUser_mapping_options_paren = 742, 
    RuleUser_mapping_options = 743, RuleCreate_variable_statement = 744, 
    RuleConstant_ = 745, RuleSpecial_register = 746, RuleGlobal_variable = 747, 
    RuleData_type_1 = 748, RuleCursor_value_constructor = 749, RuleAnchored_variable_data_type = 750, 
    RuleHoldability = 751, RuleReturnability = 752, RuleCreate_view_statement = 753, 
    RuleCreate_view_seq = 754, RuleFullselect = 755, RuleSubselect = 756, 
    RuleSelect_clause = 757, RuleSelect_clause_item = 758, RuleFrom_clause = 759, 
    RuleTable_reference = 760, RuleTable_reference_list = 761, RuleSingles_table_reference = 762, 
    RulePeriod_specification = 763, RuleValue = 764, RuleCorrelation_clause = 765, 
    RuleTablesample_clause = 766, RuleNumeric_expression = 767, RuleSingle_view_reference = 768, 
    RuleSingle_nickname_reference = 769, RuleOnly_table_reference = 770, 
    RuleOuter_table_reference = 771, RuleAnalyze_table_reference = 772, 
    RuleImplementation_clause = 773, RuleNested_table_reference = 774, RuleContinue_handler = 775, 
    RuleSpecific_condition_value = 776, RuleData_change_table_reference = 777, 
    RuleSearched_update_statement = 778, RuleSearched_delete_statement = 779, 
    RuleFinal_new = 780, RuleFinal_new_old = 781, RuleTable_function_reference = 782, 
    RuleTable_udf_cardinality_clause = 783, RuleTyped_correlation_clause = 784, 
    RuleColumn_name_data_type = 785, RuleCollection_derived_table = 786, 
    RuleTable_function = 787, RuleXmltable_expression = 788, RuleXmltable_function = 789, 
    RuleJoined_table = 790, RuleJoin_condition = 791, RuleOuter = 792, RuleExternal_table_reference = 793, 
    RuleColumn_definition_2 = 794, RuleFile_name = 795, RuleWhere_clause = 796, 
    RuleGroup_by_clause = 797, RuleGroup_by_clause_opts = 798, RuleGrouping_expression = 799, 
    RuleGrouping_sets = 800, RuleSuper_groups = 801, RuleGrant_total = 802, 
    RuleHaving_clause = 803, RuleOrder_by_clause = 804, RuleOrder_by_clause_opts = 805, 
    RuleTable_designator = 806, RuleAsc_desc = 807, RuleFirst_last = 808, 
    RuleSort_key = 809, RuleSimple_column_name = 810, RuleSimple_integer = 811, 
    RuleSork_key_expression = 812, RuleOffset_clause = 813, RuleOffset_row_count = 814, 
    RuleFetch_clause = 815, RuleFetch_row_count = 816, RuleRow_rows = 817, 
    RuleIsolation_clause = 818, RuleLock_request_clause = 819, RuleValues_clause = 820, 
    RuleValues_row = 821, RuleRoot_view_definition = 822, RuleSubview_definition = 823, 
    RuleOid_column = 824, RuleWith_options = 825, RuleWith_option_def = 826, 
    RuleWith_option_scope_def = 827, RuleUnder_clause = 828, RuleCreate_work_action_set_statement = 829, 
    RuleWork_action_definition_list_paren = 830, RuleWork_action_definition_list = 831, 
    RuleWork_action_definition = 832, RuleAction_types_clause = 833, RuleThreshold_types_clause = 834, 
    RuleSecond_seconds = 835, RuleHours_minutes = 836, RuleThreshold_exceeded_actions = 837, 
    RuleCollect_activity_data_clause = 838, RuleWith_without = 839, RuleHistogram_templace_clause = 840, 
    RuleCreate_work_class_set_statement = 841, RuleWork_class_definition_list_paren = 842, 
    RuleWork_class_definition_list = 843, RuleWork_class_definition = 844, 
    RuleWork_attributes = 845, RulePosition_clause = 846, RulePosition_ = 847, 
    RuleFor_from_to_clause = 848, RuleFrom_value = 849, RuleTo_value = 850, 
    RuleData_tag_clause = 851, RuleSchema_clause = 852, RuleCreate_workload_statement = 853, 
    RulePkg_exec_seq = 854, RulePosition_clause_2 = 855, RuleConnection_attributes = 856, 
    RuleString_list = 857, RuleString_list_paren = 858, RuleWorkload_attributes = 859, 
    RuleDegree = 860, RuleAllow_disallow = 861, RuleCollect_on_clause = 862, 
    RuleCollect_details_clause = 863, RuleCollect_lock_wait_options = 864, 
    RuleWait_time = 865, RuleCreate_wrapper_statement = 866, RuleWrapper_option_list = 867, 
    RuleWrapper_option = 868, RuleExpression = 869, RuleFunction_invocation = 870, 
    RuleAll_distinct = 871, RuleScalar_fullselect = 872, RuleCast_specification = 873, 
    RuleCursor_cast_specification = 874, RuleRow_cast_specification = 875, 
    RuleInterval_cast_specification = 876, RuleXmlcast_specification = 877, 
    RuleArray_element_specification = 878, RuleArray_constructor = 879, 
    RuleMethod_invocation = 880, RuleOlap_specification = 881, RuleOrdered_olap_specification = 882, 
    RuleWindow_partition_clause = 883, RuleWindow_order_clause = 884, RuleNumbering_specification = 885, 
    RuleAggregation_specification = 886, RuleOlap_aggregate_function = 887, 
    RuleFirst_value_function = 888, RuleLast_value_function = 889, RuleNth_value_function = 890, 
    RuleRatio_to_report_function = 891, RuleIgnore_respect_nulls = 892, 
    RuleFrom_first_last = 893, RuleWindow_aggregation_group_clause = 894, 
    RuleGroup_start = 895, RuleGroup_between = 896, RuleGroup_bound1 = 897, 
    RuleGroup_bound2 = 898, RuleGroup_end = 899, RuleRow_change_expression = 900, 
    RuleSequence_reference = 901, RuleSubtype_treatment = 902, RuleExpression_list = 903, 
    RuleExpression_list_in_parentheses = 904, RuleId_ = 905, RuleExposed_name = 906, 
    RuleName = 907, RuleLabel = 908, RuleHost_label = 909, RuleLibrary_name = 910, 
    RuleArray_type_name = 911, RuleAttribute_name = 912, RuleRow_type_name = 913, 
    RuleAuthorization_name = 914, RuleBoolean_variable_name = 915, RuleArray_variable_name = 916, 
    RuleColumn_name = 917, RuleConstraint_name = 918, RuleDescriptor_name = 919, 
    RuleDistinct_type_name = 920, RuleCursor_name = 921, RuleCursor_type_name = 922, 
    RuleCondition_name = 923, RuleData_source_name = 924, RuleExpression_name = 925, 
    RuleGroup_name = 926, RulePolicy_name = 927, RuleBufferpool_name = 928, 
    RuleDb_partition_name = 929, RuleDatabase_name = 930, RuleEvent_monitor_name = 931, 
    RuleField_name = 932, RuleFor_loop_name = 933, RuleFunction_name = 934, 
    RuleFunction_mapping_name = 935, RuleGlobal_variable_name = 936, RuleHierarchy_name = 937, 
    RuleHost_variable_name = 938, RuleParameter_marker = 939, RuleTemplate_name = 940, 
    RuleIndex_name = 941, RuleIndex_extension_name = 942, RuleInput_descriptor_name = 943, 
    RuleMask_name = 944, RuleMethod_name = 945, RuleModel_name = 946, RuleModule_name = 947, 
    RuleNew_owner = 948, RuleNick_name = 949, RuleObject_name = 950, RuleOid_column_name = 951, 
    RuleOptimization_profile_name = 952, RulePackage_name = 953, RulePartition_name = 954, 
    RulePath_name = 955, RulePermission_name = 956, RulePipe_name = 957, 
    RuleProcedure_name = 958, RuleResult_descriptor_name = 959, RuleRole_name = 960, 
    RuleRoot_table_name = 961, RuleRoot_view_name = 962, RuleRow_variable_name = 963, 
    RuleSource_schema_name = 964, RuleSource_package_name = 965, RuleSource_procedure_name = 966, 
    RuleSql_parameter_name = 967, RuleSql_variable_name = 968, RuleTransition_variable_name = 969, 
    RuleSavepoint_name = 970, RuleSpecific_name = 971, RuleSchema = 972, 
    RuleSchema_name = 973, RuleSearch_method_name = 974, RuleServer_name = 975, 
    RuleServer_option_name = 976, RuleSession_authorization_name = 977, 
    RuleComponent_name = 978, RuleSec_label_comp_name = 979, RuleSecurity_policy_name = 980, 
    RuleSecurity_label_name = 981, RuleSequence_name = 982, RuleService_class_name = 983, 
    RuleService_superclass_name = 984, RuleStoragegroup_name = 985, RuleSupertype_name = 986, 
    RuleSuperview_name = 987, RuleService_subclass_name = 988, RuleStatement_name = 989, 
    RuleTable_name = 990, RuleTablespace_name = 991, RuleTarget_identifier = 992, 
    RuleThreshold_name = 993, RuleTrigger_name = 994, RuleContext_name = 995, 
    RuleUsage_list_name = 996, RuleType_name = 997, RuleType_mapping_name = 998, 
    RuleTyped_table_name = 999, RuleTyped_view_name = 1000, RuleUser_mapping_option_name = 1001, 
    RuleView_name = 1002, RuleVariable_name = 1003, RuleWork_action_set_name = 1004, 
    RuleWork_class_set_name = 1005, RuleWorkload_name = 1006, RuleWork_action_name = 1007, 
    RuleWork_class_name = 1008, RuleWrapper_name = 1009, RuleWrapper_option_name = 1010, 
    RuleXsrobject_name = 1011, RuleParameter_name = 1012, RuleCursor_variable_name = 1013, 
    RuleAlias_name = 1014, RuleDb_partition_group_name = 1015, RuleSource_index_name = 1016, 
    RuleSource_table_name = 1017, RuleSource_storagegroup_name = 1018, RuleTarget_storagegroup_name = 1019, 
    RuleSource_tablespace_name = 1020, RuleTarget_tablespace_name = 1021, 
    RuleUnqualified_function_name = 1022, RuleUnqualified_procedure_name = 1023, 
    RuleUnqualified_specific_name = 1024, RulePeriod_name = 1025, RuleHistory_table_name = 1026, 
    RuleXml_schema_name = 1027, RuleTodo = 1028
  };

  explicit Db2Parser(antlr4::TokenStream *input);

  Db2Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Db2Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Db2_fileContext;
  class BatchContext;
  class Sql_statementContext;
  class Sql_schema_statementContext;
  class Sql_data_change_statementContext;
  class Sql_data_statementContext;
  class Sql_transaction_statementContext;
  class Sql_connection_statementContext;
  class Sql_dynamic_statementContext;
  class Sql_session_statementContext;
  class Sql_embedded_host_language_statementContext;
  class Sql_constrol_statementContext;
  class Select_statementContext;
  class Read_only_clauseContext;
  class Update_clauseContext;
  class Optimize_for_clauseContext;
  class Concurrent_access_resolution_clauseContext;
  class Delete_statementContext;
  class Delete_statement_searched_deleteContext;
  class Table_or_view_nameContext;
  class Delete_statement_positioned_deleteContext;
  class Delete_deltalake_statementContext;
  class Insert_statementContext;
  class Insert_datalake_statementContext;
  class Values_itemContext;
  class Merge_statementContext;
  class Table_view_fullselectContext;
  class Common_table_expression_listContext;
  class Matching_conditionContext;
  class Modification_operationContext;
  class Update_operationContext;
  class Delete_operationContext;
  class Insert_operationContext;
  class Expr_null_default_listContext;
  class Isolation_levelContext;
  class Truncate_statementContext;
  class Update_statementContext;
  class Update_statement_searched_updateContext;
  class Skip_waitContext;
  class Update_statement_positioned_updateContext;
  class Include_columnsContext;
  class Assignment_clauseContext;
  class Assignment_itemContext;
  class Period_clauseContext;
  class Time_secContext;
  class Update_datalake_statementContext;
  class Grant_database_authorities_statementContext;
  class Db_privilege_listContext;
  class Db_privilegeContext;
  class GranteeContext;
  class Grantee_user_groupContext;
  class User_groupContext;
  class Grantee_listContext;
  class Grantee_list_publicContext;
  class Grantee_list_user_groupContext;
  class Grant_exemption_statementContext;
  class Exemption_privilegeContext;
  class Grant_global_variable_privileges_statementContext;
  class Variable_privilegeContext;
  class Read_writeContext;
  class With_grant_optionContext;
  class Grant_index_privileges_statementContext;
  class Grant_module_privileges_statementContext;
  class Grant_package_privileges_statementContext;
  class Package_privilege_listContext;
  class Package_privilegeContext;
  class Grant_role_statementContext;
  class Role_listContext;
  class Grant_routine_privileges_statementContext;
  class Grant_schema_privileges_statementContext;
  class Schema_privilege_listContext;
  class Schema_privilegeContext;
  class Grant_security_label_statementContext;
  class Grant_sequence_privileges_statementContext;
  class Sequence_privilege_listContext;
  class Sequence_privilegeContext;
  class Grant_server_privileges_statementContext;
  class Grant_setsessionuser_privilege_statementContext;
  class User_listContext;
  class User_authContext;
  class Grant_table_space_privileges_statementContext;
  class Grant_table_view_or_nickname_privileges_statementContext;
  class Tvn_privilege_listContext;
  class Tvn_privilegeContext;
  class Column_name_list_parenContext;
  class Column_name_listContext;
  class Grant_workload_privileges_statementContext;
  class Grant_xsr_object_privileges_statementContext;
  class Revoke_database_authorities_statementContext;
  class By_allContext;
  class Revoke_exemption_statementContext;
  class Revoke_global_variable_privileges_statementContext;
  class Revoke_index_privileges_statementContext;
  class Revoke_module_privileges_statementContext;
  class Revoke_package_privileges_statementContext;
  class Revoke_role_statementContext;
  class Revoke_routine_privileges_statementContext;
  class Revoke_schema_privileges_statementContext;
  class Revoke_security_label_statementContext;
  class Revoke_sequence_privileges_statementContext;
  class Revoke_server_privileges_statementContext;
  class Revoke_setsessionuser_privilege_statementContext;
  class Revoke_table_space_privileges_statementContext;
  class Revoke_table_view_or_nickname_privileges_statementContext;
  class Revoke_workload_privileges_statementContext;
  class Revoke_xsr_object_privileges_statementContext;
  class User_group_roleContext;
  class Rollback_statementContext;
  class Savepoint_statementContext;
  class Release_savepoint_statementContext;
  class Allocate_cursor_statementContext;
  class Alter_audit_policy_statementContext;
  class Status_specContext;
  class Normal_auditContext;
  class Alter_bufferpool_statementContext;
  class Immediate_deferredContext;
  class Alter_database_partition_group_statementContext;
  class Db_partition_group_list_itemContext;
  class Db_partition_num_numsContext;
  class Db_partitions_clauseContext;
  class Db_partition_optionsContext;
  class Alter_database_statementContext;
  class Alter_database_optsContext;
  class Alter_event_monitor_statementContext;
  class Alter_event_monitor_optsContext;
  class Alter_function_statementContext;
  class Alter_function_optsContext;
  class Function_designatorContext;
  class Data_type_listContext;
  class Data_type_list_parenContext;
  class Alter_histogram_template_statementContext;
  class Alter_index_statementContext;
  class Yes_noContext;
  class Alter_mask_statementContext;
  class Enable_disableContext;
  class Alter_method_statementContext;
  class Method_designatorContext;
  class Alter_model_statementContext;
  class Alter_module_statementContext;
  class Alter_module_optsContext;
  class Module_function_definitionContext;
  class Module_procedure_definitionContext;
  class Module_type_definitionContext;
  class Module_variable_definitionContext;
  class Module_condition_definitionContext;
  class Module_object_identificationContext;
  class Module_function_designatorContext;
  class Module_procedure_designatorContext;
  class Alter_nickname_statementContext;
  class Alter_nickname_opts_1Context;
  class Alter_nickname_opts_1_itemContext;
  class Alter_nickname_opts_2Context;
  class Alter_nickname_opts_2_itemContext;
  class Constraint_alterationContext;
  class Alter_package_statementContext;
  class Alter_package_optsContext;
  class Alter_permission_statementContext;
  class Alter_procedure_external_statementContext;
  class Alter_procedure_external_optsContext;
  class Procedure_designatorContext;
  class Alter_procedure_sourced_statementContext;
  class Parameter_alterationContext;
  class Alter_procedure_sql_statementContext;
  class Alter_schema_statementContext;
  class None_changesContext;
  class Alter_security_label_component_statementContext;
  class Add_element_clauseContext;
  class Array_element_clauseContext;
  class Tree_element_clauseContext;
  class Alter_security_policy_statementContext;
  class Alter_security_policy_optsContext;
  class Alter_sequence_statementContext;
  class Alter_sequence_optsContext;
  class Alter_server_statementContext;
  class Alter_server_optsContext;
  class Alter_service_class_statementContext;
  class Alter_service_class_optsContext;
  class Default_on_offContext;
  class Default_high_medium_lowContext;
  class Alter_stogroup_statementContext;
  class Alter_stogroup_optsContext;
  class Alter_table_statementContext;
  class Alter_table_optsContext;
  class Null_on_offContext;
  class Cascade_restrictContext;
  class Materialized_query_definitionContext;
  class Refreshable_table_optionsContext;
  class Column_alterationContext;
  class Generation_alterationContext;
  class Identity_alterationContext;
  class Generation_attributeContext;
  class As_identity_clauseContext;
  class As_identity_clause_optsContext;
  class Period_definition_alterContext;
  class Add_partitionContext;
  class Boundary_spec_alterContext;
  class Attach_partitionContext;
  class Activate_deactivateContext;
  class Alter_tablespace_statementContext;
  class Alter_tablespace_optsContext;
  class Add_clauseContext;
  class Db_container_clauseContext;
  class Db_container_clause_optsContext;
  class Drop_container_clauseContext;
  class File_deviceContext;
  class All_containers_clauseContext;
  class System_container_clauseContext;
  class StripesetContext;
  class KmContext;
  class Kmg_percentContext;
  class Alter_threshold_statementContext;
  class Alter_threshold_optsContext;
  class Alter_threshold_predicateContext;
  class Alter_threshold_exceeded_actionsContext;
  class Dt_unitsContext;
  class Dt_units_with_secondsContext;
  class Alter_trigger_statementContext;
  class Alter_trusted_context_statementContext;
  class Alter_trusted_context_optsContext;
  class Alter_trusted_context_opts_alter_optsContext;
  class Addr_clause_encryption_valContext;
  class Address_clauseContext;
  class User_clauseContext;
  class Use_for_optsContext;
  class Use_for_opts_2Context;
  class Alter_type_statementContext;
  class Alter_type_optsContext;
  class Method_identifierContext;
  class Method_optionsContext;
  class Alter_usage_list_statementContext;
  class Alter_usage_list_opts_itemContext;
  class Alter_user_mapping_statementContext;
  class Alter_user_mapping_opts_itemContext;
  class Add_setContext;
  class Alter_view_statementContext;
  class Alter_view_optsContext;
  class Alter_work_action_set_statementContext;
  class Alter_work_action_set_optsContext;
  class Work_action_alterationContext;
  class Work_action_alteration_optsContext;
  class Alter_action_types_clauseContext;
  class Threshold_predicate_clauseContext;
  class Alter_work_class_set_statementContext;
  class Alter_work_class_set_optsContext;
  class Work_class_alterationContext;
  class Work_class_alteration_optsContext;
  class For_from_to_alter_clauseContext;
  class Schema_alter_clauseContext;
  class Data_tag_alter_clauseContext;
  class Alter_workload_statementContext;
  class Alter_workload_opts_itemContext;
  class Package_executableContext;
  class Base_noneContext;
  class Extended_base_noneContext;
  class Alter_collect_activity_data_clauseContext;
  class With_optsContext;
  class Alter_collect_history_clauseContext;
  class Alter_collect_lock_wait_data_clauseContext;
  class Alter_wrapper_statementContext;
  class Alter_wrapper_opts_itemContext;
  class Alter_xsrobject_statementContext;
  class StringContext;
  class String_constantContext;
  class Numeric_constantContext;
  class Data_typeContext;
  class Anchored_data_typeContext;
  class Anchored_non_row_data_typeContext;
  class Anchored_row_data_typeContext;
  class Source_data_typeContext;
  class Data_type_constrainstContext;
  class Check_conditionContext;
  class Data_type_2Context;
  class Built_in_typeContext;
  class Integer_parenContext;
  class Integer_kmg_parenContext;
  class Char_characterContext;
  class Octets_codeunitsContext;
  class CodeunitsContext;
  class KmgContext;
  class Rs_locator_variableContext;
  class Integer_constant_listContext;
  class Integer_constantContext;
  class Integer_valueContext;
  class Positive_integerContext;
  class Bigint_valueContext;
  class Bigint_constantContext;
  class Member_numberContext;
  class Version_idContext;
  class Drop_statementContext;
  class Alias_designatorContext;
  class Service_class_designatorContext;
  class Tablespace_name_listContext;
  class Associate_locators_statementContext;
  class Audit_statementContext;
  class Begin_declare_section_statementContext;
  class Call_statementContext;
  class Arg_list_parenContext;
  class Arg_listContext;
  class ArgumentContext;
  class Case_statementContext;
  class Searched_case_statement_when_clauseContext;
  class Simple_case_statement_when_clauseContext;
  class Close_statementContext;
  class Comment_statementContext;
  class Column_commentContext;
  class Comment_objectsContext;
  class Commit_statementContext;
  class Connect_type_1_statementContext;
  class AuthorizationContext;
  class PasswordsContext;
  class Lock_blockContext;
  class AccesstokenContext;
  class TokenContext;
  class Api_keyContext;
  class Token_typeContext;
  class Declare_cursor_statementContext;
  class Declare_global_temporary_table_statementContext;
  class Describe_statementContext;
  class Xquery_statementContext;
  class Describe_input_statementContext;
  class Describe_output_statementContext;
  class Disconnect_statementContext;
  class End_declare_section_statementContext;
  class Execute_statementContext;
  class Host_variable_expressionContext;
  class Assignment_targetContext;
  class Execute_immediate_statementContext;
  class Explain_statementContext;
  class Explainable_sql_statementContext;
  class Fetch_statementContext;
  class Flush_bufferpools_statementContext;
  class Flush_event_monitor_statementContext;
  class Flush_federated_cache_statementContext;
  class Flush_optimization_profile_cache_statementContext;
  class Flush_package_cache_statementContext;
  class Flush_authentication_cache_statementContext;
  class Free_locator_statementContext;
  class Get_diagnostics_statementContext;
  class Statement_informationContext;
  class Condition_informationContext;
  class Condition_var_assignmentContext;
  class Lock_table_statementContext;
  class Pipe_statementContext;
  class Refresh_table_statementContext;
  class Release_connection_statementContext;
  class Rename_statementContext;
  class Rename_stogroup_statementContext;
  class Rename_tablespace_statementContext;
  class Set_statementContext;
  class Access_mode_clauseContext;
  class Cascade_clauseContext;
  class To_descendent_typesContext;
  class Table_type_listContext;
  class Table_typeContext;
  class Table_checked_options_listContext;
  class Table_checked_optionsContext;
  class Online_optionsContext;
  class Query_optimization_optionsContext;
  class Check_optionsContext;
  class Incremental_optionsContext;
  class Exception_clauseContext;
  class In_table_use_clauseContext;
  class Table_unchecked_optionsContext;
  class Full_accessContext;
  class Integrity_optionsContext;
  class Integrity_options_itemContext;
  class Var_def_listContext;
  class Var_defContext;
  class Expr_nullContext;
  class Expr_null_defaultContext;
  class Array_indexContext;
  class Row_fullselectContext;
  class Target_variableContext;
  class Target_cursor_variableContext;
  class Target_row_variableContext;
  class Row_array_element_specificationContext;
  class Row_field_referenceContext;
  class Field_referenceContext;
  class Search_conditionContext;
  class PredicateContext;
  class According_to_clauseContext;
  class Xml_schema_identification_listContext;
  class Xml_schema_identificationContext;
  class Fullselect_in_parenthesesContext;
  class Some_any_allContext;
  class Row_value_expressionContext;
  class Comparison_operatorContext;
  class Row_expressionContext;
  class Path_opt_listContext;
  class Path_optContext;
  class Pkg_opt_listContext;
  class Pkg_optContext;
  class Maintain_opt_listContext;
  class Maintain_optContext;
  class VariableContext;
  class Host_variableContext;
  class Set_integrity_statementContext;
  class Transfer_ownership_statementContext;
  class ObjectsContext;
  class Whenever_statementContext;
  class For_statementContext;
  class Goto_statementContext;
  class If_statementContext;
  class Include_statementContext;
  class Resignal_statementContext;
  class Signal_informationContext;
  class Diagnostic_string_constantContext;
  class Signal_statementContext;
  class Sqlstate_string_constantContext;
  class Sqlstate_string_variableContext;
  class Signal_information_2Context;
  class Diagnostic_string_expressionContext;
  class Iterate_statementContext;
  class Leave_statementContext;
  class Loop_statementContext;
  class Open_statementContext;
  class Variable_or_expressionContext;
  class Select_into_statementContext;
  class Values_into_statementContext;
  class Prepare_statementContext;
  class Repeat_statementContext;
  class Return_statementContext;
  class While_statementContext;
  class Sql_routine_statementContext;
  class Common_table_expressionContext;
  class Create_alias_statementContext;
  class Table_aliasContext;
  class Module_aliasContext;
  class Sequence_aliasContext;
  class Or_replaceContext;
  class Create_audit_policy_statementContext;
  class Audit_policy_optsContext;
  class Audit_policy_categories_optsContext;
  class Create_bufferpool_statementContext;
  class Bufferpool_optsContext;
  class Except_clauseContext;
  class Member_listContext;
  class Member_list_itemContext;
  class Create_database_partition_group_statementContext;
  class Create_event_monitor_statementContext;
  class Create_event_monitor_activities_statementContext;
  class Formatted_event_table_info_3Context;
  class Create_event_monitor_change_history_statementContext;
  class Event_control_listContext;
  class Event_controlContext;
  class Create_event_monitor_locking_statementContext;
  class Create_event_monitor_package_cache_statementContext;
  class Filter_and_collection_optionsContext;
  class Event_conditionContext;
  class Event_condition_itemContext;
  class Create_event_monitor_statistics_statementContext;
  class Event_monitor_statistics_optsContext;
  class Create_event_monitor_threshold_violations_statementContext;
  class Formatted_event_table_info_2Context;
  class File_optionsContext;
  class Event_monitor_threshold_optsContext;
  class PagesContext;
  class Create_event_monitor_unit_of_workContext;
  class Formatted_event_table_infoContext;
  class Autostart_manualstartContext;
  class Evm_groupContext;
  class Target_table_optionsContext;
  class Create_external_table_statementContext;
  class Ext_table_optionContext;
  class Ext_table_option_valueContext;
  class Create_function_statementContext;
  class Create_function_aggregate_interface_statementContext;
  class Agg_fn_param_declContext;
  class Agg_fn_option_listContext;
  class State_variable_declarationContext;
  class Create_function_external_scalar_statementContext;
  class Ext_scalar_param_declContext;
  class Ext_scalar_option_listContext;
  class Ext_scalar_option_list_itemContext;
  class Predicate_specificationContext;
  class Data_filterContext;
  class Index_exploitationContext;
  class Exploitation_ruleContext;
  class Create_function_external_table_statementContext;
  class Ext_table_param_decl_listContext;
  class Ext_table_param_declContext;
  class Ext_table_option_listContext;
  class Ext_table_option_list_itemContext;
  class Create_function_old_db_external_function_statementContext;
  class Oledb_option_listContext;
  class Oledb_option_list_itemContext;
  class Create_function_sourced_or_template_statementContext;
  class Fn_return_optsContext;
  class Fn_return_opts_itemContext;
  class Template_optsContext;
  class Template_opts_itemContext;
  class Ascii_unicodeContext;
  class Param_decl_list_3Context;
  class Param_decl_3Context;
  class Create_function_sql_scalar_table_or_row_statementContext;
  class Param_decl_list_2Context;
  class Param_decl_2Context;
  class Sql_function_bodyContext;
  class Create_function_mapping_statementContext;
  class Function_optionsContext;
  class Function_option_nameContext;
  class Create_global_temporary_table_statementContext;
  class Create_global_temporary_table_optsContext;
  class Create_global_temporary_table_itemContext;
  class Delete_preserveContext;
  class Create_histogram_template_statementContext;
  class Create_index_statementContext;
  class Index_col_optsContext;
  class Index_col_opts_itemContext;
  class Key_expressionContext;
  class Create_index_extension_statementContext;
  class Param_listContext;
  class Index_maintenanceContext;
  class Table_function_invocationContext;
  class Index_searchContext;
  class Search_method_definitionContext;
  class Create_mask_statementContext;
  class Case_expressionContext;
  class Range_producing_funciton_invocationContext;
  class Index_filtering_function_invocationContext;
  class Create_method_statementContext;
  class Method_optsContext;
  class Method_opts_itemContext;
  class Method_signatureContext;
  class Method_param_listContext;
  class Data_type_3Context;
  class Data_type_4Context;
  class Sql_method_bodyContext;
  class Compound_sql_inlinedContext;
  class Sql_statement_inlinedContext;
  class Compound_sql_compiledContext;
  class Sql_statement_compiledContext;
  class Create_module_statementContext;
  class Create_nickname_statementContext;
  class Nick_name_option_nameContext;
  class Remote_object_nameContext;
  class Non_relational_data_definitionContext;
  class Nick_name_column_listContext;
  class Nick_name_column_list_itemContext;
  class Nick_name_column_definitionContext;
  class Nick_name_column_optionsContext;
  class Federated_column_optionsContext;
  class Column_option_nameContext;
  class Create_permission_statementContext;
  class Create_procedure_statementContext;
  class Create_procedure_external_statementContext;
  class Proc_ext_param_listContext;
  class Proc_ext_paramContext;
  class Option_list_2Context;
  class Option_list_2_itemContext;
  class Create_procedure_sourced_statementContext;
  class Source_procedure_clauseContext;
  class Source_object_nameContext;
  class Option_list_1Context;
  class Option_list_1_itemContext;
  class Result_set_element_numberContext;
  class Unique_idContext;
  class Create_procedure_sql_statementContext;
  class Proc_parameter_listContext;
  class Proc_parameter_list_itemContext;
  class In_out_inoutContext;
  class Option_listContext;
  class Option_list_itemContext;
  class Sql_procedure_bodyContext;
  class Create_role_statementContext;
  class Create_schema_statementContext;
  class Schema_sql_statementContext;
  class Create_security_label_component_statementContext;
  class Array_clauseContext;
  class Set_clauseContext;
  class Tree_clauseContext;
  class Tree_clause_itemContext;
  class Create_security_label_statementContext;
  class Create_security_label_itemContext;
  class Create_security_policy_statementContext;
  class Create_sequence_statementContext;
  class Create_sequence_optsContext;
  class Create_sequence_opts_itemContext;
  class Create_service_class_statementContext;
  class High_medium_lowContext;
  class On_offContext;
  class Soft_hardContext;
  class Create_server_statementContext;
  class Password_Context;
  class Create_stogroup_statementContext;
  class Create_stogroup_optsContext;
  class Create_synonym_statementContext;
  class Create_table_statementContext;
  class Create_table_optsContext;
  class Table_option_listContext;
  class Table_option_list_itemContext;
  class Table_option_nameContext;
  class Element_listContext;
  class Element_list_itemContext;
  class Column_definitionContext;
  class Period_definitionContext;
  class Unique_constraintContext;
  class Referential_constraintContext;
  class Check_constraintContext;
  class Column_optionsContext;
  class Column_options_itemContext;
  class References_clauseContext;
  class Rule_clauseContext;
  class Constraint_attributesContext;
  class Default_clauseContext;
  class Default_valuesContext;
  class Generated_clauseContext;
  class Datetime_special_registerContext;
  class User_special_registerContext;
  class Cast_functionContext;
  class Identity_optionsContext;
  class Identity_options_itemContext;
  class As_row_change_timestamp_clauseContext;
  class As_generated_expression_clauseContext;
  class Generation_expressionContext;
  class As_row_transaction_timestamp_clauseContext;
  class As_row_transaction_start_id_clauseContext;
  class Oid_column_definitionContext;
  class Range_partition_specContext;
  class Partition_expression_listContext;
  class Partition_expressionContext;
  class Partition_element_listContext;
  class Partition_elementContext;
  class Boundary_specContext;
  class Partition_tablespace_optionsContext;
  class Duration_labelContext;
  class Starting_clauseContext;
  class Const_min_max_listContext;
  class Const_min_maxContext;
  class Ending_clauseContext;
  class Typed_table_optionsContext;
  class Typed_element_listContext;
  class Typed_element_list_itemContext;
  class As_result_tableContext;
  class Copy_optionsContext;
  class Materialized_query_optionsContext;
  class Staging_table_definitionContext;
  class Dimensions_clauseContext;
  class Col_namesContext;
  class Sequence_key_specContext;
  class Sequence_key_spec_listContext;
  class Sequence_key_spec_list_itemContext;
  class Tablespace_clausesContext;
  class Distribution_clauseContext;
  class Partitioning_clauseContext;
  class If_not_existsContext;
  class Create_tablespace_statementContext;
  class Storage_groupContext;
  class Size_attributesContext;
  class System_containersContext;
  class Container_string_listContext;
  class Database_containersContext;
  class Container_clauseContext;
  class Container_clause_listContext;
  class Container_clause_list_itemContext;
  class On_db_partitions_clauseContext;
  class Db_partition_number_listContext;
  class Db_partition_number_list_itemContext;
  class Db_partition_numberContext;
  class Number_of_pagesContext;
  class Number_of_filesContext;
  class Number_of_millisecondsContext;
  class Number_megabytes_per_secondContext;
  class Create_threshold_statementContext;
  class Threshold_domainContext;
  class Statement_textContext;
  class Executable_idContext;
  class Enforcement_scopeContext;
  class Threshold_predicateContext;
  class Checking_everyContext;
  class Hour_to_secondsContext;
  class Day_to_minutesContext;
  class Day_to_secondsContext;
  class Threshold_exceeded_actions_2Context;
  class Details_sectionContext;
  class Remap_activity_actionContext;
  class Create_transform_statementContext;
  class Tranform_listContext;
  class Tranform_list_itemContext;
  class Transform_group_listContext;
  class Transform_group_list_itemContext;
  class Create_trigger_statementContext;
  class Ref_listContext;
  class Ref_list_itemContext;
  class Old_newContext;
  class Correlation_nameContext;
  class IdentifierContext;
  class Trigger_eventContext;
  class Triggered_actionContext;
  class Sql_procedure_statementContext;
  class Sql_function_statementContext;
  class Create_trusted_context_statementContext;
  class Attr_listContext;
  class Attr_list_itemContext;
  class Auth_listContext;
  class Auth_list_itemContext;
  class Address_valueContext;
  class Encryption_valueContext;
  class Create_type_statementContext;
  class Create_type_array_statementContext;
  class Create_type_cursor_statementContext;
  class Create_type_distinct_statementContext;
  class Create_type_row_statementContext;
  class Field_definition_list_parenContext;
  class Field_definition_listContext;
  class Field_definitionContext;
  class Create_type_structured_statementContext;
  class Structured_type_seqContext;
  class Attribute_definition_list_parenContext;
  class Attribute_definition_listContext;
  class Attribute_definitionContext;
  class Method_specification_listContext;
  class Method_specificationContext;
  class Method_specification_seqContext;
  class As_locatorContext;
  class Param_decl_list_parenContext;
  class Param_decl_listContext;
  class Param_declContext;
  class Sql_routine_characteristicsContext;
  class External_routine_characteristicsContext;
  class LengthContext;
  class Rep_typeContext;
  class VarcharsContext;
  class VarbinariesContext;
  class For_bit_dataContext;
  class Lob_optionsContext;
  class Create_type_mapping_statementContext;
  class For_bit_data_precisionContext;
  class PrecisionContext;
  class ScaleContext;
  class Precision_scale_compContext;
  class From_toContext;
  class Data_source_data_typeContext;
  class Local_data_typeContext;
  class Remote_serverContext;
  class Server_versionContext;
  class Server_typeContext;
  class VersionContext;
  class ReleaseContext;
  class ModContext;
  class Create_usage_list_statementContext;
  class Create_user_mapping_statementContext;
  class User_mapping_options_parenContext;
  class User_mapping_optionsContext;
  class Create_variable_statementContext;
  class Constant_Context;
  class Special_registerContext;
  class Global_variableContext;
  class Data_type_1Context;
  class Cursor_value_constructorContext;
  class Anchored_variable_data_typeContext;
  class HoldabilityContext;
  class ReturnabilityContext;
  class Create_view_statementContext;
  class Create_view_seqContext;
  class FullselectContext;
  class SubselectContext;
  class Select_clauseContext;
  class Select_clause_itemContext;
  class From_clauseContext;
  class Table_referenceContext;
  class Table_reference_listContext;
  class Singles_table_referenceContext;
  class Period_specificationContext;
  class ValueContext;
  class Correlation_clauseContext;
  class Tablesample_clauseContext;
  class Numeric_expressionContext;
  class Single_view_referenceContext;
  class Single_nickname_referenceContext;
  class Only_table_referenceContext;
  class Outer_table_referenceContext;
  class Analyze_table_referenceContext;
  class Implementation_clauseContext;
  class Nested_table_referenceContext;
  class Continue_handlerContext;
  class Specific_condition_valueContext;
  class Data_change_table_referenceContext;
  class Searched_update_statementContext;
  class Searched_delete_statementContext;
  class Final_newContext;
  class Final_new_oldContext;
  class Table_function_referenceContext;
  class Table_udf_cardinality_clauseContext;
  class Typed_correlation_clauseContext;
  class Column_name_data_typeContext;
  class Collection_derived_tableContext;
  class Table_functionContext;
  class Xmltable_expressionContext;
  class Xmltable_functionContext;
  class Joined_tableContext;
  class Join_conditionContext;
  class OuterContext;
  class External_table_referenceContext;
  class Column_definition_2Context;
  class File_nameContext;
  class Where_clauseContext;
  class Group_by_clauseContext;
  class Group_by_clause_optsContext;
  class Grouping_expressionContext;
  class Grouping_setsContext;
  class Super_groupsContext;
  class Grant_totalContext;
  class Having_clauseContext;
  class Order_by_clauseContext;
  class Order_by_clause_optsContext;
  class Table_designatorContext;
  class Asc_descContext;
  class First_lastContext;
  class Sort_keyContext;
  class Simple_column_nameContext;
  class Simple_integerContext;
  class Sork_key_expressionContext;
  class Offset_clauseContext;
  class Offset_row_countContext;
  class Fetch_clauseContext;
  class Fetch_row_countContext;
  class Row_rowsContext;
  class Isolation_clauseContext;
  class Lock_request_clauseContext;
  class Values_clauseContext;
  class Values_rowContext;
  class Root_view_definitionContext;
  class Subview_definitionContext;
  class Oid_columnContext;
  class With_optionsContext;
  class With_option_defContext;
  class With_option_scope_defContext;
  class Under_clauseContext;
  class Create_work_action_set_statementContext;
  class Work_action_definition_list_parenContext;
  class Work_action_definition_listContext;
  class Work_action_definitionContext;
  class Action_types_clauseContext;
  class Threshold_types_clauseContext;
  class Second_secondsContext;
  class Hours_minutesContext;
  class Threshold_exceeded_actionsContext;
  class Collect_activity_data_clauseContext;
  class With_withoutContext;
  class Histogram_templace_clauseContext;
  class Create_work_class_set_statementContext;
  class Work_class_definition_list_parenContext;
  class Work_class_definition_listContext;
  class Work_class_definitionContext;
  class Work_attributesContext;
  class Position_clauseContext;
  class Position_Context;
  class For_from_to_clauseContext;
  class From_valueContext;
  class To_valueContext;
  class Data_tag_clauseContext;
  class Schema_clauseContext;
  class Create_workload_statementContext;
  class Pkg_exec_seqContext;
  class Position_clause_2Context;
  class Connection_attributesContext;
  class String_listContext;
  class String_list_parenContext;
  class Workload_attributesContext;
  class DegreeContext;
  class Allow_disallowContext;
  class Collect_on_clauseContext;
  class Collect_details_clauseContext;
  class Collect_lock_wait_optionsContext;
  class Wait_timeContext;
  class Create_wrapper_statementContext;
  class Wrapper_option_listContext;
  class Wrapper_optionContext;
  class ExpressionContext;
  class Function_invocationContext;
  class All_distinctContext;
  class Scalar_fullselectContext;
  class Cast_specificationContext;
  class Cursor_cast_specificationContext;
  class Row_cast_specificationContext;
  class Interval_cast_specificationContext;
  class Xmlcast_specificationContext;
  class Array_element_specificationContext;
  class Array_constructorContext;
  class Method_invocationContext;
  class Olap_specificationContext;
  class Ordered_olap_specificationContext;
  class Window_partition_clauseContext;
  class Window_order_clauseContext;
  class Numbering_specificationContext;
  class Aggregation_specificationContext;
  class Olap_aggregate_functionContext;
  class First_value_functionContext;
  class Last_value_functionContext;
  class Nth_value_functionContext;
  class Ratio_to_report_functionContext;
  class Ignore_respect_nullsContext;
  class From_first_lastContext;
  class Window_aggregation_group_clauseContext;
  class Group_startContext;
  class Group_betweenContext;
  class Group_bound1Context;
  class Group_bound2Context;
  class Group_endContext;
  class Row_change_expressionContext;
  class Sequence_referenceContext;
  class Subtype_treatmentContext;
  class Expression_listContext;
  class Expression_list_in_parenthesesContext;
  class Id_Context;
  class Exposed_nameContext;
  class NameContext;
  class LabelContext;
  class Host_labelContext;
  class Library_nameContext;
  class Array_type_nameContext;
  class Attribute_nameContext;
  class Row_type_nameContext;
  class Authorization_nameContext;
  class Boolean_variable_nameContext;
  class Array_variable_nameContext;
  class Column_nameContext;
  class Constraint_nameContext;
  class Descriptor_nameContext;
  class Distinct_type_nameContext;
  class Cursor_nameContext;
  class Cursor_type_nameContext;
  class Condition_nameContext;
  class Data_source_nameContext;
  class Expression_nameContext;
  class Group_nameContext;
  class Policy_nameContext;
  class Bufferpool_nameContext;
  class Db_partition_nameContext;
  class Database_nameContext;
  class Event_monitor_nameContext;
  class Field_nameContext;
  class For_loop_nameContext;
  class Function_nameContext;
  class Function_mapping_nameContext;
  class Global_variable_nameContext;
  class Hierarchy_nameContext;
  class Host_variable_nameContext;
  class Parameter_markerContext;
  class Template_nameContext;
  class Index_nameContext;
  class Index_extension_nameContext;
  class Input_descriptor_nameContext;
  class Mask_nameContext;
  class Method_nameContext;
  class Model_nameContext;
  class Module_nameContext;
  class New_ownerContext;
  class Nick_nameContext;
  class Object_nameContext;
  class Oid_column_nameContext;
  class Optimization_profile_nameContext;
  class Package_nameContext;
  class Partition_nameContext;
  class Path_nameContext;
  class Permission_nameContext;
  class Pipe_nameContext;
  class Procedure_nameContext;
  class Result_descriptor_nameContext;
  class Role_nameContext;
  class Root_table_nameContext;
  class Root_view_nameContext;
  class Row_variable_nameContext;
  class Source_schema_nameContext;
  class Source_package_nameContext;
  class Source_procedure_nameContext;
  class Sql_parameter_nameContext;
  class Sql_variable_nameContext;
  class Transition_variable_nameContext;
  class Savepoint_nameContext;
  class Specific_nameContext;
  class SchemaContext;
  class Schema_nameContext;
  class Search_method_nameContext;
  class Server_nameContext;
  class Server_option_nameContext;
  class Session_authorization_nameContext;
  class Component_nameContext;
  class Sec_label_comp_nameContext;
  class Security_policy_nameContext;
  class Security_label_nameContext;
  class Sequence_nameContext;
  class Service_class_nameContext;
  class Service_superclass_nameContext;
  class Storagegroup_nameContext;
  class Supertype_nameContext;
  class Superview_nameContext;
  class Service_subclass_nameContext;
  class Statement_nameContext;
  class Table_nameContext;
  class Tablespace_nameContext;
  class Target_identifierContext;
  class Threshold_nameContext;
  class Trigger_nameContext;
  class Context_nameContext;
  class Usage_list_nameContext;
  class Type_nameContext;
  class Type_mapping_nameContext;
  class Typed_table_nameContext;
  class Typed_view_nameContext;
  class User_mapping_option_nameContext;
  class View_nameContext;
  class Variable_nameContext;
  class Work_action_set_nameContext;
  class Work_class_set_nameContext;
  class Workload_nameContext;
  class Work_action_nameContext;
  class Work_class_nameContext;
  class Wrapper_nameContext;
  class Wrapper_option_nameContext;
  class Xsrobject_nameContext;
  class Parameter_nameContext;
  class Cursor_variable_nameContext;
  class Alias_nameContext;
  class Db_partition_group_nameContext;
  class Source_index_nameContext;
  class Source_table_nameContext;
  class Source_storagegroup_nameContext;
  class Target_storagegroup_nameContext;
  class Source_tablespace_nameContext;
  class Target_tablespace_nameContext;
  class Unqualified_function_nameContext;
  class Unqualified_procedure_nameContext;
  class Unqualified_specific_nameContext;
  class Period_nameContext;
  class History_table_nameContext;
  class Xml_schema_nameContext;
  class TodoContext; 

  class  Db2_fileContext : public antlr4::ParserRuleContext {
  public:
    Db2_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    BatchContext *batch();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db2_fileContext* db2_file();

  class  BatchContext : public antlr4::ParserRuleContext {
  public:
    BatchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_statementContext *> sql_statement();
    Sql_statementContext* sql_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BatchContext* batch();

  class  Sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sql_schema_statementContext *sql_schema_statement();
    Sql_data_change_statementContext *sql_data_change_statement();
    Sql_data_statementContext *sql_data_statement();
    Sql_transaction_statementContext *sql_transaction_statement();
    Sql_connection_statementContext *sql_connection_statement();
    Sql_dynamic_statementContext *sql_dynamic_statement();
    Sql_session_statementContext *sql_session_statement();
    Sql_embedded_host_language_statementContext *sql_embedded_host_language_statement();
    Sql_constrol_statementContext *sql_constrol_statement();
    Select_statementContext *select_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_statementContext* sql_statement();

  class  Sql_schema_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_schema_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alter_audit_policy_statementContext *alter_audit_policy_statement();
    Alter_bufferpool_statementContext *alter_bufferpool_statement();
    Alter_database_statementContext *alter_database_statement();
    Alter_event_monitor_statementContext *alter_event_monitor_statement();
    Alter_database_partition_group_statementContext *alter_database_partition_group_statement();
    Alter_function_statementContext *alter_function_statement();
    Alter_histogram_template_statementContext *alter_histogram_template_statement();
    Alter_index_statementContext *alter_index_statement();
    Alter_mask_statementContext *alter_mask_statement();
    Alter_method_statementContext *alter_method_statement();
    Alter_model_statementContext *alter_model_statement();
    Alter_module_statementContext *alter_module_statement();
    Alter_nickname_statementContext *alter_nickname_statement();
    Alter_package_statementContext *alter_package_statement();
    Alter_permission_statementContext *alter_permission_statement();
    Alter_procedure_external_statementContext *alter_procedure_external_statement();
    Alter_procedure_sourced_statementContext *alter_procedure_sourced_statement();
    Alter_procedure_sql_statementContext *alter_procedure_sql_statement();
    Alter_schema_statementContext *alter_schema_statement();
    Alter_security_label_component_statementContext *alter_security_label_component_statement();
    Alter_security_policy_statementContext *alter_security_policy_statement();
    Alter_sequence_statementContext *alter_sequence_statement();
    Alter_server_statementContext *alter_server_statement();
    Alter_service_class_statementContext *alter_service_class_statement();
    Alter_stogroup_statementContext *alter_stogroup_statement();
    Alter_table_statementContext *alter_table_statement();
    Alter_tablespace_statementContext *alter_tablespace_statement();
    Alter_threshold_statementContext *alter_threshold_statement();
    Alter_trigger_statementContext *alter_trigger_statement();
    Alter_trusted_context_statementContext *alter_trusted_context_statement();
    Alter_type_statementContext *alter_type_statement();
    Alter_usage_list_statementContext *alter_usage_list_statement();
    Alter_user_mapping_statementContext *alter_user_mapping_statement();
    Alter_view_statementContext *alter_view_statement();
    Alter_work_action_set_statementContext *alter_work_action_set_statement();
    Alter_work_class_set_statementContext *alter_work_class_set_statement();
    Alter_workload_statementContext *alter_workload_statement();
    Alter_wrapper_statementContext *alter_wrapper_statement();
    Alter_xsrobject_statementContext *alter_xsrobject_statement();
    Audit_statementContext *audit_statement();
    Comment_statementContext *comment_statement();
    Create_alias_statementContext *create_alias_statement();
    Create_audit_policy_statementContext *create_audit_policy_statement();
    Create_bufferpool_statementContext *create_bufferpool_statement();
    Create_database_partition_group_statementContext *create_database_partition_group_statement();
    Create_event_monitor_statementContext *create_event_monitor_statement();
    Create_event_monitor_activities_statementContext *create_event_monitor_activities_statement();
    Create_event_monitor_change_history_statementContext *create_event_monitor_change_history_statement();
    Create_event_monitor_locking_statementContext *create_event_monitor_locking_statement();
    Create_event_monitor_package_cache_statementContext *create_event_monitor_package_cache_statement();
    Create_event_monitor_statistics_statementContext *create_event_monitor_statistics_statement();
    Create_event_monitor_threshold_violations_statementContext *create_event_monitor_threshold_violations_statement();
    Create_external_table_statementContext *create_external_table_statement();
    Create_function_statementContext *create_function_statement();
    Create_function_aggregate_interface_statementContext *create_function_aggregate_interface_statement();
    Create_function_external_scalar_statementContext *create_function_external_scalar_statement();
    Create_function_external_table_statementContext *create_function_external_table_statement();
    Create_function_old_db_external_function_statementContext *create_function_old_db_external_function_statement();
    Create_function_sourced_or_template_statementContext *create_function_sourced_or_template_statement();
    Create_function_sql_scalar_table_or_row_statementContext *create_function_sql_scalar_table_or_row_statement();
    Create_function_mapping_statementContext *create_function_mapping_statement();
    Create_global_temporary_table_statementContext *create_global_temporary_table_statement();
    Create_histogram_template_statementContext *create_histogram_template_statement();
    Create_index_statementContext *create_index_statement();
    Create_index_extension_statementContext *create_index_extension_statement();
    Create_mask_statementContext *create_mask_statement();
    Create_method_statementContext *create_method_statement();
    Create_module_statementContext *create_module_statement();
    Create_nickname_statementContext *create_nickname_statement();
    Create_permission_statementContext *create_permission_statement();
    Create_procedure_statementContext *create_procedure_statement();
    Create_procedure_external_statementContext *create_procedure_external_statement();
    Create_procedure_sourced_statementContext *create_procedure_sourced_statement();
    Create_procedure_sql_statementContext *create_procedure_sql_statement();
    Create_role_statementContext *create_role_statement();
    Create_schema_statementContext *create_schema_statement();
    Create_security_label_component_statementContext *create_security_label_component_statement();
    Create_security_label_statementContext *create_security_label_statement();
    Create_security_policy_statementContext *create_security_policy_statement();
    Create_sequence_statementContext *create_sequence_statement();
    Create_server_statementContext *create_server_statement();
    Create_service_class_statementContext *create_service_class_statement();
    Create_stogroup_statementContext *create_stogroup_statement();
    Create_synonym_statementContext *create_synonym_statement();
    Create_table_statementContext *create_table_statement();
    Create_tablespace_statementContext *create_tablespace_statement();
    Create_threshold_statementContext *create_threshold_statement();
    Create_transform_statementContext *create_transform_statement();
    Create_trigger_statementContext *create_trigger_statement();
    Create_trusted_context_statementContext *create_trusted_context_statement();
    Create_type_statementContext *create_type_statement();
    Create_type_array_statementContext *create_type_array_statement();
    Create_type_cursor_statementContext *create_type_cursor_statement();
    Create_type_distinct_statementContext *create_type_distinct_statement();
    Create_type_row_statementContext *create_type_row_statement();
    Create_type_structured_statementContext *create_type_structured_statement();
    Create_type_mapping_statementContext *create_type_mapping_statement();
    Create_usage_list_statementContext *create_usage_list_statement();
    Create_user_mapping_statementContext *create_user_mapping_statement();
    Create_variable_statementContext *create_variable_statement();
    Create_view_statementContext *create_view_statement();
    Create_work_action_set_statementContext *create_work_action_set_statement();
    Create_work_class_set_statementContext *create_work_class_set_statement();
    Create_workload_statementContext *create_workload_statement();
    Create_wrapper_statementContext *create_wrapper_statement();
    Drop_statementContext *drop_statement();
    Grant_database_authorities_statementContext *grant_database_authorities_statement();
    Grant_exemption_statementContext *grant_exemption_statement();
    Grant_global_variable_privileges_statementContext *grant_global_variable_privileges_statement();
    Grant_index_privileges_statementContext *grant_index_privileges_statement();
    Grant_module_privileges_statementContext *grant_module_privileges_statement();
    Grant_package_privileges_statementContext *grant_package_privileges_statement();
    Grant_role_statementContext *grant_role_statement();
    Grant_routine_privileges_statementContext *grant_routine_privileges_statement();
    Grant_schema_privileges_statementContext *grant_schema_privileges_statement();
    Grant_security_label_statementContext *grant_security_label_statement();
    Grant_sequence_privileges_statementContext *grant_sequence_privileges_statement();
    Grant_server_privileges_statementContext *grant_server_privileges_statement();
    Grant_setsessionuser_privilege_statementContext *grant_setsessionuser_privilege_statement();
    Grant_table_space_privileges_statementContext *grant_table_space_privileges_statement();
    Grant_table_view_or_nickname_privileges_statementContext *grant_table_view_or_nickname_privileges_statement();
    Grant_workload_privileges_statementContext *grant_workload_privileges_statement();
    Grant_xsr_object_privileges_statementContext *grant_xsr_object_privileges_statement();
    Refresh_table_statementContext *refresh_table_statement();
    Rename_statementContext *rename_statement();
    Rename_stogroup_statementContext *rename_stogroup_statement();
    Rename_tablespace_statementContext *rename_tablespace_statement();
    Revoke_database_authorities_statementContext *revoke_database_authorities_statement();
    Revoke_exemption_statementContext *revoke_exemption_statement();
    Revoke_global_variable_privileges_statementContext *revoke_global_variable_privileges_statement();
    Revoke_index_privileges_statementContext *revoke_index_privileges_statement();
    Revoke_module_privileges_statementContext *revoke_module_privileges_statement();
    Revoke_package_privileges_statementContext *revoke_package_privileges_statement();
    Revoke_role_statementContext *revoke_role_statement();
    Revoke_routine_privileges_statementContext *revoke_routine_privileges_statement();
    Revoke_schema_privileges_statementContext *revoke_schema_privileges_statement();
    Revoke_security_label_statementContext *revoke_security_label_statement();
    Revoke_sequence_privileges_statementContext *revoke_sequence_privileges_statement();
    Revoke_server_privileges_statementContext *revoke_server_privileges_statement();
    Revoke_setsessionuser_privilege_statementContext *revoke_setsessionuser_privilege_statement();
    Revoke_table_space_privileges_statementContext *revoke_table_space_privileges_statement();
    Revoke_table_view_or_nickname_privileges_statementContext *revoke_table_view_or_nickname_privileges_statement();
    Revoke_workload_privileges_statementContext *revoke_workload_privileges_statement();
    Revoke_xsr_object_privileges_statementContext *revoke_xsr_object_privileges_statement();
    Set_integrity_statementContext *set_integrity_statement();
    Transfer_ownership_statementContext *transfer_ownership_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_schema_statementContext* sql_schema_statement();

  class  Sql_data_change_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_data_change_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delete_statementContext *delete_statement();
    Delete_deltalake_statementContext *delete_deltalake_statement();
    Insert_statementContext *insert_statement();
    Insert_datalake_statementContext *insert_datalake_statement();
    Merge_statementContext *merge_statement();
    Truncate_statementContext *truncate_statement();
    Update_statementContext *update_statement();
    Update_datalake_statementContext *update_datalake_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_data_change_statementContext* sql_data_change_statement();

  class  Sql_data_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_data_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Allocate_cursor_statementContext *allocate_cursor_statement();
    Associate_locators_statementContext *associate_locators_statement();
    Close_statementContext *close_statement();
    Declare_cursor_statementContext *declare_cursor_statement();
    Fetch_statementContext *fetch_statement();
    Flush_authentication_cache_statementContext *flush_authentication_cache_statement();
    Flush_bufferpools_statementContext *flush_bufferpools_statement();
    Flush_event_monitor_statementContext *flush_event_monitor_statement();
    Flush_federated_cache_statementContext *flush_federated_cache_statement();
    Flush_optimization_profile_cache_statementContext *flush_optimization_profile_cache_statement();
    Flush_package_cache_statementContext *flush_package_cache_statement();
    Free_locator_statementContext *free_locator_statement();
    Lock_table_statementContext *lock_table_statement();
    Open_statementContext *open_statement();
    Select_into_statementContext *select_into_statement();
    Values_into_statementContext *values_into_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_data_statementContext* sql_data_statement();

  class  Sql_transaction_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_transaction_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Commit_statementContext *commit_statement();
    Release_savepoint_statementContext *release_savepoint_statement();
    Rollback_statementContext *rollback_statement();
    Savepoint_statementContext *savepoint_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_transaction_statementContext* sql_transaction_statement();

  class  Sql_connection_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_connection_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Connect_type_1_statementContext *connect_type_1_statement();
    Disconnect_statementContext *disconnect_statement();
    Release_connection_statementContext *release_connection_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_connection_statementContext* sql_connection_statement();

  class  Sql_dynamic_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_dynamic_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Describe_statementContext *describe_statement();
    Describe_input_statementContext *describe_input_statement();
    Describe_output_statementContext *describe_output_statement();
    Execute_statementContext *execute_statement();
    Execute_immediate_statementContext *execute_immediate_statement();
    Prepare_statementContext *prepare_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_dynamic_statementContext* sql_dynamic_statement();

  class  Sql_session_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_session_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declare_global_temporary_table_statementContext *declare_global_temporary_table_statement();
    Explain_statementContext *explain_statement();
    Set_statementContext *set_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_session_statementContext* sql_session_statement();

  class  Sql_embedded_host_language_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_embedded_host_language_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Begin_declare_section_statementContext *begin_declare_section_statement();
    End_declare_section_statementContext *end_declare_section_statement();
    Get_diagnostics_statementContext *get_diagnostics_statement();
    Include_statementContext *include_statement();
    Whenever_statementContext *whenever_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_embedded_host_language_statementContext* sql_embedded_host_language_statement();

  class  Sql_constrol_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_constrol_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Call_statementContext *call_statement();
    Case_statementContext *case_statement();
    For_statementContext *for_statement();
    Goto_statementContext *goto_statement();
    If_statementContext *if_statement();
    Iterate_statementContext *iterate_statement();
    Leave_statementContext *leave_statement();
    Loop_statementContext *loop_statement();
    Pipe_statementContext *pipe_statement();
    Repeat_statementContext *repeat_statement();
    Resignal_statementContext *resignal_statement();
    Return_statementContext *return_statement();
    Signal_statementContext *signal_statement();
    While_statementContext *while_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_constrol_statementContext* sql_constrol_statement();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();
    Read_only_clauseContext *read_only_clause();
    Update_clauseContext *update_clause();
    Optimize_for_clauseContext *optimize_for_clause();
    Isolation_clauseContext *isolation_clause();
    Concurrent_access_resolution_clauseContext *concurrent_access_resolution_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_statementContext* select_statement();

  class  Read_only_clauseContext : public antlr4::ParserRuleContext {
  public:
    Read_only_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *FETCH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Read_only_clauseContext* read_only_clause();

  class  Update_clauseContext : public antlr4::ParserRuleContext {
  public:
    Update_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OF();
    Column_name_listContext *column_name_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_clauseContext* update_clause();

  class  Optimize_for_clauseContext : public antlr4::ParserRuleContext {
  public:
    Optimize_for_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *FOR();
    Integer_constantContext *integer_constant();
    Row_rowsContext *row_rows();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optimize_for_clauseContext* optimize_for_clause();

  class  Concurrent_access_resolution_clauseContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_access_resolution_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Skip_waitContext *skip_wait();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_access_resolution_clauseContext* concurrent_access_resolution_clause();

  class  Delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delete_statement_searched_deleteContext *delete_statement_searched_delete();
    Delete_statement_positioned_deleteContext *delete_statement_positioned_delete();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statementContext* delete_statement();

  class  Delete_statement_searched_deleteContext : public antlr4::ParserRuleContext {
  public:
    Delete_statement_searched_deleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    FullselectContext *fullselect();
    Correlation_clauseContext *correlation_clause();
    Include_columnsContext *include_columns();
    Assignment_clauseContext *assignment_clause();
    Where_clauseContext *where_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    Isolation_levelContext *isolation_level();
    Skip_waitContext *skip_wait();
    Period_clauseContext *period_clause();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statement_searched_deleteContext* delete_statement_searched_delete();

  class  Table_or_view_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_or_view_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    View_nameContext *view_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_or_view_nameContext* table_or_view_name();

  class  Delete_statement_positioned_deleteContext : public antlr4::ParserRuleContext {
  public:
    Delete_statement_positioned_deleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    Cursor_nameContext *cursor_name();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    FullselectContext *fullselect();
    Correlation_clauseContext *correlation_clause();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_statement_positioned_deleteContext* delete_statement_positioned_delete();

  class  Delete_deltalake_statementContext : public antlr4::ParserRuleContext {
  public:
    Delete_deltalake_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    Table_nameContext *table_name();
    Where_clauseContext *where_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_deltalake_statementContext* delete_deltalake_statement();

  class  Insert_statementContext : public antlr4::ParserRuleContext {
  public:
    Insert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<FullselectContext *> fullselect();
    FullselectContext* fullselect(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<Values_itemContext *> values_item();
    Values_itemContext* values_item(size_t i);
    Column_name_listContext *column_name_list();
    Include_columnsContext *include_columns();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    Isolation_levelContext *isolation_level();
    std::vector<Common_table_expression_listContext *> common_table_expression_list();
    Common_table_expression_listContext* common_table_expression_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_statementContext* insert_statement();

  class  Insert_datalake_statementContext : public antlr4::ParserRuleContext {
  public:
    Insert_datalake_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<Values_itemContext *> values_item();
    Values_itemContext* values_item(size_t i);
    FullselectContext *fullselect();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_datalake_statementContext* insert_datalake_statement();

  class  Values_itemContext : public antlr4::ParserRuleContext {
  public:
    Values_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expr_null_defaultContext *expr_null_default();
    Expr_null_default_listContext *expr_null_default_list();
    Row_expressionContext *row_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_itemContext* values_item();

  class  Merge_statementContext : public antlr4::ParserRuleContext {
  public:
    Merge_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *INTO();
    Table_view_fullselectContext *table_view_fullselect();
    antlr4::tree::TerminalNode *USING();
    Table_referenceContext *table_reference();
    antlr4::tree::TerminalNode *ON();
    Search_conditionContext *search_condition();
    Correlation_clauseContext *correlation_clause();
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<Matching_conditionContext *> matching_condition();
    Matching_conditionContext* matching_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *WITH();
    Isolation_levelContext *isolation_level();
    std::vector<Modification_operationContext *> modification_operation();
    Modification_operationContext* modification_operation(size_t i);
    std::vector<Signal_statementContext *> signal_statement();
    Signal_statementContext* signal_statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Merge_statementContext* merge_statement();

  class  Table_view_fullselectContext : public antlr4::ParserRuleContext {
  public:
    Table_view_fullselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_view_fullselectContext* table_view_fullselect();

  class  Common_table_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Common_table_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Common_table_expressionContext *> common_table_expression();
    Common_table_expressionContext* common_table_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_expression_listContext* common_table_expression_list();

  class  Matching_conditionContext : public antlr4::ParserRuleContext {
  public:
    Matching_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MATCHED();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *AND();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Matching_conditionContext* matching_condition();

  class  Modification_operationContext : public antlr4::ParserRuleContext {
  public:
    Modification_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Update_operationContext *update_operation();
    Delete_operationContext *delete_operation();
    Insert_operationContext *insert_operation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modification_operationContext* modification_operation();

  class  Update_operationContext : public antlr4::ParserRuleContext {
  public:
    Update_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    Assignment_clauseContext *assignment_clause();
    Period_clauseContext *period_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_operationContext* update_operation();

  class  Delete_operationContext : public antlr4::ParserRuleContext {
  public:
    Delete_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    Period_clauseContext *period_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_operationContext* delete_operation();

  class  Insert_operationContext : public antlr4::ParserRuleContext {
  public:
    Insert_operationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *VALUES();
    Expr_null_defaultContext *expr_null_default();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Expr_null_default_listContext *expr_null_default_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Column_name_list_parenContext *column_name_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Insert_operationContext* insert_operation();

  class  Expr_null_default_listContext : public antlr4::ParserRuleContext {
  public:
    Expr_null_default_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expr_null_defaultContext *> expr_null_default();
    Expr_null_defaultContext* expr_null_default(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_null_default_listContext* expr_null_default_list();

  class  Isolation_levelContext : public antlr4::ParserRuleContext {
  public:
    Isolation_levelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *UR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Isolation_levelContext* isolation_level();

  class  Truncate_statementContext : public antlr4::ParserRuleContext {
  public:
    Truncate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUNCATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *TRIGGERS();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *REUSE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *WHEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Truncate_statementContext* truncate_statement();

  class  Update_statementContext : public antlr4::ParserRuleContext {
  public:
    Update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Update_statement_searched_updateContext *update_statement_searched_update();
    Update_statement_positioned_updateContext *update_statement_positioned_update();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statementContext* update_statement();

  class  Update_statement_searched_updateContext : public antlr4::ParserRuleContext {
  public:
    Update_statement_searched_updateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    Assignment_clauseContext *assignment_clause();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    FullselectContext *fullselect();
    Correlation_clauseContext *correlation_clause();
    Include_columnsContext *include_columns();
    antlr4::tree::TerminalNode *FROM();
    Table_reference_listContext *table_reference_list();
    Where_clauseContext *where_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    Isolation_levelContext *isolation_level();
    Skip_waitContext *skip_wait();
    Period_clauseContext *period_clause();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statement_searched_updateContext* update_statement_searched_update();

  class  Skip_waitContext : public antlr4::ParserRuleContext {
  public:
    Skip_waitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SKIP_();
    antlr4::tree::TerminalNode *LOCKED();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OUTCOME();
    antlr4::tree::TerminalNode *NOWAIT();
    Time_secContext *time_sec();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Skip_waitContext* skip_wait();

  class  Update_statement_positioned_updateContext : public antlr4::ParserRuleContext {
  public:
    Update_statement_positioned_updateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *SET();
    Assignment_clauseContext *assignment_clause();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *OF();
    Cursor_nameContext *cursor_name();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_statement_positioned_updateContext* update_statement_positioned_update();

  class  Include_columnsContext : public antlr4::ParserRuleContext {
  public:
    Include_columnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_columnsContext* include_columns();

  class  Assignment_clauseContext : public antlr4::ParserRuleContext {
  public:
    Assignment_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Assignment_itemContext *> assignment_item();
    Assignment_itemContext* assignment_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_clauseContext* assignment_clause();

  class  Assignment_itemContext : public antlr4::ParserRuleContext {
  public:
    Assignment_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *EQ();
    Expr_null_defaultContext *expr_null_default();
    Column_name_list_parenContext *column_name_list_paren();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Expr_null_default_listContext *expr_null_default_list();
    Row_fullselectContext *row_fullselect();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_itemContext* assignment_item();

  class  Period_clauseContext : public antlr4::ParserRuleContext {
  public:
    Period_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *PORTION();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *BUSINESS_TYPE();
    antlr4::tree::TerminalNode *FROM();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_clauseContext* period_clause();

  class  Time_secContext : public antlr4::ParserRuleContext {
  public:
    Time_secContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_secContext* time_sec();

  class  Update_datalake_statementContext : public antlr4::ParserRuleContext {
  public:
    Update_datalake_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *SET();
    Assignment_clauseContext *assignment_clause();
    Correlation_clauseContext *correlation_clause();
    antlr4::tree::TerminalNode *FROM();
    Table_reference_listContext *table_reference_list();
    Where_clauseContext *where_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Update_datalake_statementContext* update_datalake_statement();

  class  Grant_database_authorities_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_database_authorities_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    Db_privilege_listContext *db_privilege_list();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_database_authorities_statementContext* grant_database_authorities_statement();

  class  Db_privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Db_privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Db_privilegeContext *> db_privilege();
    Db_privilegeContext* db_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_privilege_listContext* db_privilege_list();

  class  Db_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Db_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *BINDADD();
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *CREATETAB();
    antlr4::tree::TerminalNode *CREATE_EXTERNAL_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_NOT_FENCED_ROUTINE();
    antlr4::tree::TerminalNode *CREATE_SOURCE_OBJECT();
    antlr4::tree::TerminalNode *DATAACCESS();
    antlr4::tree::TerminalNode *DBADM();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *IMPLICIT_SCHEMA();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *QUIESCE_CONNECT();
    antlr4::tree::TerminalNode *SECADM();
    antlr4::tree::TerminalNode *SQLADM();
    antlr4::tree::TerminalNode *WLMADM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_privilegeContext* db_privilege();

  class  GranteeContext : public antlr4::ParserRuleContext {
  public:
    GranteeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Authorization_nameContext *authorization_name();
    User_group_roleContext *user_group_role();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GranteeContext* grantee();

  class  Grantee_user_groupContext : public antlr4::ParserRuleContext {
  public:
    Grantee_user_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    User_groupContext *user_group();
    Authorization_nameContext *authorization_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grantee_user_groupContext* grantee_user_group();

  class  User_groupContext : public antlr4::ParserRuleContext {
  public:
    User_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *GROUP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_groupContext* user_group();

  class  Grantee_listContext : public antlr4::ParserRuleContext {
  public:
    Grantee_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GranteeContext *> grantee();
    GranteeContext* grantee(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grantee_listContext* grantee_list();

  class  Grantee_list_publicContext : public antlr4::ParserRuleContext {
  public:
    Grantee_list_publicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grantee_list_publicContext* grantee_list_public();

  class  Grantee_list_user_groupContext : public antlr4::ParserRuleContext {
  public:
    Grantee_list_user_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Grantee_user_groupContext *> grantee_user_group();
    Grantee_user_groupContext* grantee_user_group(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grantee_list_user_groupContext* grantee_list_user_group();

  class  Grant_exemption_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_exemption_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *EXEMPTION();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *RULE();
    Exemption_privilegeContext *exemption_privilege();
    antlr4::tree::TerminalNode *FOR();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_exemption_statementContext* grant_exemption_statement();

  class  Exemption_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Exemption_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  Exemption_privilegeContext* exemption_privilege();

  class  Grant_global_variable_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_global_variable_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    Variable_privilegeContext *variable_privilege();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_global_variable_privileges_statementContext* grant_global_variable_privileges_statement();

  class  Variable_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Variable_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *PRIVILEGES();
    std::vector<Read_writeContext *> read_write();
    Read_writeContext* read_write(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_privilegeContext* variable_privilege();

  class  Read_writeContext : public antlr4::ParserRuleContext {
  public:
    Read_writeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Read_writeContext* read_write();

  class  With_grant_optionContext : public antlr4::ParserRuleContext {
  public:
    With_grant_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *OPTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_grant_optionContext* with_grant_option();

  class  Grant_index_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_index_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_index_privileges_statementContext* grant_index_privileges_statement();

  class  Grant_module_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_module_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_module_privileges_statementContext* grant_module_privileges_statement();

  class  Grant_package_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_package_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    Package_privilege_listContext *package_privilege_list();
    antlr4::tree::TerminalNode *ON();
    Package_nameContext *package_name();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PROGRAM();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_package_privileges_statementContext* grant_package_privileges_statement();

  class  Package_privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Package_privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Package_privilegeContext *> package_privilege();
    Package_privilegeContext* package_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_privilege_listContext* package_privilege_list();

  class  Package_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Package_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIND();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *RUN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_privilegeContext* package_privilege();

  class  Grant_role_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_role_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    Role_listContext *role_list();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *ROLE();
    With_grant_optionContext *with_grant_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_role_statementContext* grant_role_statement();

  class  Role_listContext : public antlr4::ParserRuleContext {
  public:
    Role_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Role_nameContext *> role_name();
    Role_nameContext* role_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_listContext* role_list();

  class  Grant_routine_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_routine_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    Method_designatorContext *method_designator();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *FOR();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *PROCEDURE();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();
    Type_nameContext *type_name();
    SchemaContext *schema();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_routine_privileges_statementContext* grant_routine_privileges_statement();

  class  Grant_schema_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_schema_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ALL();
    Schema_privilege_listContext *schema_privilege_list();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *CURRENT();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();
    antlr4::tree::TerminalNode *PRIVILEGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_schema_privileges_statementContext* grant_schema_privileges_statement();

  class  Schema_privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Schema_privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Schema_privilegeContext *> schema_privilege();
    Schema_privilegeContext* schema_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_privilege_listContext* schema_privilege_list();

  class  Schema_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Schema_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_privilegeContext* schema_privilege();

  class  Grant_security_label_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_security_label_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_security_label_statementContext* grant_security_label_statement();

  class  Grant_sequence_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_sequence_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    Sequence_privilege_listContext *sequence_privilege_list();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_sequence_privileges_statementContext* grant_sequence_privileges_statement();

  class  Sequence_privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Sequence_privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_privilegeContext *> sequence_privilege();
    Sequence_privilegeContext* sequence_privilege(size_t i);
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_privilege_listContext* sequence_privilege_list();

  class  Sequence_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Sequence_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *ALTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_privilegeContext* sequence_privilege();

  class  Grant_server_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_server_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_server_privileges_statementContext* grant_server_privileges_statement();

  class  Grant_setsessionuser_privilege_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_setsessionuser_privilege_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    Grantee_list_user_groupContext *grantee_list_user_group();
    User_listContext *user_list();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_setsessionuser_privilege_statementContext* grant_setsessionuser_privilege_statement();

  class  User_listContext : public antlr4::ParserRuleContext {
  public:
    User_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<User_authContext *> user_auth();
    User_authContext* user_auth(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_listContext* user_list();

  class  User_authContext : public antlr4::ParserRuleContext {
  public:
    User_authContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    Session_authorization_nameContext *session_authorization_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_authContext* user_auth();

  class  Grant_table_space_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_table_space_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    With_grant_optionContext *with_grant_option();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_table_space_privileges_statementContext* grant_table_space_privileges_statement();

  class  Grant_table_view_or_nickname_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_table_view_or_nickname_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ALL();
    Tvn_privilege_listContext *tvn_privilege_list();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *TABLE();
    With_grant_optionContext *with_grant_option();
    antlr4::tree::TerminalNode *PRIVILEGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_table_view_or_nickname_privileges_statementContext* grant_table_view_or_nickname_privileges_statement();

  class  Tvn_privilege_listContext : public antlr4::ParserRuleContext {
  public:
    Tvn_privilege_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tvn_privilegeContext *> tvn_privilege();
    Tvn_privilegeContext* tvn_privilege(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tvn_privilege_listContext* tvn_privilege_list();

  class  Tvn_privilegeContext : public antlr4::ParserRuleContext {
  public:
    Tvn_privilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *REFERENCES();
    Column_name_list_parenContext *column_name_list_paren();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *UPDATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tvn_privilegeContext* tvn_privilege();

  class  Column_name_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Column_name_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_list_parenContext* column_name_list_paren();

  class  Column_name_listContext : public antlr4::ParserRuleContext {
  public:
    Column_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_listContext* column_name_list();

  class  Grant_workload_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_workload_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *TO();
    Grantee_listContext *grantee_list();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_workload_privileges_statementContext* grant_workload_privileges_statement();

  class  Grant_xsr_object_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Grant_xsr_object_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_xsr_object_privileges_statementContext* grant_xsr_object_privileges_statement();

  class  Revoke_database_authorities_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_database_authorities_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    Db_privilege_listContext *db_privilege_list();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_database_authorities_statementContext* revoke_database_authorities_statement();

  class  By_allContext : public antlr4::ParserRuleContext {
  public:
    By_allContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  By_allContext* by_all();

  class  Revoke_exemption_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_exemption_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *EXEMPTION();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *RULE();
    Exemption_privilegeContext *exemption_privilege();
    antlr4::tree::TerminalNode *FOR();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_exemption_statementContext* revoke_exemption_statement();

  class  Revoke_global_variable_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_global_variable_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    Variable_privilegeContext *variable_privilege();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_global_variable_privileges_statementContext* revoke_global_variable_privileges_statement();

  class  Revoke_index_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_index_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_index_privileges_statementContext* revoke_index_privileges_statement();

  class  Revoke_module_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_module_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_module_privileges_statementContext* revoke_module_privileges_statement();

  class  Revoke_package_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_package_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    Package_privilegeContext *package_privilege();
    antlr4::tree::TerminalNode *ON();
    Package_nameContext *package_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PROGRAM();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_package_privileges_statementContext* revoke_package_privileges_statement();

  class  Revoke_role_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_role_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    Role_listContext *role_list();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    antlr4::tree::TerminalNode *ADMIN();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ROLE();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_role_statementContext* revoke_role_statement();

  class  Revoke_routine_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_routine_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    antlr4::tree::TerminalNode *RESTRICT();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    Method_designatorContext *method_designator();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *FOR();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *PROCEDURE();
    By_allContext *by_all();
    Type_nameContext *type_name();
    SchemaContext *schema();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_routine_privileges_statementContext* revoke_routine_privileges_statement();

  class  Revoke_schema_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_schema_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    antlr4::tree::TerminalNode *ALL();
    Schema_privilege_listContext *schema_privilege_list();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *CURRENT();
    By_allContext *by_all();
    antlr4::tree::TerminalNode *PRIVILEGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_schema_privileges_statementContext* revoke_schema_privileges_statement();

  class  Revoke_security_label_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_security_label_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_security_label_statementContext* revoke_security_label_statement();

  class  Revoke_sequence_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_sequence_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    Sequence_privilege_listContext *sequence_privilege_list();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_sequence_privileges_statementContext* revoke_sequence_privileges_statement();

  class  Revoke_server_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_server_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PASSTHRU();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_server_privileges_statementContext* revoke_server_privileges_statement();

  class  Revoke_setsessionuser_privilege_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_setsessionuser_privilege_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *SETSESSIONUSER();
    User_listContext *user_list();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_user_groupContext *grantee_list_user_group();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_setsessionuser_privilege_statementContext* revoke_setsessionuser_privilege_statement();

  class  Revoke_table_space_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_table_space_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_table_space_privileges_statementContext* revoke_table_space_privileges_statement();

  class  Revoke_table_view_or_nickname_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_table_view_or_nickname_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    antlr4::tree::TerminalNode *ALL();
    Tvn_privilege_listContext *tvn_privilege_list();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *TABLE();
    By_allContext *by_all();
    antlr4::tree::TerminalNode *PRIVILEGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_table_view_or_nickname_privileges_statementContext* revoke_table_view_or_nickname_privileges_statement();

  class  Revoke_workload_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_workload_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *FROM();
    Grantee_list_publicContext *grantee_list_public();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_workload_privileges_statementContext* revoke_workload_privileges_statement();

  class  Revoke_xsr_object_privileges_statementContext : public antlr4::ParserRuleContext {
  public:
    Revoke_xsr_object_privileges_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *PUBLIC();
    By_allContext *by_all();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Revoke_xsr_object_privileges_statementContext* revoke_xsr_object_privileges_statement();

  class  User_group_roleContext : public antlr4::ParserRuleContext {
  public:
    User_group_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ROLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_group_roleContext* user_group_role();

  class  Rollback_statementContext : public antlr4::ParserRuleContext {
  public:
    Rollback_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *SAVEPOINT();
    Savepoint_nameContext *savepoint_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rollback_statementContext* rollback_statement();

  class  Savepoint_statementContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAVEPOINT();
    Savepoint_nameContext *savepoint_name();
    std::vector<antlr4::tree::TerminalNode *> ON();
    antlr4::tree::TerminalNode* ON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ROLLBACK();
    antlr4::tree::TerminalNode* ROLLBACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RETAIN();
    antlr4::tree::TerminalNode* RETAIN(size_t i);
    antlr4::tree::TerminalNode *CURSORS();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *LOCKS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_statementContext* savepoint_statement();

  class  Release_savepoint_statementContext : public antlr4::ParserRuleContext {
  public:
    Release_savepoint_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    antlr4::tree::TerminalNode *SAVEPOINT();
    Savepoint_nameContext *savepoint_name();
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Release_savepoint_statementContext* release_savepoint_statement();

  class  Allocate_cursor_statementContext : public antlr4::ParserRuleContext {
  public:
    Allocate_cursor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOCATE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *SET();
    Rs_locator_variableContext *rs_locator_variable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Allocate_cursor_statementContext* allocate_cursor_statement();

  class  Alter_audit_policy_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_audit_policy_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *CATEGORIES();
    std::vector<Audit_policy_categories_optsContext *> audit_policy_categories_opts();
    Audit_policy_categories_optsContext* audit_policy_categories_opts(size_t i);
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *TYPE();
    Normal_auditContext *normal_audit();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_audit_policy_statementContext* alter_audit_policy_statement();

  class  Status_specContext : public antlr4::ParserRuleContext {
  public:
    Status_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATUS();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *FAILURE();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SUCCESS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Status_specContext* status_spec();

  class  Normal_auditContext : public antlr4::ParserRuleContext {
  public:
    Normal_auditContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *AUDIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Normal_auditContext* normal_audit();

  class  Alter_bufferpool_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_bufferpool_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Db_partition_group_nameContext *db_partition_group_name();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    std::vector<Number_of_pagesContext *> number_of_pages();
    Number_of_pagesContext* number_of_pages(size_t i);
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *AUTOMATIC();
    Immediate_deferredContext *immediate_deferred();
    antlr4::tree::TerminalNode *MEMBER();
    Member_numberContext *member_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_bufferpool_statementContext* alter_bufferpool_statement();

  class  Immediate_deferredContext : public antlr4::ParserRuleContext {
  public:
    Immediate_deferredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Immediate_deferredContext* immediate_deferred();

  class  Alter_database_partition_group_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_partition_group_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Db_partition_nameContext *db_partition_name();
    std::vector<Db_partition_group_list_itemContext *> db_partition_group_list_item();
    Db_partition_group_list_itemContext* db_partition_group_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_partition_group_statementContext* alter_database_partition_group_statement();

  class  Db_partition_group_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_group_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Db_partition_num_numsContext *db_partition_num_nums();
    Db_partitions_clauseContext *db_partitions_clause();
    Db_partition_optionsContext *db_partition_options();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_group_list_itemContext* db_partition_group_list_item();

  class  Db_partition_num_numsContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_num_numsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DBPARTITIONNUM();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_num_numsContext* db_partition_num_nums();

  class  Db_partitions_clauseContext : public antlr4::ParserRuleContext {
  public:
    Db_partitions_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Db_partition_number_listContext *db_partition_number_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partitions_clauseContext* db_partitions_clause();

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

  class  Alter_database_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_database_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *DATABASE();
    Database_nameContext *database_name();
    std::vector<Alter_database_optsContext *> alter_database_opts();
    Alter_database_optsContext* alter_database_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_statementContext* alter_database_statement();

  class  Alter_database_optsContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::String_listContext *sp = nullptr;
    Alter_database_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STORAGE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    String_listContext *string_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_database_optsContext* alter_database_opts();

  class  Alter_event_monitor_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_event_monitor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    std::vector<Alter_event_monitor_optsContext *> alter_event_monitor_opts();
    Alter_event_monitor_optsContext* alter_event_monitor_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_event_monitor_statementContext* alter_event_monitor_statement();

  class  Alter_event_monitor_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_event_monitor_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *GROUP();
    Evm_groupContext *evm_group();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<Target_table_optionsContext *> target_table_options();
    Target_table_optionsContext* target_table_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_event_monitor_optsContext* alter_event_monitor_opts();

  class  Alter_function_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Function_designatorContext *function_designator();
    std::vector<Alter_function_optsContext *> alter_function_opts();
    Alter_function_optsContext* alter_function_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_function_statementContext* alter_function_statement();

  class  Alter_function_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_function_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_function_optsContext* alter_function_opts();

  class  Function_designatorContext : public antlr4::ParserRuleContext {
  public:
    Function_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_designatorContext* function_designator();

  class  Data_type_listContext : public antlr4::ParserRuleContext {
  public:
    Data_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_listContext* data_type_list();

  class  Data_type_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Data_type_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Data_type_listContext *data_type_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_list_parenContext* data_type_list_paren();

  class  Alter_histogram_template_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_histogram_template_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *VALUE();
    Bigint_constantContext *bigint_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_histogram_template_statementContext* alter_histogram_template_statement();

  class  Alter_index_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_index_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *COMPRESS();
    Yes_noContext *yes_no();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_index_statementContext* alter_index_statement();

  class  Yes_noContext : public antlr4::ParserRuleContext {
  public:
    Yes_noContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Yes_noContext* yes_no();

  class  Alter_mask_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_mask_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *MASK();
    Mask_nameContext *mask_name();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_mask_statementContext* alter_mask_statement();

  class  Enable_disableContext : public antlr4::ParserRuleContext {
  public:
    Enable_disableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENABLE();
    antlr4::tree::TerminalNode *DISABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_disableContext* enable_disable();

  class  Alter_method_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_method_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Method_designatorContext *method_designator();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_method_statementContext* alter_method_statement();

  class  Method_designatorContext : public antlr4::ParserRuleContext {
  public:
    Method_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_designatorContext* method_designator();

  class  Alter_model_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_model_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *MODEL();
    Model_nameContext *model_name();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *REVERT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_model_statementContext* alter_model_statement();

  class  Alter_module_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_module_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *ADD();
    Alter_module_optsContext *alter_module_opts();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PUBLISH();
    antlr4::tree::TerminalNode *BODY();
    Module_object_identificationContext *module_object_identification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_module_statementContext* alter_module_statement();

  class  Alter_module_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_module_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_condition_definitionContext *module_condition_definition();
    Module_function_definitionContext *module_function_definition();
    Module_procedure_definitionContext *module_procedure_definition();
    Module_type_definitionContext *module_type_definition();
    Module_variable_definitionContext *module_variable_definition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_module_optsContext* alter_module_opts();

  class  Module_function_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_function_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_function_definitionContext* module_function_definition();

  class  Module_procedure_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_procedure_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_procedure_definitionContext* module_procedure_definition();

  class  Module_type_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_type_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_type_definitionContext* module_type_definition();

  class  Module_variable_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_variable_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_variable_definitionContext* module_variable_definition();

  class  Module_condition_definitionContext : public antlr4::ParserRuleContext {
  public:
    Module_condition_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITION();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *FOR();
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *SQLSTATE();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_condition_definitionContext* module_condition_definition();

  class  Module_object_identificationContext : public antlr4::ParserRuleContext {
  public:
    Module_object_identificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_function_designatorContext *module_function_designator();
    Module_procedure_designatorContext *module_procedure_designator();
    antlr4::tree::TerminalNode *CONDITION();
    Condition_nameContext *condition_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_object_identificationContext* module_object_identification();

  class  Module_function_designatorContext : public antlr4::ParserRuleContext {
  public:
    Module_function_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Unqualified_function_nameContext *unqualified_function_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();
    Unqualified_specific_nameContext *unqualified_specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_function_designatorContext* module_function_designator();

  class  Module_procedure_designatorContext : public antlr4::ParserRuleContext {
  public:
    Module_procedure_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Unqualified_procedure_nameContext *unqualified_procedure_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();
    Unqualified_specific_nameContext *unqualified_specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_procedure_designatorContext* module_procedure_designator();

  class  Alter_nickname_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_nickname_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *NICKNAME();
    Nick_nameContext *nick_name();
    Alter_nickname_opts_1Context *alter_nickname_opts_1();
    std::vector<Alter_nickname_opts_2Context *> alter_nickname_opts_2();
    Alter_nickname_opts_2Context* alter_nickname_opts_2(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_nickname_statementContext* alter_nickname_statement();

  class  Alter_nickname_opts_1Context : public antlr4::ParserRuleContext {
  public:
    Alter_nickname_opts_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Alter_nickname_opts_1_itemContext *> alter_nickname_opts_1_item();
    Alter_nickname_opts_1_itemContext* alter_nickname_opts_1_item(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_nickname_opts_1Context* alter_nickname_opts_1();

  class  Alter_nickname_opts_1_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_nickname_opts_1_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nick_name_option_nameContext *nick_name_option_name();
    String_constantContext *string_constant();
    Add_setContext *add_set();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_nickname_opts_1_itemContext* alter_nickname_opts_1_item();

  class  Alter_nickname_opts_2Context : public antlr4::ParserRuleContext {
  public:
    Alter_nickname_opts_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Column_nameContext *column_name();
    std::vector<Alter_nickname_opts_2_itemContext *> alter_nickname_opts_2_item();
    Alter_nickname_opts_2_itemContext* alter_nickname_opts_2_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ADD();
    Unique_constraintContext *unique_constraint();
    Referential_constraintContext *referential_constraint();
    Check_constraintContext *check_constraint();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CHECK();
    std::vector<Constraint_alterationContext *> constraint_alteration();
    Constraint_alterationContext* constraint_alteration(size_t i);
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Allow_disallowContext *allow_disallow();
    antlr4::tree::TerminalNode *CACHING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_nickname_opts_2Context* alter_nickname_opts_2();

  class  Alter_nickname_opts_2_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_nickname_opts_2_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *NAME();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *TYPE();
    Local_data_typeContext *local_data_type();
    Federated_column_optionsContext *federated_column_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_nickname_opts_2_itemContext* alter_nickname_opts_2_item();

  class  Constraint_alterationContext : public antlr4::ParserRuleContext {
  public:
    Constraint_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *TRUSTED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_alterationContext* constraint_alteration();

  class  Alter_package_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_package_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    Version_idContext *version_id();
    std::vector<Alter_package_optsContext *> alter_package_opts();
    Alter_package_optsContext* alter_package_opts(size_t i);
    antlr4::tree::TerminalNode *VERSION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_package_statementContext* alter_package_statement();

  class  Alter_package_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_package_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *REUSE();
    Yes_noContext *yes_no();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *NONE();
    Optimization_profile_nameContext *optimization_profile_name();
    antlr4::tree::TerminalNode *KEEP();
    antlr4::tree::TerminalNode *DYNAMIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_package_optsContext* alter_package_opts();

  class  Alter_permission_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_permission_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_permission_statementContext* alter_permission_statement();

  class  Alter_procedure_external_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_procedure_external_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Procedure_designatorContext *procedure_designator();
    std::vector<Alter_procedure_external_optsContext *> alter_procedure_external_opts();
    Alter_procedure_external_optsContext* alter_procedure_external_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_procedure_external_statementContext* alter_procedure_external_statement();

  class  Alter_procedure_external_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_procedure_external_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *LEVEL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_procedure_external_optsContext* alter_procedure_external_opts();

  class  Procedure_designatorContext : public antlr4::ParserRuleContext {
  public:
    Procedure_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_designatorContext* procedure_designator();

  class  Alter_procedure_sourced_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_procedure_sourced_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ALTER();
    antlr4::tree::TerminalNode* ALTER(size_t i);
    Procedure_designatorContext *procedure_designator();
    std::vector<antlr4::tree::TerminalNode *> PARAMETER();
    antlr4::tree::TerminalNode* PARAMETER(size_t i);
    std::vector<Parameter_alterationContext *> parameter_alteration();
    Parameter_alterationContext* parameter_alteration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_procedure_sourced_statementContext* alter_procedure_sourced_statement();

  class  Parameter_alterationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_alterationContext* parameter_alteration();

  class  Alter_procedure_sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_procedure_sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
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
    std::vector<antlr4::tree::TerminalNode *> NO();
    antlr4::tree::TerminalNode* NO(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_procedure_sql_statementContext* alter_procedure_sql_statement();

  class  Alter_schema_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_schema_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CAPTURE();
    None_changesContext *none_changes();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *MODIFICATION();
    antlr4::tree::TerminalNode *TRACKING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_schema_statementContext* alter_schema_statement();

  class  None_changesContext : public antlr4::ParserRuleContext {
  public:
    None_changesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *CHANGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  None_changesContext* none_changes();

  class  Alter_security_label_component_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_security_label_component_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *COMPONENT();
    Component_nameContext *component_name();
    Add_element_clauseContext *add_element_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_security_label_component_statementContext* alter_security_label_component_statement();

  class  Add_element_clauseContext : public antlr4::ParserRuleContext {
  public:
    Add_element_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ELEMENT();
    String_constantContext *string_constant();
    Array_element_clauseContext *array_element_clause();
    Tree_element_clauseContext *tree_element_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_element_clauseContext* add_element_clause();

  class  Array_element_clauseContext : public antlr4::ParserRuleContext {
  public:
    Array_element_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_element_clauseContext* array_element_clause();

  class  Tree_element_clauseContext : public antlr4::ParserRuleContext {
  public:
    Tree_element_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *UNDER();
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OVER();
    antlr4::tree::TerminalNode* OVER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tree_element_clauseContext* tree_element_clause();

  class  Alter_security_policy_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_security_policy_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    Security_policy_nameContext *security_policy_name();
    std::vector<Alter_security_policy_optsContext *> alter_security_policy_opts();
    Alter_security_policy_optsContext* alter_security_policy_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_security_policy_statementContext* alter_security_policy_statement();

  class  Alter_security_policy_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_security_policy_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *COMPONENT();
    Component_nameContext *component_name();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *AUTHORIZED();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *OVERRIDE_();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *AUTHORIZATIONS();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ROLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_security_policy_optsContext* alter_security_policy_opts();

  class  Alter_sequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_sequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    std::vector<Alter_sequence_optsContext *> alter_sequence_opts();
    Alter_sequence_optsContext* alter_sequence_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_sequence_statementContext* alter_sequence_statement();

  class  Alter_sequence_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_sequence_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *WITH();
    Numeric_constantContext *numeric_constant();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *ORDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_sequence_optsContext* alter_sequence_opts();

  class  Alter_server_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_server_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *TYPE();
    Server_typeContext *server_type();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Alter_server_optsContext *> alter_server_opts();
    Alter_server_optsContext* alter_server_opts(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *VERSION();
    Server_versionContext *server_version();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_statementContext* alter_server_statement();

  class  Alter_server_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_server_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Server_option_nameContext *server_option_name();
    String_constantContext *string_constant();
    Add_setContext *add_set();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_server_optsContext* alter_server_opts();

  class  Alter_service_class_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_service_class_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS_();
    Service_class_nameContext *service_class_name();
    antlr4::tree::TerminalNode *UNDER();
    Service_superclass_nameContext *service_superclass_name();
    std::vector<Alter_service_class_optsContext *> alter_service_class_opts();
    Alter_service_class_optsContext* alter_service_class_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_service_class_statementContext* alter_service_class_statement();

  class  Alter_service_class_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_service_class_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESOURCE();
    antlr4::tree::TerminalNode *SHARES();
    Integer_constantContext *integer_constant();
    Soft_hardContext *soft_hard();
    antlr4::tree::TerminalNode *CPU();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *SORTMEM();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *LATENCY();
    antlr4::tree::TerminalNode *DEGREE_();
    antlr4::tree::TerminalNode *SCALEBACK();
    Default_on_offContext *default_on_off();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *PREFETCH();
    antlr4::tree::TerminalNode *PRIORITY();
    Default_high_medium_lowContext *default_high_medium_low();
    antlr4::tree::TerminalNode *OUTBOUND();
    antlr4::tree::TerminalNode *CORRELATOR();
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *DATA();
    Extended_base_noneContext *extended_base_none();
    antlr4::tree::TerminalNode *REQUEST();
    Base_noneContext *base_none();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *METRICS();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *UOW();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_service_class_optsContext* alter_service_class_opts();

  class  Default_on_offContext : public antlr4::ParserRuleContext {
  public:
    Default_on_offContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    On_offContext *on_off();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_on_offContext* default_on_off();

  class  Default_high_medium_lowContext : public antlr4::ParserRuleContext {
  public:
    Default_high_medium_lowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    High_medium_lowContext *high_medium_low();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_high_medium_lowContext* default_high_medium_low();

  class  Alter_stogroup_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_stogroup_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *STOGROUP();
    Storagegroup_nameContext *storagegroup_name();
    std::vector<Alter_stogroup_optsContext *> alter_stogroup_opts();
    Alter_stogroup_optsContext* alter_stogroup_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_stogroup_statementContext* alter_stogroup_statement();

  class  Alter_stogroup_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_stogroup_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_listContext *string_list();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *OVERHEAD();
    Number_of_millisecondsContext *number_of_milliseconds();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *RATE();
    Number_megabytes_per_secondContext *number_megabytes_per_second();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_stogroup_optsContext* alter_stogroup_opts();

  class  Alter_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> TABLE();
    antlr4::tree::TerminalNode* TABLE(size_t i);
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    antlr4::tree::TerminalNode *ADD();
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
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *VERSIONING();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *HISTORY();
    History_table_nameContext *history_table_name();
    std::vector<Alter_table_optsContext *> alter_table_opts();
    Alter_table_optsContext* alter_table_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_statementContext* alter_table_statement();

  class  Alter_table_optsContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::Column_nameContext *s = nullptr;
    Db2Parser::Column_nameContext *t = nullptr;
    Alter_table_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Column_definitionContext *column_definition();
    Unique_constraintContext *unique_constraint();
    Referential_constraintContext *referential_constraint();
    Check_constraintContext *check_constraint();
    Distribution_clauseContext *distribution_clause();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> DROP();
    antlr4::tree::TerminalNode* DROP(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Materialized_query_definitionContext *materialized_query_definition();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *ALTER();
    Constraint_nameContext *constraint_name();
    Constraint_alterationContext *constraint_alteration();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CHECK();
    Column_alterationContext *column_alteration();
    Activate_deactivateContext *activate_deactivate();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *CONTROL();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Cascade_restrictContext *cascade_restrict();
    antlr4::tree::TerminalNode *DISTRIBUTION();
    antlr4::tree::TerminalNode *PERIOD();
    Period_definition_alterContext *period_definition_alter();
    Period_nameContext *period_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CAPTURE();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *LONGVAR();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *EMPTY();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *PCTFREE();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *LOCKSIZE();
    antlr4::tree::TerminalNode *BLOCKINSERT();
    antlr4::tree::TerminalNode *APPEND();
    On_offContext *on_off();
    antlr4::tree::TerminalNode *VOLATILE();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *LOG();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *BUILD();
    Null_on_offContext *null_on_off();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_table_optsContext* alter_table_opts();

  class  Null_on_offContext : public antlr4::ParserRuleContext {
  public:
    Null_on_offContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_();
    On_offContext *on_off();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_on_offContext* null_on_off();

  class  Cascade_restrictContext : public antlr4::ParserRuleContext {
  public:
    Cascade_restrictContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cascade_restrictContext* cascade_restrict();

  class  Materialized_query_definitionContext : public antlr4::ParserRuleContext {
  public:
    Materialized_query_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<Refreshable_table_optionsContext *> refreshable_table_options();
    Refreshable_table_optionsContext* refreshable_table_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Materialized_query_definitionContext* materialized_query_definition();

  class  Refreshable_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Refreshable_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *DEFERRED();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *IMMEDIATE();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *MAINTAINED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *REPLICATION();
    antlr4::tree::TerminalNode *FEDERATED_TOOL();
    antlr4::tree::TerminalNode *SYSTEM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Refreshable_table_optionsContext* refreshable_table_options();

  class  Column_alterationContext : public antlr4::ParserRuleContext {
  public:
    Column_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *SET();
    Generation_alterationContext *generation_alteration();
    Identity_alterationContext *identity_alteration();
    Generation_attributeContext *generation_attribute();
    As_identity_clauseContext *as_identity_clause();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SCOPE();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *WITH();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    Integer_valueContext *integer_value();
    Default_clauseContext *default_clause();
    antlr4::tree::TerminalNode *EXPRESSION();
    As_generated_expression_clauseContext *as_generated_expression_clause();
    antlr4::tree::TerminalNode *HIDDEN_();
    As_row_transaction_start_id_clauseContext *as_row_transaction_start_id_clause();
    As_row_transaction_timestamp_clauseContext *as_row_transaction_timestamp_clause();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *GENERATED();
    Typed_table_nameContext *typed_table_name();
    Typed_view_nameContext *typed_view_name();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *OFF();
    antlr4::tree::TerminalNode *IMPLICITLY();
    antlr4::tree::TerminalNode *ALWAYS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_alterationContext* column_alteration();

  class  Generation_alterationContext : public antlr4::ParserRuleContext {
  public:
    Generation_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generation_alterationContext* generation_alteration();

  class  Identity_alterationContext : public antlr4::ParserRuleContext {
  public:
    Identity_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    Numeric_constantContext *numeric_constant();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *RESTART();
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_alterationContext* identity_alteration();

  class  Generation_attributeContext : public antlr4::ParserRuleContext {
  public:
    Generation_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATED();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generation_attributeContext* generation_attribute();

  class  As_identity_clauseContext : public antlr4::ParserRuleContext {
  public:
    As_identity_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<As_identity_clause_optsContext *> as_identity_clause_opts();
    As_identity_clause_optsContext* as_identity_clause_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_identity_clauseContext* as_identity_clause();

  class  As_identity_clause_optsContext : public antlr4::ParserRuleContext {
  public:
    As_identity_clause_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    Numeric_constantContext *numeric_constant();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    Integer_constantContext *integer_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_identity_clause_optsContext* as_identity_clause_opts();

  class  Period_definition_alterContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::Column_nameContext *b = nullptr;
    Db2Parser::Column_nameContext *e = nullptr;
    Period_definition_alterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_definition_alterContext* period_definition_alter();

  class  Add_partitionContext : public antlr4::ParserRuleContext {
  public:
    Add_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_spec_alterContext *boundary_spec_alter();
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *LONG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_partitionContext* add_partition();

  class  Boundary_spec_alterContext : public antlr4::ParserRuleContext {
  public:
    Boundary_spec_alterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Starting_clauseContext *starting_clause();
    Ending_clauseContext *ending_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boundary_spec_alterContext* boundary_spec_alter();

  class  Attach_partitionContext : public antlr4::ParserRuleContext {
  public:
    Attach_partitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_spec_alterContext *boundary_spec_alter();
    antlr4::tree::TerminalNode *FROM();
    Table_nameContext *table_name();
    Partition_nameContext *partition_name();
    antlr4::tree::TerminalNode *REQUIRE();
    antlr4::tree::TerminalNode *MATCHING();
    antlr4::tree::TerminalNode *INDEXES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attach_partitionContext* attach_partition();

  class  Activate_deactivateContext : public antlr4::ParserRuleContext {
  public:
    Activate_deactivateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTIVATE();
    antlr4::tree::TerminalNode *DEACTIVATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Activate_deactivateContext* activate_deactivate();

  class  Alter_tablespace_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespace_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    std::vector<Alter_tablespace_optsContext *> alter_tablespace_opts();
    Alter_tablespace_optsContext* alter_tablespace_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespace_statementContext* alter_tablespace_statement();

  class  Alter_tablespace_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_tablespace_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Add_clauseContext *add_clause();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *SET();
    Db_container_clauseContext *db_container_clause();
    On_db_partitions_clauseContext *on_db_partitions_clause();
    antlr4::tree::TerminalNode *DROP();
    Drop_container_clauseContext *drop_container_clause();
    antlr4::tree::TerminalNode *REDUCE();
    All_containers_clauseContext *all_containers_clause();
    antlr4::tree::TerminalNode *MAX();
    antlr4::tree::TerminalNode *STOP();
    Integer_valueContext *integer_value();
    Kmg_percentContext *kmg_percent();
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *RESIZE();
    antlr4::tree::TerminalNode *REBALANCE();
    antlr4::tree::TerminalNode *SUSPEND();
    antlr4::tree::TerminalNode *RESUME();
    antlr4::tree::TerminalNode *PREFETCHSIZE();
    antlr4::tree::TerminalNode *AUTOMATIC();
    Number_of_pagesContext *number_of_pages();
    KmContext *km();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    antlr4::tree::TerminalNode *OVERHEAD();
    Number_of_millisecondsContext *number_of_milliseconds();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *TRANSFERRATE();
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *CACHING();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DROPPED();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *RECOVERY();
    Yes_noContext *yes_no();
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *ONLINE();
    antlr4::tree::TerminalNode *AUTORESIZE();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *MAXSIZE();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *CONVERT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *LOWER();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *WATER();
    antlr4::tree::TerminalNode *MARK();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *STOGROUP();
    Storagegroup_nameContext *storagegroup_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *MANAGED();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *STORAGE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_tablespace_optsContext* alter_tablespace_opts();

  class  Add_clauseContext : public antlr4::ParserRuleContext {
  public:
    Add_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Db_container_clauseContext *db_container_clause();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STRIPE();
    antlr4::tree::TerminalNode *SET();
    StripesetContext *stripeset();
    On_db_partitions_clauseContext *on_db_partitions_clause();
    System_container_clauseContext *system_container_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_clauseContext* add_clause();

  class  Db_container_clauseContext : public antlr4::ParserRuleContext {
  public:
    Db_container_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Db_container_clause_optsContext *> db_container_clause_opts();
    Db_container_clause_optsContext* db_container_clause_opts(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_container_clauseContext* db_container_clause();

  class  Db_container_clause_optsContext : public antlr4::ParserRuleContext {
  public:
    Db_container_clause_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_deviceContext *file_device();
    StringContext *string();
    Number_of_pagesContext *number_of_pages();
    Integer_valueContext *integer_value();
    KmgContext *kmg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_container_clause_optsContext* db_container_clause_opts();

  class  Drop_container_clauseContext : public antlr4::ParserRuleContext {
  public:
    Drop_container_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<File_deviceContext *> file_device();
    File_deviceContext* file_device(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_container_clauseContext* drop_container_clause();

  class  File_deviceContext : public antlr4::ParserRuleContext {
  public:
    File_deviceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE();
    antlr4::tree::TerminalNode *DEVICE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_deviceContext* file_device();

  class  All_containers_clauseContext : public antlr4::ParserRuleContext {
  public:
    All_containers_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Number_of_pagesContext *number_of_pages();
    Integer_valueContext *integer_value();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *CONTAINERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_containers_clauseContext* all_containers_clause();

  class  System_container_clauseContext : public antlr4::ParserRuleContext {
  public:
    System_container_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    String_listContext *string_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_container_clauseContext* system_container_clause();

  class  StripesetContext : public antlr4::ParserRuleContext {
  public:
    StripesetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StripesetContext* stripeset();

  class  KmContext : public antlr4::ParserRuleContext {
  public:
    KmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K();
    antlr4::tree::TerminalNode *M();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KmContext* km();

  class  Kmg_percentContext : public antlr4::ParserRuleContext {
  public:
    Kmg_percentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KmgContext *kmg();
    antlr4::tree::TerminalNode *PERCENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Kmg_percentContext* kmg_percent();

  class  Alter_threshold_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_threshold_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    std::vector<Alter_threshold_optsContext *> alter_threshold_opts();
    Alter_threshold_optsContext* alter_threshold_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_threshold_statementContext* alter_threshold_statement();

  class  Alter_threshold_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_threshold_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Alter_threshold_predicateContext *alter_threshold_predicate();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *EXCEEDED();
    std::vector<Alter_threshold_exceeded_actionsContext *> alter_threshold_exceeded_actions();
    Alter_threshold_exceeded_actionsContext* alter_threshold_exceeded_actions(size_t i);
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_threshold_optsContext* alter_threshold_opts();

  class  Alter_threshold_predicateContext : public antlr4::ParserRuleContext {
  public:
    Alter_threshold_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    Day_to_minutesContext *day_to_minutes();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    Bigint_valueContext *bigint_value();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    Day_to_secondsContext *day_to_seconds();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    Checking_everyContext *checking_every();
    Hour_to_secondsContext *hour_to_seconds();
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
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Integer_constant_listContext *integer_constant_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_threshold_predicateContext* alter_threshold_predicate();

  class  Alter_threshold_exceeded_actionsContext : public antlr4::ParserRuleContext {
  public:
    Alter_threshold_exceeded_actionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *DATA();
    Alter_collect_activity_data_clauseContext *alter_collect_activity_data_clause();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *FORCE();
    antlr4::tree::TerminalNode *APPLICATION();
    Remap_activity_actionContext *remap_activity_action();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_threshold_exceeded_actionsContext* alter_threshold_exceeded_actions();

  class  Dt_unitsContext : public antlr4::ParserRuleContext {
  public:
    Dt_unitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dt_unitsContext* dt_units();

  class  Dt_units_with_secondsContext : public antlr4::ParserRuleContext {
  public:
    Dt_units_with_secondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dt_unitsContext *dt_units();
    antlr4::tree::TerminalNode *SECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dt_units_with_secondsContext* dt_units_with_seconds();

  class  Alter_trigger_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_trigger_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trigger_statementContext* alter_trigger_statement();

  class  Alter_trusted_context_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_trusted_context_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    std::vector<Alter_trusted_context_optsContext *> alter_trusted_context_opts();
    Alter_trusted_context_optsContext* alter_trusted_context_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trusted_context_statementContext* alter_trusted_context_statement();

  class  Alter_trusted_context_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_trusted_context_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<Alter_trusted_context_opts_alter_optsContext *> alter_trusted_context_opts_alter_opts();
    Alter_trusted_context_opts_alter_optsContext* alter_trusted_context_opts_alter_opts(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Address_clauseContext *> address_clause();
    Address_clauseContext* address_clause(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DROP();
    std::vector<antlr4::tree::TerminalNode *> ADDRESS();
    antlr4::tree::TerminalNode* ADDRESS(size_t i);
    std::vector<Address_valueContext *> address_value();
    Address_valueContext* address_value(size_t i);
    User_clauseContext *user_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trusted_context_optsContext* alter_trusted_context_opts();

  class  Alter_trusted_context_opts_alter_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_trusted_context_opts_alter_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *AUTHID();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Addr_clause_encryption_valContext *> addr_clause_encryption_val();
    Addr_clause_encryption_valContext* addr_clause_encryption_val(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_trusted_context_opts_alter_optsContext* alter_trusted_context_opts_alter_opts();

  class  Addr_clause_encryption_valContext : public antlr4::ParserRuleContext {
  public:
    Addr_clause_encryption_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Address_clauseContext *address_clause();
    antlr4::tree::TerminalNode *ENCRYPTION();
    Encryption_valueContext *encryption_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Addr_clause_encryption_valContext* addr_clause_encryption_val();

  class  Address_clauseContext : public antlr4::ParserRuleContext {
  public:
    Address_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();
    Address_valueContext *address_value();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();
    Encryption_valueContext *encryption_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Address_clauseContext* address_clause();

  class  User_clauseContext : public antlr4::ParserRuleContext {
  public:
    User_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<Use_for_optsContext *> use_for_opts();
    Use_for_optsContext* use_for_opts(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DROP();
    std::vector<Use_for_opts_2Context *> use_for_opts_2();
    Use_for_opts_2Context* use_for_opts_2(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_clauseContext* user_clause();

  class  Use_for_optsContext : public antlr4::ParserRuleContext {
  public:
    Use_for_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *PUBLIC();
    With_withoutContext *with_without();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_for_optsContext* use_for_opts();

  class  Use_for_opts_2Context : public antlr4::ParserRuleContext {
  public:
    Use_for_opts_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_for_opts_2Context* use_for_opts_2();

  class  Alter_type_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    std::vector<Alter_type_optsContext *> alter_type_opts();
    Alter_type_optsContext* alter_type_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_statementContext* alter_type_statement();

  class  Alter_type_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_type_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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
    Method_optionsContext *method_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_type_optsContext* alter_type_opts();

  class  Method_identifierContext : public antlr4::ParserRuleContext {
  public:
    Method_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Data_type_list_parenContext *data_type_list_paren();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_identifierContext* method_identifier();

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

  class  Alter_usage_list_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_usage_list_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    Usage_list_nameContext *usage_list_name();
    std::vector<Alter_usage_list_opts_itemContext *> alter_usage_list_opts_item();
    Alter_usage_list_opts_itemContext* alter_usage_list_opts_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_usage_list_statementContext* alter_usage_list_statement();

  class  Alter_usage_list_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_usage_list_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *SIZE();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *ACTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_usage_list_opts_itemContext* alter_usage_list_opts_item();

  class  Alter_user_mapping_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_mapping_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Alter_user_mapping_opts_itemContext *> alter_user_mapping_opts_item();
    Alter_user_mapping_opts_itemContext* alter_user_mapping_opts_item(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *PUBLIC();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_mapping_statementContext* alter_user_mapping_statement();

  class  Alter_user_mapping_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_user_mapping_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    User_mapping_option_nameContext *user_mapping_option_name();
    String_constantContext *string_constant();
    Add_setContext *add_set();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_user_mapping_opts_itemContext* alter_user_mapping_opts_item();

  class  Add_setContext : public antlr4::ParserRuleContext {
  public:
    Add_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_setContext* add_set();

  class  Alter_view_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_view_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    std::vector<Alter_view_optsContext *> alter_view_opts();
    Alter_view_optsContext* alter_view_opts(size_t i);
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_view_statementContext* alter_view_statement();

  class  Alter_view_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_view_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SCOPE();
    Typed_table_nameContext *typed_table_name();
    Typed_view_nameContext *typed_view_name();
    antlr4::tree::TerminalNode *COLUMN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_view_optsContext* alter_view_opts();

  class  Alter_work_action_set_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_work_action_set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SET();
    Work_action_set_nameContext *work_action_set_name();
    std::vector<Alter_work_action_set_optsContext *> alter_work_action_set_opts();
    Alter_work_action_set_optsContext* alter_work_action_set_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_work_action_set_statementContext* alter_work_action_set_statement();

  class  Alter_work_action_set_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_work_action_set_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Work_action_definitionContext *work_action_definition();
    antlr4::tree::TerminalNode *ALTER();
    Work_action_alterationContext *work_action_alteration();
    antlr4::tree::TerminalNode *DROP();
    Work_action_nameContext *work_action_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ACTION();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_work_action_set_optsContext* alter_work_action_set_opts();

  class  Work_action_alterationContext : public antlr4::ParserRuleContext {
  public:
    Work_action_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Work_action_nameContext *work_action_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ACTION();
    std::vector<Work_action_alteration_optsContext *> work_action_alteration_opts();
    Work_action_alteration_optsContext* work_action_alteration_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_alterationContext* work_action_alteration();

  class  Work_action_alteration_optsContext : public antlr4::ParserRuleContext {
  public:
    Work_action_alteration_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS_();
    Work_class_nameContext *work_class_name();
    Alter_action_types_clauseContext *alter_action_types_clause();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_alteration_optsContext* work_action_alteration_opts();

  class  Alter_action_types_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_action_types_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *TO();
    Service_subclass_nameContext *service_subclass_name();
    With_withoutContext *with_without();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *WHEN();
    Threshold_predicate_clauseContext *threshold_predicate_clause();
    antlr4::tree::TerminalNode *PERFORM();
    antlr4::tree::TerminalNode *ACTION();
    Alter_threshold_exceeded_actionsContext *alter_threshold_exceeded_actions();
    antlr4::tree::TerminalNode *EXCEEDED();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *COUNT();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    Alter_collect_activity_data_clauseContext *alter_collect_activity_data_clause();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *EXTENDED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_action_types_clauseContext* alter_action_types_clause();

  class  Threshold_predicate_clauseContext : public antlr4::ParserRuleContext {
  public:
    Threshold_predicate_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    Bigint_valueContext *bigint_value();
    antlr4::tree::TerminalNode *CPUTIME();
    Hours_minutesContext *hours_minutes();
    Checking_everyContext *checking_every();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *FOR();
    Day_to_secondsContext *day_to_seconds();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_predicate_clauseContext* threshold_predicate_clause();

  class  Alter_work_class_set_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_work_class_set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS_();
    antlr4::tree::TerminalNode *SET();
    Work_class_set_nameContext *work_class_set_name();
    std::vector<Alter_work_class_set_optsContext *> alter_work_class_set_opts();
    Alter_work_class_set_optsContext* alter_work_class_set_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_work_class_set_statementContext* alter_work_class_set_statement();

  class  Alter_work_class_set_optsContext : public antlr4::ParserRuleContext {
  public:
    Alter_work_class_set_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Work_class_definitionContext *work_class_definition();
    antlr4::tree::TerminalNode *ALTER();
    Work_class_alterationContext *work_class_alteration();
    antlr4::tree::TerminalNode *DROP();
    Work_class_nameContext *work_class_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_work_class_set_optsContext* alter_work_class_set_opts();

  class  Work_class_alterationContext : public antlr4::ParserRuleContext {
  public:
    Work_class_alterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Work_class_nameContext *work_class_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS_();
    std::vector<Work_class_alteration_optsContext *> work_class_alteration_opts();
    Work_class_alteration_optsContext* work_class_alteration_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_alterationContext* work_class_alteration();

  class  Work_class_alteration_optsContext : public antlr4::ParserRuleContext {
  public:
    Work_class_alteration_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_from_to_alter_clauseContext *for_from_to_alter_clause();
    Schema_alter_clauseContext *schema_alter_clause();
    Data_tag_alter_clauseContext *data_tag_alter_clause();
    Position_clauseContext *position_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_alteration_optsContext* work_class_alteration_opts();

  class  For_from_to_alter_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_from_to_alter_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    From_valueContext *from_value();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *UNITS();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *TO();
    To_valueContext *to_value();


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
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *ANY();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_tag_alter_clauseContext* data_tag_alter_clause();

  class  Alter_workload_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_workload_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    std::vector<Alter_workload_opts_itemContext *> alter_workload_opts_item();
    Alter_workload_opts_itemContext* alter_workload_opts_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_workload_statementContext* alter_workload_statement();

  class  Alter_workload_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_workload_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Connection_attributesContext *connection_attributes();
    antlr4::tree::TerminalNode *DROP();
    Allow_disallowContext *allow_disallow();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *ACCESS();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *DEGREE_();
    antlr4::tree::TerminalNode *DEFAULT();
    DegreeContext *degree();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS_();
    Service_class_nameContext *service_class_name();
    antlr4::tree::TerminalNode *UNDER();
    Service_superclass_nameContext *service_superclass_name();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *LOW();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *DATA();
    Alter_collect_activity_data_clauseContext *alter_collect_activity_data_clause();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *METRICS();
    Extended_base_noneContext *extended_base_none();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *WORK();
    Base_noneContext *base_none();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TIMEOUT();
    Alter_collect_history_clauseContext *alter_collect_history_clause();
    antlr4::tree::TerminalNode *DEADLOCK();
    antlr4::tree::TerminalNode *WAIT();
    Alter_collect_lock_wait_data_clauseContext *alter_collect_lock_wait_data_clause();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *INCLUDE();
    std::vector<Package_executableContext *> package_executable();
    Package_executableContext* package_executable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIST();
    antlr4::tree::TerminalNode* LIST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_workload_opts_itemContext* alter_workload_opts_item();

  class  Package_executableContext : public antlr4::ParserRuleContext {
  public:
    Package_executableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *EXECUTABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_executableContext* package_executable();

  class  Base_noneContext : public antlr4::ParserRuleContext {
  public:
    Base_noneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *NONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_noneContext* base_none();

  class  Extended_base_noneContext : public antlr4::ParserRuleContext {
  public:
    Extended_base_noneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDED();
    Base_noneContext *base_none();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extended_base_noneContext* extended_base_none();

  class  Alter_collect_activity_data_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_collect_activity_data_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *WITH();
    std::vector<With_optsContext *> with_opts();
    With_optsContext* with_opts(size_t i);
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_collect_activity_data_clauseContext* alter_collect_activity_data_clause();

  class  With_optsContext : public antlr4::ParserRuleContext {
  public:
    With_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_optsContext* with_opts();

  class  Alter_collect_history_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_collect_history_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_collect_history_clauseContext* alter_collect_history_clause();

  class  Alter_collect_lock_wait_data_clauseContext : public antlr4::ParserRuleContext {
  public:
    Alter_collect_lock_wait_data_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *THAN();
    Wait_timeContext *wait_time();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MICROSECONDS();
    Alter_collect_history_clauseContext *alter_collect_history_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_collect_lock_wait_data_clauseContext* alter_collect_lock_wait_data_clause();

  class  Alter_wrapper_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_wrapper_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Alter_wrapper_opts_itemContext *> alter_wrapper_opts_item();
    Alter_wrapper_opts_itemContext* alter_wrapper_opts_item(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_wrapper_statementContext* alter_wrapper_statement();

  class  Alter_wrapper_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Alter_wrapper_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Wrapper_option_nameContext *wrapper_option_name();
    String_constantContext *string_constant();
    Add_setContext *add_set();
    antlr4::tree::TerminalNode *DROP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_wrapper_opts_itemContext* alter_wrapper_opts_item();

  class  Alter_xsrobject_statementContext : public antlr4::ParserRuleContext {
  public:
    Alter_xsrobject_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *DECOMPOSITION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alter_xsrobject_statementContext* alter_xsrobject_statement();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  String_constantContext : public antlr4::ParserRuleContext {
  public:
    String_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_constantContext* string_constant();

  class  Numeric_constantContext : public antlr4::ParserRuleContext {
  public:
    Numeric_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *REAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Numeric_constantContext* numeric_constant();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_data_typeContext *anchored_data_type();
    Row_type_nameContext *row_type_name();
    Array_type_nameContext *array_type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  Anchored_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Anchored_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANCHOR();
    Variable_nameContext *variable_name();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TO();
    Table_or_view_nameContext *table_or_view_name();
    Cursor_variable_nameContext *cursor_variable_name();
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
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();
    Column_nameContext *column_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anchored_non_row_data_typeContext* anchored_non_row_data_type();

  class  Anchored_row_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Anchored_row_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANCHOR();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TO();
    Table_or_view_nameContext *table_or_view_name();
    Cursor_variable_nameContext *cursor_variable_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anchored_row_data_typeContext* anchored_row_data_type();

  class  Source_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Source_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_data_typeContext *anchored_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_data_typeContext* source_data_type();

  class  Data_type_constrainstContext : public antlr4::ParserRuleContext {
  public:
    Data_type_constrainstContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_constrainstContext* data_type_constrainst();

  class  Check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_conditionContext* check_condition();

  class  Data_type_2Context : public antlr4::ParserRuleContext {
  public:
    Data_type_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *VARCHAR();
    Char_characterContext *char_character();
    antlr4::tree::TerminalNode *VARYING();
    Octets_codeunitsContext *octets_codeunits();
    Anchored_non_row_data_typeContext *anchored_non_row_data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_2Context* data_type_2();

  class  Built_in_typeContext : public antlr4::ParserRuleContext {
  public:
    Built_in_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *PRECISION();
    Char_characterContext *char_character();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *VARYING();
    Octets_codeunitsContext *octets_codeunits();
    antlr4::tree::TerminalNode *CLOB();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *OBJECT();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *VARGRAPHIC();
    CodeunitsContext *codeunits();
    antlr4::tree::TerminalNode *DBCLOB();
    antlr4::tree::TerminalNode *NCHAR();
    antlr4::tree::TerminalNode *NATIONAL();
    Integer_parenContext *integer_paren();
    antlr4::tree::TerminalNode *NVARCHAR();
    antlr4::tree::TerminalNode *NCLOB();
    antlr4::tree::TerminalNode *CHARACTER();
    Integer_kmg_parenContext *integer_kmg_paren();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *BLOB();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *CURSOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Built_in_typeContext* built_in_type();

  class  Integer_parenContext : public antlr4::ParserRuleContext {
  public:
    Integer_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_parenContext* integer_paren();

  class  Integer_kmg_parenContext : public antlr4::ParserRuleContext {
  public:
    Integer_kmg_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    KmgContext *kmg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_kmg_parenContext* integer_kmg_paren();

  class  Char_characterContext : public antlr4::ParserRuleContext {
  public:
    Char_characterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *CHARACTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Char_characterContext* char_character();

  class  Octets_codeunitsContext : public antlr4::ParserRuleContext {
  public:
    Octets_codeunitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCTETS();
    antlr4::tree::TerminalNode *CODEUNITS32();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Octets_codeunitsContext* octets_codeunits();

  class  CodeunitsContext : public antlr4::ParserRuleContext {
  public:
    CodeunitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *CODEUNITS32();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeunitsContext* codeunits();

  class  KmgContext : public antlr4::ParserRuleContext {
  public:
    KmgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *K();
    antlr4::tree::TerminalNode *M();
    antlr4::tree::TerminalNode *G();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KmgContext* kmg();

  class  Rs_locator_variableContext : public antlr4::ParserRuleContext {
  public:
    Rs_locator_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_locator_variableContext* rs_locator_variable();

  class  Integer_constant_listContext : public antlr4::ParserRuleContext {
  public:
    Integer_constant_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Integer_constantContext *> integer_constant();
    Integer_constantContext* integer_constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constant_listContext* integer_constant_list();

  class  Integer_constantContext : public antlr4::ParserRuleContext {
  public:
    Integer_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constantContext* integer_constant();

  class  Integer_valueContext : public antlr4::ParserRuleContext {
  public:
    Integer_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_valueContext* integer_value();

  class  Positive_integerContext : public antlr4::ParserRuleContext {
  public:
    Positive_integerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Positive_integerContext* positive_integer();

  class  Bigint_valueContext : public antlr4::ParserRuleContext {
  public:
    Bigint_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bigint_valueContext* bigint_value();

  class  Bigint_constantContext : public antlr4::ParserRuleContext {
  public:
    Bigint_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bigint_constantContext* bigint_constant();

  class  Member_numberContext : public antlr4::ParserRuleContext {
  public:
    Member_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_numberContext* member_number();

  class  Version_idContext : public antlr4::ParserRuleContext {
  public:
    Version_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Version_idContext* version_id();

  class  Drop_statementContext : public antlr4::ParserRuleContext {
  public:
    Drop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROP();
    Alias_designatorContext *alias_designator();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Db_partition_group_nameContext *db_partition_group_name();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MAPPING();
    Function_mapping_nameContext *function_mapping_name();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *EXTENSION();
    Index_extension_nameContext *index_extension_name();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *MASK();
    Mask_nameContext *mask_name();
    Method_designatorContext *method_designator();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *NICKNAME();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *COMPONENT();
    Sec_label_comp_nameContext *sec_label_comp_name();
    Security_policy_nameContext *security_policy_name();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    Service_class_designatorContext *service_class_designator();
    antlr4::tree::TerminalNode *STOGROUP();
    Storagegroup_nameContext *storagegroup_name();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *HIERARCHY();
    Root_table_nameContext *root_table_name();
    Tablespace_name_listContext *tablespace_name_list();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_mapping_nameContext *type_mapping_name();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    Usage_list_nameContext *usage_list_name();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    Root_view_nameContext *root_view_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SET();
    Work_action_set_nameContext *work_action_set_name();
    antlr4::tree::TerminalNode *CLASS_();
    Work_class_set_nameContext *work_class_set_name();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();
    antlr4::tree::TerminalNode *TABLESPACE();
    antlr4::tree::TerminalNode *TABLESPACES();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();
    antlr4::tree::TerminalNode *ALL();
    Group_nameContext *group_name();
    Authorization_nameContext *authorization_name();
    Version_idContext *version_id();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *VERSION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drop_statementContext* drop_statement();

  class  Alias_designatorContext : public antlr4::ParserRuleContext {
  public:
    Alias_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALIAS();
    Alias_nameContext *alias_name();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *SEQUENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_designatorContext* alias_designator();

  class  Service_class_designatorContext : public antlr4::ParserRuleContext {
  public:
    Service_class_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS_();
    Service_class_nameContext *service_class_name();
    antlr4::tree::TerminalNode *UNDER();
    Service_superclass_nameContext *service_superclass_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_class_designatorContext* service_class_designator();

  class  Tablespace_name_listContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_name_listContext* tablespace_name_list();

  class  Associate_locators_statementContext : public antlr4::ParserRuleContext {
  public:
    Associate_locators_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSOCIATE();
    std::vector<Rs_locator_variableContext *> rs_locator_variable();
    Rs_locator_variableContext* rs_locator_variable(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    antlr4::tree::TerminalNode *LOCATOR();
    antlr4::tree::TerminalNode *LOCATORS();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *SET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Associate_locators_statementContext* associate_locators_statement();

  class  Audit_statementContext : public antlr4::ParserRuleContext {
  public:
    Audit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *ACCESSCTRL();
    antlr4::tree::TerminalNode *CREATE_SECURE_OBJECT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *REMOVE();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_statementContext* audit_statement();

  class  Begin_declare_section_statementContext : public antlr4::ParserRuleContext {
  public:
    Begin_declare_section_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *SECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_declare_section_statementContext* begin_declare_section_statement();

  class  Call_statementContext : public antlr4::ParserRuleContext {
  public:
    Call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    Procedure_nameContext *procedure_name();
    Arg_list_parenContext *arg_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_statementContext* call_statement();

  class  Arg_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Arg_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Arg_listContext *arg_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_list_parenContext* arg_list_paren();

  class  Arg_listContext : public antlr4::ParserRuleContext {
  public:
    Arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_listContext* arg_list();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *NULL_();
    Parameter_nameContext *parameter_name();
    antlr4::tree::TerminalNode *ASSOC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CASE();
    antlr4::tree::TerminalNode* CASE(size_t i);
    antlr4::tree::TerminalNode *END();
    Searched_case_statement_when_clauseContext *searched_case_statement_when_clause();
    Simple_case_statement_when_clauseContext *simple_case_statement_when_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Searched_case_statement_when_clauseContext : public antlr4::ParserRuleContext {
  public:
    Searched_case_statement_when_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<Sql_procedure_statementContext *> sql_procedure_statement();
    Sql_procedure_statementContext* sql_procedure_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Searched_case_statement_when_clauseContext* searched_case_statement_when_clause();

  class  Simple_case_statement_when_clauseContext : public antlr4::ParserRuleContext {
  public:
    Simple_case_statement_when_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    std::vector<Sql_procedure_statementContext *> sql_procedure_statement();
    Sql_procedure_statementContext* sql_procedure_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_case_statement_when_clauseContext* simple_case_statement_when_clause();

  class  Close_statementContext : public antlr4::ParserRuleContext {
  public:
    Close_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE();
    Cursor_nameContext *cursor_name();
    Cursor_variable_nameContext *cursor_variable_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RELEASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Close_statementContext* close_statement();

  class  Comment_statementContext : public antlr4::ParserRuleContext {
  public:
    Comment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *ON();
    Comment_objectsContext *comment_objects();
    antlr4::tree::TerminalNode *IS();
    String_constantContext *string_constant();
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_commentContext *> column_comment();
    Column_commentContext* column_comment(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_statementContext* comment_statement();

  class  Column_commentContext : public antlr4::ParserRuleContext {
  public:
    Column_commentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *IS();
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_commentContext* column_comment();

  class  Comment_objectsContext : public antlr4::ParserRuleContext {
  public:
    Comment_objectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alias_designatorContext *alias_designator();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *COLUMN();
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *DOT();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Table_nameContext *table_name();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Db_partition_group_nameContext *db_partition_group_name();
    Function_designatorContext *function_designator();
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
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    antlr4::tree::TerminalNode *NICKNAME();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    Version_idContext *version_id();
    antlr4::tree::TerminalNode *VERSION();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Security_label_nameContext *security_label_name();
    antlr4::tree::TerminalNode *COMPONENT();
    Sec_label_comp_nameContext *sec_label_comp_name();
    Security_policy_nameContext *security_policy_name();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *OPTION();
    Server_option_nameContext *server_option_name();
    antlr4::tree::TerminalNode *FOR();
    Remote_serverContext *remote_server();
    Service_class_designatorContext *service_class_designator();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    Type_mapping_nameContext *type_mapping_name();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    Usage_list_nameContext *usage_list_name();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SET();
    Work_action_set_nameContext *work_action_set_name();
    antlr4::tree::TerminalNode *CLASS_();
    Work_class_set_nameContext *work_class_set_name();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comment_objectsContext* comment_objects();

  class  Commit_statementContext : public antlr4::ParserRuleContext {
  public:
    Commit_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *WORK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Commit_statementContext* commit_statement();

  class  Connect_type_1_statementContext : public antlr4::ParserRuleContext {
  public:
    Connect_type_1_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONNECT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *RESET();
    AuthorizationContext *authorization();
    Server_nameContext *server_name();
    Host_variableContext *host_variable();
    Lock_blockContext *lock_block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Connect_type_1_statementContext* connect_type_1_statement();

  class  AuthorizationContext : public antlr4::ParserRuleContext {
  public:
    AuthorizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USER();
    Authorization_nameContext *authorization_name();
    PasswordsContext *passwords();
    AccesstokenContext *accesstoken();
    antlr4::tree::TerminalNode *APIKEY();
    Api_keyContext *api_key();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AuthorizationContext* authorization();

  class  PasswordsContext : public antlr4::ParserRuleContext {
  public:
    PasswordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    std::vector<Password_Context *> password_();
    Password_Context* password_(size_t i);
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *CONFIRM();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *PASSWORD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PasswordsContext* passwords();

  class  Lock_blockContext : public antlr4::ParserRuleContext {
  public:
    Lock_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *SINGLE();
    antlr4::tree::TerminalNode *MEMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_blockContext* lock_block();

  class  AccesstokenContext : public antlr4::ParserRuleContext {
  public:
    AccesstokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESSTOKEN();
    TokenContext *token();
    antlr4::tree::TerminalNode *ACCESSTOKENTYPE();
    Token_typeContext *token_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccesstokenContext* accesstoken();

  class  TokenContext : public antlr4::ParserRuleContext {
  public:
    TokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TokenContext* token();

  class  Api_keyContext : public antlr4::ParserRuleContext {
  public:
    Api_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Api_keyContext* api_key();

  class  Token_typeContext : public antlr4::ParserRuleContext {
  public:
    Token_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Token_typeContext* token_type();

  class  Declare_cursor_statementContext : public antlr4::ParserRuleContext {
  public:
    Declare_cursor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    HoldabilityContext *holdability();
    ReturnabilityContext *returnability();
    antlr4::tree::TerminalNode *FOR();
    Select_statementContext *select_statement();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *INSENSITIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_cursor_statementContext* declare_cursor_statement();

  class  Declare_global_temporary_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Declare_global_temporary_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declare_global_temporary_table_statementContext* declare_global_temporary_table_statement();

  class  Describe_statementContext : public antlr4::ParserRuleContext {
  public:
    Describe_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESCRIBE();
    Table_nameContext *table_name();
    Select_statementContext *select_statement();
    Call_statementContext *call_statement();
    antlr4::tree::TerminalNode *XQUERY();
    Xquery_statementContext *xquery_statement();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *DETAIL();
    antlr4::tree::TerminalNode *RELATIONAL();
    antlr4::tree::TerminalNode *XML();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *SEARCH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Describe_statementContext* describe_statement();

  class  Xquery_statementContext : public antlr4::ParserRuleContext {
  public:
    Xquery_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xquery_statementContext* xquery_statement();

  class  Describe_input_statementContext : public antlr4::ParserRuleContext {
  public:
    Describe_input_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *INPUT();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *INTO();
    Descriptor_nameContext *descriptor_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Describe_input_statementContext* describe_input_statement();

  class  Describe_output_statementContext : public antlr4::ParserRuleContext {
  public:
    Describe_output_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESCRIBE();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *INTO();
    Descriptor_nameContext *descriptor_name();
    antlr4::tree::TerminalNode *OUTPUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Describe_output_statementContext* describe_output_statement();

  class  Disconnect_statementContext : public antlr4::ParserRuleContext {
  public:
    Disconnect_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISCONNECT();
    Server_nameContext *server_name();
    Host_variableContext *host_variable();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SQL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disconnect_statementContext* disconnect_statement();

  class  End_declare_section_statementContext : public antlr4::ParserRuleContext {
  public:
    End_declare_section_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *SECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_declare_section_statementContext* end_declare_section_statement();

  class  Execute_statementContext : public antlr4::ParserRuleContext {
  public:
    Execute_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ROWS();
    std::vector<Assignment_targetContext *> assignment_target();
    Assignment_targetContext* assignment_target(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESCRIPTOR();
    antlr4::tree::TerminalNode* DESCRIPTOR(size_t i);
    Descriptor_nameContext *descriptor_name();
    std::vector<Host_variable_expressionContext *> host_variable_expression();
    Host_variable_expressionContext* host_variable_expression(size_t i);
    Input_descriptor_nameContext *input_descriptor_name();
    Host_variableContext *host_variable();
    Integer_constantContext *integer_constant();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_statementContext* execute_statement();

  class  Host_variable_expressionContext : public antlr4::ParserRuleContext {
  public:
    Host_variable_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Host_variableContext *host_variable();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_variable_expressionContext* host_variable_expression();

  class  Assignment_targetContext : public antlr4::ParserRuleContext {
  public:
    Assignment_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Global_variable_nameContext *global_variable_name();
    Host_variable_nameContext *host_variable_name();
    Sql_parameter_nameContext *sql_parameter_name();
    Sql_variable_nameContext *sql_variable_name();
    Transition_variable_nameContext *transition_variable_name();
    Array_variable_nameContext *array_variable_name();
    antlr4::tree::TerminalNode *LEFT_SQR_BKT();
    Array_indexContext *array_index();
    antlr4::tree::TerminalNode *RIGHT_SQR_BKT();
    Field_referenceContext *field_reference();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_targetContext* assignment_target();

  class  Execute_immediate_statementContext : public antlr4::ParserRuleContext {
  public:
    Execute_immediate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Execute_immediate_statementContext* execute_immediate_statement();

  class  Explain_statementContext : public antlr4::ParserRuleContext {
  public:
    Explain_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPLAIN();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *PLAN();
    antlr4::tree::TerminalNode *SELECTION();
    antlr4::tree::TerminalNode *ALL();
    Explainable_sql_statementContext *explainable_sql_statement();
    antlr4::tree::TerminalNode *XQUERY();
    StringContext *string();
    antlr4::tree::TerminalNode *SNAPSHOT();
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *ONCE();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    antlr4::tree::TerminalNode *QUERYNO();
    std::vector<antlr4::tree::TerminalNode *> EQ();
    antlr4::tree::TerminalNode* EQ(size_t i);
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *QUERYTAG();
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explain_statementContext* explain_statement();

  class  Explainable_sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Explainable_sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Explainable_sql_statementContext* explainable_sql_statement();

  class  Fetch_statementContext : public antlr4::ParserRuleContext {
  public:
    Fetch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    Cursor_nameContext *cursor_name();
    Cursor_variable_nameContext *cursor_variable_name();
    antlr4::tree::TerminalNode *INTO();
    std::vector<Assignment_targetContext *> assignment_target();
    Assignment_targetContext* assignment_target(size_t i);
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *DESCRIPTOR();
    Descriptor_nameContext *descriptor_name();
    antlr4::tree::TerminalNode *FROM();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_statementContext* fetch_statement();

  class  Flush_bufferpools_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_bufferpools_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    antlr4::tree::TerminalNode *BUFFERPOOLS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_bufferpools_statementContext* flush_bufferpools_statement();

  class  Flush_event_monitor_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_event_monitor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *BUFFER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_event_monitor_statementContext* flush_event_monitor_statement();

  class  Flush_federated_cache_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_federated_cache_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *FOR();
    Remote_object_nameContext *remote_object_name();
    Data_source_nameContext *data_source_name();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Schema_nameContext *schema_name();
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_federated_cache_statementContext* flush_federated_cache_statement();

  class  Flush_optimization_profile_cache_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_optimization_profile_cache_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *ALL();
    Optimization_profile_nameContext *optimization_profile_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_optimization_profile_cache_statementContext* flush_optimization_profile_cache_statement();

  class  Flush_package_cache_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_package_cache_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXECUTABLE();
    antlr4::tree::TerminalNode *ID();
    Executable_idContext *executable_id();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *HARD();
    antlr4::tree::TerminalNode *INVALIDATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_package_cache_statementContext* flush_package_cache_statement();

  class  Flush_authentication_cache_statementContext : public antlr4::ParserRuleContext {
  public:
    Flush_authentication_cache_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLUSH();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flush_authentication_cache_statementContext* flush_authentication_cache_statement();

  class  Free_locator_statementContext : public antlr4::ParserRuleContext {
  public:
    Free_locator_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FREE();
    antlr4::tree::TerminalNode *LOCATOR();
    std::vector<Variable_nameContext *> variable_name();
    Variable_nameContext* variable_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Free_locator_statementContext* free_locator_statement();

  class  Get_diagnostics_statementContext : public antlr4::ParserRuleContext {
  public:
    Get_diagnostics_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    Statement_informationContext *statement_information();
    Condition_informationContext *condition_information();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Get_diagnostics_statementContext* get_diagnostics_statement();

  class  Statement_informationContext : public antlr4::ParserRuleContext {
  public:
    Statement_informationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *DB2_RETURN_STATUS();
    antlr4::tree::TerminalNode *DB2_SQL_NESTING_LEVEL();
    antlr4::tree::TerminalNode *ROW_COUNT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_informationContext* statement_information();

  class  Condition_informationContext : public antlr4::ParserRuleContext {
  public:
    Condition_informationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPTION();
    std::vector<Condition_var_assignmentContext *> condition_var_assignment();
    Condition_var_assignmentContext* condition_var_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_informationContext* condition_information();

  class  Condition_var_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Condition_var_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *DB2_TOKEN_STRING();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_var_assignmentContext* condition_var_assignment();

  class  Lock_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Lock_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *EXCLUSIVE();
    Table_nameContext *table_name();
    Nick_nameContext *nick_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lock_table_statementContext* lock_table_statement();

  class  Pipe_statementContext : public antlr4::ParserRuleContext {
  public:
    Pipe_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Row_fullselectContext *row_fullselect();
    Row_expressionContext *row_expression();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pipe_statementContext* pipe_statement();

  class  Refresh_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Refresh_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *TABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Refresh_table_statementContext* refresh_table_statement();

  class  Release_connection_statementContext : public antlr4::ParserRuleContext {
  public:
    Release_connection_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RELEASE();
    Server_nameContext *server_name();
    Host_variableContext *host_variable();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SQL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Release_connection_statementContext* release_connection_statement();

  class  Rename_statementContext : public antlr4::ParserRuleContext {
  public:
    Rename_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TO();
    Target_identifierContext *target_identifier();
    Source_table_nameContext *source_table_name();
    antlr4::tree::TerminalNode *INDEX();
    Source_index_nameContext *source_index_name();
    antlr4::tree::TerminalNode *TABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_statementContext* rename_statement();

  class  Rename_stogroup_statementContext : public antlr4::ParserRuleContext {
  public:
    Rename_stogroup_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *STOGROUP();
    Source_storagegroup_nameContext *source_storagegroup_name();
    antlr4::tree::TerminalNode *TO();
    Target_storagegroup_nameContext *target_storagegroup_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_stogroup_statementContext* rename_stogroup_statement();

  class  Rename_tablespace_statementContext : public antlr4::ParserRuleContext {
  public:
    Rename_tablespace_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RENAME();
    antlr4::tree::TerminalNode *TABLESPACE();
    Source_tablespace_nameContext *source_tablespace_name();
    antlr4::tree::TerminalNode *TO();
    Target_tablespace_nameContext *target_tablespace_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rename_tablespace_statementContext* rename_tablespace_statement();

  class  Set_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *COMPILATION();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    Host_variableContext *host_variable();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *DECFLOAT();
    antlr4::tree::TerminalNode *ROUNDING();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *DEGREE_();
    std::vector<antlr4::tree::TerminalNode *> EXPLAIN();
    antlr4::tree::TerminalNode* EXPLAIN(size_t i);
    antlr4::tree::TerminalNode *SNAPSHOT();
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
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *MDC();
    antlr4::tree::TerminalNode *ROLLOUT();
    antlr4::tree::TerminalNode *OPTIMIZATION();
    antlr4::tree::TerminalNode *PROFILE();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *PATH();
    Pkg_opt_listContext *pkg_opt_list();
    antlr4::tree::TerminalNode *PACKAGESET();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *REFRESH();
    antlr4::tree::TerminalNode *AGE();
    antlr4::tree::TerminalNode *SQL_CCFLAGS();
    antlr4::tree::TerminalNode *TEMPORAL();
    antlr4::tree::TerminalNode *ENCRYPTION();
    antlr4::tree::TerminalNode *PASSWORD();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *INTEGRITY();
    antlr4::tree::TerminalNode *PASSTHRU();
    Path_opt_listContext *path_opt_list();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    antlr4::tree::TerminalNode *SCHEMA();
    std::vector<antlr4::tree::TerminalNode *> SERVER();
    antlr4::tree::TerminalNode* SERVER(size_t i);
    Server_option_nameContext *server_option_name();
    antlr4::tree::TerminalNode *TO();
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *FOR();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *USAGE();
    antlr4::tree::TerminalNode *LIST();
    Usage_list_nameContext *usage_list_name();
    antlr4::tree::TerminalNode *UR();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *RR();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *LC_MESSAGES_();
    antlr4::tree::TerminalNode *LC_TIME_();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *ROUND_CEILING();
    antlr4::tree::TerminalNode *ROUND_DOWN();
    antlr4::tree::TerminalNode *ROUND_FLOOR();
    antlr4::tree::TerminalNode *ROUND_HALF_EVEN();
    antlr4::tree::TerminalNode *ROUND_HALF_UP();
    Yes_noContext *yes_no();
    antlr4::tree::TerminalNode *REOPT();
    antlr4::tree::TerminalNode *ANY();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *NONE();
    Maintain_opt_listContext *maintain_opt_list();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();
    Optimization_profile_nameContext *optimization_profile_name();
    antlr4::tree::TerminalNode *SINGLE_DIGIT();
    Numeric_constantContext *numeric_constant();
    VariableContext *variable();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *L_ZERO();
    antlr4::tree::TerminalNode *L_ONE();
    std::vector<Table_nameContext *> table_name();
    Table_nameContext* table_name(size_t i);
    std::vector<Table_checked_options_listContext *> table_checked_options_list();
    Table_checked_options_listContext* table_checked_options_list(size_t i);
    antlr4::tree::TerminalNode *CHECKED();
    std::vector<Table_unchecked_optionsContext *> table_unchecked_options();
    Table_unchecked_optionsContext* table_unchecked_options(size_t i);
    antlr4::tree::TerminalNode *UNCHECKED();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *ACTIVE();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *RELEASED();
    Var_def_listContext *var_def_list();
    Boolean_variable_nameContext *boolean_variable_name();
    antlr4::tree::TerminalNode *EQ();
    Array_variable_nameContext *array_variable_name();
    antlr4::tree::TerminalNode *LEFT_SQR_BKT();
    Array_indexContext *array_index();
    antlr4::tree::TerminalNode *RIGHT_SQR_BKT();
    Target_cursor_variableContext *target_cursor_variable();
    Target_row_variableContext *target_row_variable();
    antlr4::tree::TerminalNode *RECOMMEND();
    antlr4::tree::TerminalNode *EVALUATE();
    antlr4::tree::TerminalNode *INDEXES();
    antlr4::tree::TerminalNode *PARTITIONINGS();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *OFF();
    Access_mode_clauseContext *access_mode_clause();
    Cascade_clauseContext *cascade_clause();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *PRUNE();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    Cursor_variable_nameContext *cursor_variable_name();
    Cursor_value_constructorContext *cursor_value_constructor();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Expr_nullContext *> expr_null();
    Expr_nullContext* expr_null(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Row_fullselectContext *row_fullselect();
    Row_expressionContext *row_expression();
    antlr4::tree::TerminalNode *NORCAC();
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Check_optionsContext *check_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_statementContext* set_statement();

  class  Access_mode_clauseContext : public antlr4::ParserRuleContext {
  public:
    Access_mode_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READ();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Access_mode_clauseContext* access_mode_clause();

  class  Cascade_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cascade_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();
    To_descendent_typesContext *to_descendent_types();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cascade_clauseContext* cascade_clause();

  class  To_descendent_typesContext : public antlr4::ParserRuleContext {
  public:
    To_descendent_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *TABLES();
    Table_type_listContext *table_type_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  To_descendent_typesContext* to_descendent_types();

  class  Table_type_listContext : public antlr4::ParserRuleContext {
  public:
    Table_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_typeContext *> table_type();
    Table_typeContext* table_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_type_listContext* table_type_list();

  class  Table_typeContext : public antlr4::ParserRuleContext {
  public:
    Table_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *FOREIGN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *STAGING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_typeContext* table_type();

  class  Table_checked_options_listContext : public antlr4::ParserRuleContext {
  public:
    Table_checked_options_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_checked_optionsContext *> table_checked_options();
    Table_checked_optionsContext* table_checked_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_checked_options_listContext* table_checked_options_list();

  class  Table_checked_optionsContext : public antlr4::ParserRuleContext {
  public:
    Table_checked_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Online_optionsContext *online_options();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *IDENTITY();
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

  class  Check_optionsContext : public antlr4::ParserRuleContext {
  public:
    Check_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Incremental_optionsContext *incremental_options();
    Exception_clauseContext *exception_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_optionsContext* check_options();

  class  Incremental_optionsContext : public antlr4::ParserRuleContext {
  public:
    Incremental_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCREMENTAL();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Incremental_optionsContext* incremental_options();

  class  Exception_clauseContext : public antlr4::ParserRuleContext {
  public:
    Exception_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EXCEPTION();
    std::vector<In_table_use_clauseContext *> in_table_use_clause();
    In_table_use_clauseContext* in_table_use_clause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exception_clauseContext* exception_clause();

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

  class  Table_unchecked_optionsContext : public antlr4::ParserRuleContext {
  public:
    Table_unchecked_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Integrity_optionsContext *> integrity_options();
    Integrity_optionsContext* integrity_options(size_t i);
    std::vector<Full_accessContext *> full_access();
    Full_accessContext* full_access(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_unchecked_optionsContext* table_unchecked_options();

  class  Full_accessContext : public antlr4::ParserRuleContext {
  public:
    Full_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ACCESS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_accessContext* full_access();

  class  Integrity_optionsContext : public antlr4::ParserRuleContext {
  public:
    Integrity_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    std::vector<Integrity_options_itemContext *> integrity_options_item();
    Integrity_options_itemContext* integrity_options_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integrity_optionsContext* integrity_options();

  class  Integrity_options_itemContext : public antlr4::ParserRuleContext {
  public:
    Integrity_options_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  Integrity_options_itemContext* integrity_options_item();

  class  Var_def_listContext : public antlr4::ParserRuleContext {
  public:
    Var_def_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Var_defContext *> var_def();
    Var_defContext* var_def(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_def_listContext* var_def_list();

  class  Var_defContext : public antlr4::ParserRuleContext {
  public:
    Var_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Target_variableContext *> target_variable();
    Target_variableContext* target_variable(size_t i);
    antlr4::tree::TerminalNode *EQ();
    std::vector<Expr_null_defaultContext *> expr_null_default();
    Expr_null_defaultContext* expr_null_default(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    Row_fullselectContext *row_fullselect();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_defContext* var_def();

  class  Expr_nullContext : public antlr4::ParserRuleContext {
  public:
    Expr_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULL_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_nullContext* expr_null();

  class  Expr_null_defaultContext : public antlr4::ParserRuleContext {
  public:
    Expr_null_defaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expr_null_defaultContext* expr_null_default();

  class  Array_indexContext : public antlr4::ParserRuleContext {
  public:
    Array_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_indexContext* array_index();

  class  Row_fullselectContext : public antlr4::ParserRuleContext {
  public:
    Row_fullselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_fullselectContext* row_fullselect();

  class  Target_variableContext : public antlr4::ParserRuleContext {
  public:
    Target_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Global_variable_nameContext *global_variable_name();
    Host_variableContext *host_variable();
    Parameter_markerContext *parameter_marker();
    Sql_parameter_nameContext *sql_parameter_name();
    Field_referenceContext *field_reference();
    Sql_variable_nameContext *sql_variable_name();
    Transition_variable_nameContext *transition_variable_name();
    std::vector<Attribute_nameContext *> attribute_name();
    Attribute_nameContext* attribute_name(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_variableContext* target_variable();

  class  Target_cursor_variableContext : public antlr4::ParserRuleContext {
  public:
    Target_cursor_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_cursor_variableContext* target_cursor_variable();

  class  Target_row_variableContext : public antlr4::ParserRuleContext {
  public:
    Target_row_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Global_variable_nameContext *global_variable_name();
    Parameter_markerContext *parameter_marker();
    Sql_parameter_nameContext *sql_parameter_name();
    Sql_variable_nameContext *sql_variable_name();
    Row_array_element_specificationContext *row_array_element_specification();
    Row_field_referenceContext *row_field_reference();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_row_variableContext* target_row_variable();

  class  Row_array_element_specificationContext : public antlr4::ParserRuleContext {
  public:
    Row_array_element_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_array_element_specificationContext* row_array_element_specification();

  class  Row_field_referenceContext : public antlr4::ParserRuleContext {
  public:
    Row_field_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_field_referenceContext* row_field_reference();

  class  Field_referenceContext : public antlr4::ParserRuleContext {
  public:
    Field_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Row_variable_nameContext *row_variable_name();
    antlr4::tree::TerminalNode *DOT();
    Field_nameContext *field_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_referenceContext* field_reference();

  class  Search_conditionContext : public antlr4::ParserRuleContext {
  public:
    Search_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SELECTIVITY();
    Numeric_constantContext *numeric_constant();
    std::vector<Search_conditionContext *> search_condition();
    Search_conditionContext* search_condition(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_conditionContext* search_condition();
  Search_conditionContext* search_condition(int precedence);
  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::ExpressionContext *e1 = nullptr;
    Db2Parser::ExpressionContext *e = nullptr;
    Db2Parser::StringContext *je = nullptr;
    Db2Parser::StringContext *jp = nullptr;
    Db2Parser::ExpressionContext *me = nullptr;
    Db2Parser::ExpressionContext *pe = nullptr;
    Db2Parser::ExpressionContext *ee = nullptr;
    Db2Parser::ExpressionContext *s1 = nullptr;
    Db2Parser::ExpressionContext *s2 = nullptr;
    Db2Parser::ExpressionContext *e2 = nullptr;
    Db2Parser::ExpressionContext *s = nullptr;
    Db2Parser::ExpressionContext *f = nullptr;
    Db2Parser::ExpressionContext *xe = nullptr;
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Comparison_operatorContext *comparison_operator();
    std::vector<Row_value_expressionContext *> row_value_expression();
    Row_value_expressionContext* row_value_expression(size_t i);
    Some_any_allContext *some_any_all();
    Fullselect_in_parenthesesContext *fullselect_in_parentheses();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ARRAY_EXISTS();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Array_indexContext *array_index();
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    Cursor_variable_nameContext *cursor_variable_name();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *EXISTS();
    Expression_list_in_parenthesesContext *expression_list_in_parentheses();
    antlr4::tree::TerminalNode *JSON_EXISTS();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> ERROR();
    antlr4::tree::TerminalNode* ERROR(size_t i);
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *UNKNOWN();
    antlr4::tree::TerminalNode *JSON();
    antlr4::tree::TerminalNode *BSON();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *OVERLAPS();
    antlr4::tree::TerminalNode *REGEXP_LIKE();
    antlr4::tree::TerminalNode *CODEUNITS32();
    antlr4::tree::TerminalNode *CODEUNITS16();
    antlr4::tree::TerminalNode *OCTETS();
    std::vector<Type_nameContext *> type_name();
    Type_nameContext* type_name(size_t i);
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> ONLY();
    antlr4::tree::TerminalNode* ONLY(size_t i);
    antlr4::tree::TerminalNode *VALIDATED();
    According_to_clauseContext *according_to_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  According_to_clauseContext : public antlr4::ParserRuleContext {
  public:
    According_to_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACCORDING();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *XMLSCHEMA();
    Xml_schema_identificationContext *xml_schema_identification();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Xml_schema_identification_listContext *xml_schema_identification_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  According_to_clauseContext* according_to_clause();

  class  Xml_schema_identification_listContext : public antlr4::ParserRuleContext {
  public:
    Xml_schema_identification_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Xml_schema_identificationContext *> xml_schema_identification();
    Xml_schema_identificationContext* xml_schema_identification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_schema_identification_listContext* xml_schema_identification_list();

  class  Xml_schema_identificationContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::StringContext *u = nullptr;
    Db2Parser::StringContext *u2 = nullptr;
    Xml_schema_identificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Xml_schema_nameContext *xml_schema_name();
    antlr4::tree::TerminalNode *URI();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NAMESPACE();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    antlr4::tree::TerminalNode *LOCATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_schema_identificationContext* xml_schema_identification();

  class  Fullselect_in_parenthesesContext : public antlr4::ParserRuleContext {
  public:
    Fullselect_in_parenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fullselect_in_parenthesesContext* fullselect_in_parentheses();

  class  Some_any_allContext : public antlr4::ParserRuleContext {
  public:
    Some_any_allContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ALL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Some_any_allContext* some_any_all();

  class  Row_value_expressionContext : public antlr4::ParserRuleContext {
  public:
    Row_value_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_list_in_parenthesesContext *expression_list_in_parentheses();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_value_expressionContext* row_value_expression();

  class  Comparison_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparison_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LTGT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_operatorContext* comparison_operator();

  class  Row_expressionContext : public antlr4::ParserRuleContext {
  public:
    Row_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_expressionContext* row_expression();

  class  Path_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Path_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Path_optContext *> path_opt();
    Path_optContext* path_opt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_opt_listContext* path_opt_list();

  class  Path_optContext : public antlr4::ParserRuleContext {
  public:
    Path_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    antlr4::tree::TerminalNode *PACKAGE();
    Host_variableContext *host_variable();
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_optContext* path_opt();

  class  Pkg_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Pkg_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Pkg_optContext *> pkg_opt();
    Pkg_optContext* pkg_opt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pkg_opt_listContext* pkg_opt_list();

  class  Pkg_optContext : public antlr4::ParserRuleContext {
  public:
    Pkg_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *PATH();
    antlr4::tree::TerminalNode *USER();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *CURRENT_PATH();
    antlr4::tree::TerminalNode *CURRENT_USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    Host_variableContext *host_variable();
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pkg_optContext* pkg_opt();

  class  Maintain_opt_listContext : public antlr4::ParserRuleContext {
  public:
    Maintain_opt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Maintain_optContext *> maintain_opt();
    Maintain_optContext* maintain_opt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Maintain_opt_listContext* maintain_opt_list();

  class  Maintain_optContext : public antlr4::ParserRuleContext {
  public:
    Maintain_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  Maintain_optContext* maintain_opt();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  Host_variableContext : public antlr4::ParserRuleContext {
  public:
    Host_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_variableContext* host_variable();

  class  Set_integrity_statementContext : public antlr4::ParserRuleContext {
  public:
    Set_integrity_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_integrity_statementContext* set_integrity_statement();

  class  Transfer_ownership_statementContext : public antlr4::ParserRuleContext {
  public:
    Transfer_ownership_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSFER();
    antlr4::tree::TerminalNode *OWNERSHIP();
    antlr4::tree::TerminalNode *OF();
    ObjectsContext *objects();
    antlr4::tree::TerminalNode *TO();
    New_ownerContext *new_owner();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PRESERVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transfer_ownership_statementContext* transfer_ownership_statement();

  class  ObjectsContext : public antlr4::ParserRuleContext {
  public:
    ObjectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Alias_designatorContext *alias_designator();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Db_partition_group_nameContext *db_partition_group_name();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MAPPING();
    Function_mapping_nameContext *function_mapping_name();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *EXTENSION();
    Index_extension_nameContext *index_extension_name();
    Method_designatorContext *method_designator();
    antlr4::tree::TerminalNode *NICKNAME();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *PACKAGE();
    Package_nameContext *package_name();
    Version_idContext *version_id();
    antlr4::tree::TerminalNode *VERSION();
    Procedure_designatorContext *procedure_designator();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *HIERARCHY();
    Root_table_nameContext *root_table_name();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *DISTINCT();
    Type_mapping_nameContext *type_mapping_name();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    Root_view_nameContext *root_view_name();
    antlr4::tree::TerminalNode *XSROBJECT();
    Xsrobject_nameContext *xsrobject_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectsContext* objects();

  class  Whenever_statementContext : public antlr4::ParserRuleContext {
  public:
    Whenever_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHENEVER();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FOUND();
    antlr4::tree::TerminalNode *SQLERROR();
    antlr4::tree::TerminalNode *SQLWARNING();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *COLON();
    Host_labelContext *host_label();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *GO();
    antlr4::tree::TerminalNode *TO();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *BREAK();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Whenever_statementContext* whenever_statement();

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
    Sql_routine_statementContext *sql_routine_statement();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);
    Cursor_nameContext *cursor_name();
    antlr4::tree::TerminalNode *CURSOR();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *INSENSITIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

  class  Goto_statementContext : public antlr4::ParserRuleContext {
  public:
    Goto_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    LabelContext *label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_statementContext* goto_statement();

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
    std::vector<Sql_routine_statementContext *> sql_routine_statement();
    Sql_routine_statementContext* sql_routine_statement(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Include_statementContext : public antlr4::ParserRuleContext {
  public:
    Include_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *SQLCA();
    antlr4::tree::TerminalNode *SQLDA();
    NameContext *name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_statementContext* include_statement();

  class  Resignal_statementContext : public antlr4::ParserRuleContext {
  public:
    Resignal_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESIGNAL();
    antlr4::tree::TerminalNode *SQLSTATE();
    Condition_nameContext *condition_name();
    Signal_informationContext *signal_information();
    Sqlstate_string_constantContext *sqlstate_string_constant();
    Sqlstate_string_variableContext *sqlstate_string_variable();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Resignal_statementContext* resignal_statement();

  class  Signal_informationContext : public antlr4::ParserRuleContext {
  public:
    Signal_informationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *EQ();
    Sql_variable_nameContext *sql_variable_name();
    Sql_parameter_nameContext *sql_parameter_name();
    Diagnostic_string_constantContext *diagnostic_string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_informationContext* signal_information();

  class  Diagnostic_string_constantContext : public antlr4::ParserRuleContext {
  public:
    Diagnostic_string_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Diagnostic_string_constantContext* diagnostic_string_constant();

  class  Signal_statementContext : public antlr4::ParserRuleContext {
  public:
    Signal_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *SQLSTATE();
    Condition_nameContext *condition_name();
    Signal_information_2Context *signal_information_2();
    Sqlstate_string_constantContext *sqlstate_string_constant();
    Sqlstate_string_variableContext *sqlstate_string_variable();
    antlr4::tree::TerminalNode *VALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_statementContext* signal_statement();

  class  Sqlstate_string_constantContext : public antlr4::ParserRuleContext {
  public:
    Sqlstate_string_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sqlstate_string_constantContext* sqlstate_string_constant();

  class  Sqlstate_string_variableContext : public antlr4::ParserRuleContext {
  public:
    Sqlstate_string_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sqlstate_string_variableContext* sqlstate_string_variable();

  class  Signal_information_2Context : public antlr4::ParserRuleContext {
  public:
    Signal_information_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *MESSAGE_TEXT();
    antlr4::tree::TerminalNode *EQ();
    Diagnostic_string_expressionContext *diagnostic_string_expression();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signal_information_2Context* signal_information_2();

  class  Diagnostic_string_expressionContext : public antlr4::ParserRuleContext {
  public:
    Diagnostic_string_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Diagnostic_string_expressionContext* diagnostic_string_expression();

  class  Iterate_statementContext : public antlr4::ParserRuleContext {
  public:
    Iterate_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ITERATE();
    LabelContext *label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Iterate_statementContext* iterate_statement();

  class  Leave_statementContext : public antlr4::ParserRuleContext {
  public:
    Leave_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    LabelContext *label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Leave_statementContext* leave_statement();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LOOP();
    antlr4::tree::TerminalNode* LOOP(size_t i);
    Sql_routine_statementContext *sql_routine_statement();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  Open_statementContext : public antlr4::ParserRuleContext {
  public:
    Open_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    Cursor_nameContext *cursor_name();
    Cursor_variable_nameContext *cursor_variable_name();
    antlr4::tree::TerminalNode *USING();
    std::vector<Variable_or_expressionContext *> variable_or_expression();
    Variable_or_expressionContext* variable_or_expression(size_t i);
    antlr4::tree::TerminalNode *DESCRIPTOR();
    Descriptor_nameContext *descriptor_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_statementContext* open_statement();

  class  Variable_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Variable_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_or_expressionContext* variable_or_expression();

  class  Select_into_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_into_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_clauseContext *select_clause();
    antlr4::tree::TerminalNode *INTO();
    std::vector<Assignment_targetContext *> assignment_target();
    Assignment_targetContext* assignment_target(size_t i);
    From_clauseContext *from_clause();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Where_clauseContext *where_clause();
    Group_by_clauseContext *group_by_clause();
    Having_clauseContext *having_clause();
    Order_by_clauseContext *order_by_clause();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *UPDATE();
    Isolation_clauseContext *isolation_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    antlr4::tree::TerminalNode *OF();
    Column_name_listContext *column_name_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_into_statementContext* select_into_statement();

  class  Values_into_statementContext : public antlr4::ParserRuleContext {
  public:
    Values_into_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *INTO();
    std::vector<Assignment_targetContext *> assignment_target();
    Assignment_targetContext* assignment_target(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Row_expressionContext *row_expression();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_into_statementContext* values_into_statement();

  class  Prepare_statementContext : public antlr4::ParserRuleContext {
  public:
    Prepare_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREPARE();
    Statement_nameContext *statement_name();
    antlr4::tree::TerminalNode *FROM();
    Host_variableContext *host_variable();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> INTO();
    antlr4::tree::TerminalNode* INTO(size_t i);
    Result_descriptor_nameContext *result_descriptor_name();
    antlr4::tree::TerminalNode *INPUT();
    Input_descriptor_nameContext *input_descriptor_name();
    antlr4::tree::TerminalNode *OUTPUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prepare_statementContext* prepare_statement();

  class  Repeat_statementContext : public antlr4::ParserRuleContext {
  public:
    Repeat_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> REPEAT();
    antlr4::tree::TerminalNode* REPEAT(size_t i);
    Sql_routine_statementContext *sql_routine_statement();
    antlr4::tree::TerminalNode *UNTIL();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_statementContext* repeat_statement();

  class  Return_statementContext : public antlr4::ParserRuleContext {
  public:
    Return_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULL_();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_statementContext* return_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *DO();
    Sql_routine_statementContext *sql_routine_statement();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  Sql_routine_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_routine_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sql_procedure_statementContext *> sql_procedure_statement();
    Sql_procedure_statementContext* sql_procedure_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<Sql_function_statementContext *> sql_function_statement();
    Sql_function_statementContext* sql_function_statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_routine_statementContext* sql_routine_statement();

  class  Common_table_expressionContext : public antlr4::ParserRuleContext {
  public:
    Common_table_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Column_name_list_parenContext *column_name_list_paren();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expressionContext *common_table_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Common_table_expressionContext* common_table_expression();

  class  Create_alias_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_alias_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ALIAS();
    Table_aliasContext *table_alias();
    Module_aliasContext *module_alias();
    Sequence_aliasContext *sequence_alias();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_alias_statementContext* create_alias_statement();

  class  Table_aliasContext : public antlr4::ParserRuleContext {
  public:
    Table_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alias_nameContext *> alias_name();
    Alias_nameContext* alias_name(size_t i);
    antlr4::tree::TerminalNode *FOR();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *TABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_aliasContext* table_alias();

  class  Module_aliasContext : public antlr4::ParserRuleContext {
  public:
    Module_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alias_nameContext *> alias_name();
    Alias_nameContext* alias_name(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_aliasContext* module_alias();

  class  Sequence_aliasContext : public antlr4::ParserRuleContext {
  public:
    Sequence_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alias_nameContext *> alias_name();
    Alias_nameContext* alias_name(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_aliasContext* sequence_alias();

  class  Or_replaceContext : public antlr4::ParserRuleContext {
  public:
    Or_replaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_replaceContext* or_replace();

  class  Create_audit_policy_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_audit_policy_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    std::vector<Audit_policy_optsContext *> audit_policy_opts();
    Audit_policy_optsContext* audit_policy_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_audit_policy_statementContext* create_audit_policy_statement();

  class  Audit_policy_optsContext : public antlr4::ParserRuleContext {
  public:
    Audit_policy_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATEGORIES();
    std::vector<Audit_policy_categories_optsContext *> audit_policy_categories_opts();
    Audit_policy_categories_optsContext* audit_policy_categories_opts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ERROR();
    antlr4::tree::TerminalNode *TYPE();
    Normal_auditContext *normal_audit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_policy_optsContext* audit_policy_opts();

  class  Audit_policy_categories_optsContext : public antlr4::ParserRuleContext {
  public:
    Audit_policy_categories_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Status_specContext *status_spec();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *AUDIT();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *CONTEXT();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *OBJMAINT();
    antlr4::tree::TerminalNode *SECMAINT();
    antlr4::tree::TerminalNode *SYSADMIN();
    antlr4::tree::TerminalNode *VALIDATE();
    With_withoutContext *with_without();
    antlr4::tree::TerminalNode *DATA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Audit_policy_categories_optsContext* audit_policy_categories_opts();

  class  Create_bufferpool_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_bufferpool_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *BUFFERPOOL();
    Bufferpool_nameContext *bufferpool_name();
    Bufferpool_optsContext *bufferpool_opts();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<Db_partition_group_nameContext *> db_partition_group_name();
    Db_partition_group_nameContext* db_partition_group_name(size_t i);
    antlr4::tree::TerminalNode *SIZE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    antlr4::tree::TerminalNode *DEFERRED();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Number_of_pagesContext *number_of_pages();
    antlr4::tree::TerminalNode *AUTOMATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_bufferpool_statementContext* create_bufferpool_statement();

  class  Bufferpool_optsContext : public antlr4::ParserRuleContext {
  public:
    Bufferpool_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Except_clauseContext *except_clause();
    antlr4::tree::TerminalNode *NUMBLOCKPAGES();
    std::vector<Number_of_pagesContext *> number_of_pages();
    Number_of_pagesContext* number_of_pages(size_t i);
    antlr4::tree::TerminalNode *BLOCKSIZE();
    antlr4::tree::TerminalNode *PAGESIZE();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *K();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bufferpool_optsContext* bufferpool_opts();

  class  Except_clauseContext : public antlr4::ParserRuleContext {
  public:
    Except_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Member_listContext *member_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Except_clauseContext* except_clause();

  class  Member_listContext : public antlr4::ParserRuleContext {
  public:
    Member_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Member_list_itemContext *> member_list_item();
    Member_list_itemContext* member_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_listContext* member_list();

  class  Member_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Member_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Member_numberContext *> member_number();
    Member_numberContext* member_number(size_t i);
    antlr4::tree::TerminalNode *SIZE();
    Number_of_pagesContext *number_of_pages();
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_list_itemContext* member_list_item();

  class  Create_database_partition_group_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_database_partition_group_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    Db_partition_group_nameContext *db_partition_group_name();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DBPARTITIONNUMS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Db_partition_number_listContext *db_partition_number_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *DBPARTITIONNUM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_database_partition_group_statementContext* create_database_partition_group_statement();

  class  Create_event_monitor_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_statementContext* create_event_monitor_statement();

  class  Create_event_monitor_activities_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_activities_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ACTIVITIES();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *PIPE();
    Pipe_nameContext *pipe_name();
    antlr4::tree::TerminalNode *FILE();
    Path_nameContext *path_name();
    File_optionsContext *file_options();
    std::vector<Formatted_event_table_info_3Context *> formatted_event_table_info_3();
    Formatted_event_table_info_3Context* formatted_event_table_info_3(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_activities_statementContext* create_event_monitor_activities_statement();

  class  Formatted_event_table_info_3Context : public antlr4::ParserRuleContext {
  public:
    Formatted_event_table_info_3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Evm_groupContext *evm_group();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Target_table_optionsContext *> target_table_options();
    Target_table_optionsContext* target_table_options(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *BLOCKED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formatted_event_table_info_3Context* formatted_event_table_info_3();

  class  Create_event_monitor_change_history_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_change_history_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> EVENT();
    antlr4::tree::TerminalNode* EVENT(size_t i);
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    Formatted_event_table_infoContext *formatted_event_table_info();
    Event_control_listContext *event_control_list();
    Autostart_manualstartContext *autostart_manualstart();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_change_history_statementContext* create_event_monitor_change_history_statement();

  class  Event_control_listContext : public antlr4::ParserRuleContext {
  public:
    Event_control_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_controlContext *> event_control();
    Event_controlContext* event_control(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_control_listContext* event_control_list();

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
    antlr4::tree::TerminalNode *CBMCFGVALUES();
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

  class  Create_event_monitor_locking_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_locking_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> EVENT();
    antlr4::tree::TerminalNode* EVENT(size_t i);
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LOCKING();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    Formatted_event_table_infoContext *formatted_event_table_info();
    antlr4::tree::TerminalNode *UNFORMATTED();
    Autostart_manualstartContext *autostart_manualstart();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Target_table_optionsContext *target_table_options();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_locking_statementContext* create_event_monitor_locking_statement();

  class  Create_event_monitor_package_cache_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_package_cache_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> EVENT();
    antlr4::tree::TerminalNode* EVENT(size_t i);
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *CACHE();
    Filter_and_collection_optionsContext *filter_and_collection_options();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    Formatted_event_table_infoContext *formatted_event_table_info();
    antlr4::tree::TerminalNode *UNFORMATTED();
    Autostart_manualstartContext *autostart_manualstart();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Target_table_optionsContext *target_table_options();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_package_cache_statementContext* create_event_monitor_package_cache_statement();

  class  Filter_and_collection_optionsContext : public antlr4::ParserRuleContext {
  public:
    Filter_and_collection_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Where_clauseContext *where_clause();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *DETAILED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Filter_and_collection_optionsContext* filter_and_collection_options();

  class  Event_conditionContext : public antlr4::ParserRuleContext {
  public:
    Event_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Event_condition_itemContext *> event_condition_item();
    Event_condition_itemContext* event_condition_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_conditionContext* event_condition();

  class  Event_condition_itemContext : public antlr4::ParserRuleContext {
  public:
    Event_condition_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPDATED_SINCE_BOUNDARY_TIME();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *NUM_EXECUTIONS();
    antlr4::tree::TerminalNode *STMT_EXEC_TIME();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_condition_itemContext* event_condition_item();

  class  Create_event_monitor_statistics_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_statistics_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *STATISTICS();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    Event_monitor_statistics_optsContext *event_monitor_statistics_opts();
    antlr4::tree::TerminalNode *TABLE();
    Formatted_event_table_info_2Context *formatted_event_table_info_2();
    antlr4::tree::TerminalNode *PIPE();
    Pipe_nameContext *pipe_name();
    antlr4::tree::TerminalNode *FILE();
    Path_nameContext *path_name();
    File_optionsContext *file_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_statistics_statementContext* create_event_monitor_statistics_statement();

  class  Event_monitor_statistics_optsContext : public antlr4::ParserRuleContext {
  public:
    Event_monitor_statistics_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *MANUALSTART();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *MEMBER();
    Member_numberContext *member_number();
    antlr4::tree::TerminalNode *LOCAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_monitor_statistics_optsContext* event_monitor_statistics_opts();

  class  Create_event_monitor_threshold_violations_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_threshold_violations_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *THRESHOLD();
    antlr4::tree::TerminalNode *VIOLATIONS();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *PIPE();
    Pipe_nameContext *pipe_name();
    antlr4::tree::TerminalNode *FILE();
    Path_nameContext *path_name();
    File_optionsContext *file_options();
    std::vector<Event_monitor_threshold_optsContext *> event_monitor_threshold_opts();
    Event_monitor_threshold_optsContext* event_monitor_threshold_opts(size_t i);
    std::vector<Formatted_event_table_info_2Context *> formatted_event_table_info_2();
    Formatted_event_table_info_2Context* formatted_event_table_info_2(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_threshold_violations_statementContext* create_event_monitor_threshold_violations_statement();

  class  Formatted_event_table_info_2Context : public antlr4::ParserRuleContext {
  public:
    Formatted_event_table_info_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Evm_groupContext *evm_group();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Target_table_optionsContext *> target_table_options();
    Target_table_optionsContext* target_table_options(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *BUFFERSIZE();
    PagesContext *pages();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *NONBLOCKED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formatted_event_table_info_2Context* formatted_event_table_info_2();

  class  File_optionsContext : public antlr4::ParserRuleContext {
  public:
    File_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAXFILES();
    antlr4::tree::TerminalNode *NONE();
    Number_of_filesContext *number_of_files();
    antlr4::tree::TerminalNode *MAXFILESIZE();
    PagesContext *pages();
    antlr4::tree::TerminalNode *BUFFERSIZE();
    antlr4::tree::TerminalNode *BLOCKED();
    antlr4::tree::TerminalNode *NONBLOCKED();
    antlr4::tree::TerminalNode *APPEND();
    antlr4::tree::TerminalNode *REPLACE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_optionsContext* file_options();

  class  Event_monitor_threshold_optsContext : public antlr4::ParserRuleContext {
  public:
    Event_monitor_threshold_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Autostart_manualstartContext *autostart_manualstart();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *MEMBER();
    Member_numberContext *member_number();
    antlr4::tree::TerminalNode *LOCAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_monitor_threshold_optsContext* event_monitor_threshold_opts();

  class  PagesContext : public antlr4::ParserRuleContext {
  public:
    PagesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PagesContext* pages();

  class  Create_event_monitor_unit_of_workContext : public antlr4::ParserRuleContext {
  public:
    Create_event_monitor_unit_of_workContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> EVENT();
    antlr4::tree::TerminalNode* EVENT(size_t i);
    antlr4::tree::TerminalNode *MONITOR();
    Event_monitor_nameContext *event_monitor_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *UNFORMATTED();
    Autostart_manualstartContext *autostart_manualstart();
    Formatted_event_table_infoContext *formatted_event_table_info();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Target_table_optionsContext *target_table_options();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_event_monitor_unit_of_workContext* create_event_monitor_unit_of_work();

  class  Formatted_event_table_infoContext : public antlr4::ParserRuleContext {
  public:
    Formatted_event_table_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Evm_groupContext *evm_group();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Target_table_optionsContext *> target_table_options();
    Target_table_optionsContext* target_table_options(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formatted_event_table_infoContext* formatted_event_table_info();

  class  Autostart_manualstartContext : public antlr4::ParserRuleContext {
  public:
    Autostart_manualstartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUTOSTART();
    antlr4::tree::TerminalNode *MANUALSTART();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Autostart_manualstartContext* autostart_manualstart();

  class  Evm_groupContext : public antlr4::ParserRuleContext {
  public:
    Evm_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Evm_groupContext* evm_group();

  class  Target_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Target_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *PCTDEACTIVATE();
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_table_optionsContext* target_table_options();

  class  Create_external_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_external_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    std::vector<Ext_table_optionContext *> ext_table_option();
    Ext_table_optionContext* ext_table_option(size_t i);
    std::vector<Ext_table_option_valueContext *> ext_table_option_value();
    Ext_table_option_valueContext* ext_table_option_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    antlr4::tree::TerminalNode *LIKE();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_external_table_statementContext* create_external_table_statement();

  class  Ext_table_optionContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_optionContext* ext_table_option();

  class  Ext_table_option_valueContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_option_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();
    StringContext *string();
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_option_valueContext* ext_table_option_value();

  class  Create_function_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_function_external_scalar_statementContext *create_function_external_scalar_statement();
    Create_function_external_table_statementContext *create_function_external_table_statement();
    Create_function_old_db_external_function_statementContext *create_function_old_db_external_function_statement();
    Create_function_sourced_or_template_statementContext *create_function_sourced_or_template_statement();
    Create_function_sql_scalar_table_or_row_statementContext *create_function_sql_scalar_table_or_row_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_statementContext* create_function_statement();

  class  Create_function_aggregate_interface_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_aggregate_interface_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    std::vector<Agg_fn_param_declContext *> agg_fn_param_decl();
    Agg_fn_param_declContext* agg_fn_param_decl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    TodoContext *todo();
    antlr4::tree::TerminalNode *RETURNS();
    Agg_fn_option_listContext *agg_fn_option_list();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *WITH();
    std::vector<State_variable_declarationContext *> state_variable_declaration();
    State_variable_declarationContext* state_variable_declaration(size_t i);
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *INITIALIZE();
    std::vector<Procedure_designatorContext *> procedure_designator();
    Procedure_designatorContext* procedure_designator(size_t i);
    antlr4::tree::TerminalNode *ACCUMULATE();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *FINALIZE();
    Function_designatorContext *function_designator();
    Or_replaceContext *or_replace();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Data_type_2Context *> data_type_2();
    Data_type_2Context* data_type_2(size_t i);
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_aggregate_interface_statementContext* create_function_aggregate_interface_statement();

  class  Agg_fn_param_declContext : public antlr4::ParserRuleContext {
  public:
    Agg_fn_param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_1Context *data_type_1();
    Parameter_nameContext *parameter_name();
    Default_clauseContext *default_clause();
    antlr4::tree::TerminalNode *IN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Agg_fn_param_declContext* agg_fn_param_decl();

  class  Agg_fn_option_listContext : public antlr4::ParserRuleContext {
  public:
    Agg_fn_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Agg_fn_option_listContext* agg_fn_option_list();

  class  State_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    State_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_nameContext *variable_name();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  State_variable_declarationContext* state_variable_declaration();

  class  Create_function_external_scalar_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_external_scalar_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Ext_scalar_param_declContext *> ext_scalar_param_decl();
    Ext_scalar_param_declContext* ext_scalar_param_decl(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *RETURNS();
    Ext_scalar_option_listContext *ext_scalar_option_list();
    Data_type_2Context *data_type_2();
    Data_type_3Context *data_type_3();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *FROM();
    Or_replaceContext *or_replace();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    As_locatorContext *as_locator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_external_scalar_statementContext* create_function_external_scalar_statement();

  class  Ext_scalar_param_declContext : public antlr4::ParserRuleContext {
  public:
    Ext_scalar_param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    Parameter_nameContext *parameter_name();
    Default_clauseContext *default_clause();
    In_out_inoutContext *in_out_inout();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_scalar_param_declContext* ext_scalar_param_decl();

  class  Ext_scalar_option_listContext : public antlr4::ParserRuleContext {
  public:
    Ext_scalar_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ext_scalar_option_list_itemContext *> ext_scalar_option_list_item();
    Ext_scalar_option_list_itemContext* ext_scalar_option_list_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_scalar_option_listContext* ext_scalar_option_list();

  class  Ext_scalar_option_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Ext_scalar_option_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *C_();
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
    Ascii_unicodeContext *ascii_unicode();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    LengthContext *length();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *CALL();
    Allow_disallowContext *allow_disallow();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *PREDICATES();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Predicate_specificationContext *predicate_specification();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *RESIDENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_scalar_option_list_itemContext* ext_scalar_option_list_item();

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
    Constant_Context *constant_();
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
    Function_invocationContext *function_invocation();
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
    Index_extension_nameContext *index_extension_name();
    antlr4::tree::TerminalNode *EXACT();
    std::vector<Exploitation_ruleContext *> exploitation_rule();
    Exploitation_ruleContext* exploitation_rule(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_exploitationContext* index_exploitation();

  class  Exploitation_ruleContext : public antlr4::ParserRuleContext {
  public:
    Exploitation_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *KEY();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    antlr4::tree::TerminalNode *USE();
    Search_method_nameContext *search_method_name();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exploitation_ruleContext* exploitation_rule();

  class  Create_function_external_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_external_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    Ext_table_param_decl_listContext *ext_table_param_decl_list();
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    antlr4::tree::TerminalNode *RETURNS();
    Ext_table_option_listContext *ext_table_option_list();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<Data_type_2Context *> data_type_2();
    Data_type_2Context* data_type_2(size_t i);
    antlr4::tree::TerminalNode *GENERIC();
    Or_replaceContext *or_replace();
    std::vector<As_locatorContext *> as_locator();
    As_locatorContext* as_locator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_external_table_statementContext* create_function_external_table_statement();

  class  Ext_table_param_decl_listContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_param_decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ext_table_param_declContext *> ext_table_param_decl();
    Ext_table_param_declContext* ext_table_param_decl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_param_decl_listContext* ext_table_param_decl_list();

  class  Ext_table_param_declContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    Parameter_nameContext *parameter_name();
    Default_clauseContext *default_clause();
    As_locatorContext *as_locator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_param_declContext* ext_table_param_decl();

  class  Ext_table_option_listContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ext_table_option_list_itemContext *> ext_table_option_list_item();
    Ext_table_option_list_itemContext* ext_table_option_list_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_option_listContext* ext_table_option_list();

  class  Ext_table_option_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Ext_table_option_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *C_();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *CPP();
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
    Ascii_unicodeContext *ascii_unicode();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *DISPATCH();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    LengthContext *length();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *EXECUTE();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *CARDINALITY();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *RESIDENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ext_table_option_list_itemContext* ext_table_option_list_item();

  class  Create_function_old_db_external_function_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_old_db_external_function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    Param_decl_list_3Context *param_decl_list_3();
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    std::vector<Data_type_2Context *> data_type_2();
    Data_type_2Context* data_type_2(size_t i);
    Oledb_option_listContext *oledb_option_list();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_old_db_external_function_statementContext* create_function_old_db_external_function_statement();

  class  Oledb_option_listContext : public antlr4::ParserRuleContext {
  public:
    Oledb_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Oledb_option_list_itemContext *> oledb_option_list_item();
    Oledb_option_list_itemContext* oledb_option_list_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oledb_option_listContext* oledb_option_list();

  class  Oledb_option_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Oledb_option_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *CARDINALITY();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oledb_option_list_itemContext* oledb_option_list_item();

  class  Create_function_sourced_or_template_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_sourced_or_template_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Param_decl_list_3Context *param_decl_list_3();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Fn_return_optsContext *fn_return_opts();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_sourced_or_template_statementContext* create_function_sourced_or_template_statement();

  class  Fn_return_optsContext : public antlr4::ParserRuleContext {
  public:
    Fn_return_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fn_return_opts_itemContext *> fn_return_opts_item();
    Fn_return_opts_itemContext* fn_return_opts_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fn_return_optsContext* fn_return_opts();

  class  Fn_return_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Fn_return_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    Data_type_2Context *data_type_2();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TEMPLATE();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    Ascii_unicodeContext *ascii_unicode();
    Template_optsContext *template_opts();
    Data_type_listContext *data_type_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fn_return_opts_itemContext* fn_return_opts_item();

  class  Template_optsContext : public antlr4::ParserRuleContext {
  public:
    Template_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Template_opts_itemContext *> template_opts_item();
    Template_opts_itemContext* template_opts_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Template_optsContext* template_opts();

  class  Template_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Template_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Template_opts_itemContext* template_opts_item();

  class  Ascii_unicodeContext : public antlr4::ParserRuleContext {
  public:
    Ascii_unicodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE_WV();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ascii_unicodeContext* ascii_unicode();

  class  Param_decl_list_3Context : public antlr4::ParserRuleContext {
  public:
    Param_decl_list_3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_decl_3Context *> param_decl_3();
    Param_decl_3Context* param_decl_3(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_list_3Context* param_decl_list_3();

  class  Param_decl_3Context : public antlr4::ParserRuleContext {
  public:
    Param_decl_3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    Data_typeContext *data_type();
    Default_clauseContext *default_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_3Context* param_decl_3();

  class  Create_function_sql_scalar_table_or_row_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_sql_scalar_table_or_row_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Param_decl_list_2Context *param_decl_list_2();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *RETURNS();
    Option_listContext *option_list();
    Sql_function_bodyContext *sql_function_body();
    Data_type_2Context *data_type_2();
    antlr4::tree::TerminalNode *ROW();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *TABLE();
    Or_replaceContext *or_replace();
    Row_type_nameContext *row_type_name();
    Anchored_row_data_typeContext *anchored_row_data_type();
    antlr4::tree::TerminalNode *ELEMENT();
    antlr4::tree::TerminalNode *OF();
    Array_type_nameContext *array_type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_sql_scalar_table_or_row_statementContext* create_function_sql_scalar_table_or_row_statement();

  class  Param_decl_list_2Context : public antlr4::ParserRuleContext {
  public:
    Param_decl_list_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_decl_2Context *> param_decl_2();
    Param_decl_2Context* param_decl_2(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_list_2Context* param_decl_list_2();

  class  Param_decl_2Context : public antlr4::ParserRuleContext {
  public:
    Param_decl_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    Data_typeContext *data_type();
    In_out_inoutContext *in_out_inout();
    Default_clauseContext *default_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_2Context* param_decl_2();

  class  Sql_function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sql_function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Compound_sql_compiledContext *compound_sql_compiled();
    Compound_sql_inlinedContext *compound_sql_inlined();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_function_bodyContext* sql_function_body();

  class  Create_function_mapping_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_function_mapping_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Data_type_listContext *data_type_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *TYPE();
    Server_typeContext *server_type();
    Function_mapping_nameContext *function_mapping_name();
    Function_optionsContext *function_options();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *INFIX();
    antlr4::tree::TerminalNode *VERSION();
    Server_versionContext *server_version();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_function_mapping_statementContext* create_function_mapping_statement();

  class  Function_optionsContext : public antlr4::ParserRuleContext {
  public:
    Function_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Function_option_nameContext *> function_option_name();
    Function_option_nameContext* function_option_name(size_t i);
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_optionsContext* function_options();

  class  Function_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_option_nameContext* function_option_name();

  class  Create_global_temporary_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_global_temporary_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_definitionContext *> column_definition();
    Column_definitionContext* column_definition(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *LIKE();
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *AS();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DATA();
    Create_global_temporary_table_optsContext *create_global_temporary_table_opts();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Copy_optionsContext *copy_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_global_temporary_table_statementContext* create_global_temporary_table_statement();

  class  Create_global_temporary_table_optsContext : public antlr4::ParserRuleContext {
  public:
    Create_global_temporary_table_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_global_temporary_table_itemContext *> create_global_temporary_table_item();
    Create_global_temporary_table_itemContext* create_global_temporary_table_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_global_temporary_table_optsContext* create_global_temporary_table_opts();

  class  Create_global_temporary_table_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_global_temporary_table_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COMMIT();
    Delete_preserveContext *delete_preserve();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *IN();
    Tablespace_nameContext *tablespace_name();
    Distribution_clauseContext *distribution_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_global_temporary_table_itemContext* create_global_temporary_table_item();

  class  Delete_preserveContext : public antlr4::ParserRuleContext {
  public:
    Delete_preserveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *PRESERVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_preserveContext* delete_preserve();

  class  Create_histogram_template_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_histogram_template_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    Template_nameContext *template_name();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *BIN();
    antlr4::tree::TerminalNode *VALUE();
    Bigint_constantContext *bigint_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_histogram_template_statementContext* create_histogram_template_statement();

  class  Create_index_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_index_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    Index_nameContext *index_name();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Index_col_optsContext *index_col_opts();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    TodoContext *todo();
    Table_nameContext *table_name();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *UNIQUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_statementContext* create_index_statement();

  class  Index_col_optsContext : public antlr4::ParserRuleContext {
  public:
    Index_col_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Index_col_opts_itemContext *> index_col_opts_item();
    Index_col_opts_itemContext* index_col_opts_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_col_optsContext* index_col_opts();

  class  Index_col_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Index_col_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *RANDOM();
    Column_nameContext *column_name();
    Key_expressionContext *key_expression();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *OVERLAPS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_col_opts_itemContext* index_col_opts_item();

  class  Key_expressionContext : public antlr4::ParserRuleContext {
  public:
    Key_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Key_expressionContext* key_expression();

  class  Create_index_extension_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_index_extension_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *EXTENSION();
    Index_extension_nameContext *index_extension_name();
    Index_maintenanceContext *index_maintenance();
    Index_searchContext *index_search();
    Param_listContext *param_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_index_extension_statementContext* create_index_extension_statement();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  Index_maintenanceContext : public antlr4::ParserRuleContext {
  public:
    Index_maintenanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *SOURCE();
    std::vector<antlr4::tree::TerminalNode *> KEY();
    antlr4::tree::TerminalNode* KEY(size_t i);
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Parameter_nameContext *parameter_name();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *GENERATE();
    antlr4::tree::TerminalNode *USING();
    Table_function_invocationContext *table_function_invocation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_maintenanceContext* index_maintenance();

  class  Table_function_invocationContext : public antlr4::ParserRuleContext {
  public:
    Table_function_invocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_function_invocationContext* table_function_invocation();

  class  Index_searchContext : public antlr4::ParserRuleContext {
  public:
    Index_searchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *SEARCH();
    antlr4::tree::TerminalNode *METHOD();
    std::vector<Search_method_definitionContext *> search_method_definition();
    Search_method_definitionContext* search_method_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_searchContext* index_search();

  class  Search_method_definitionContext : public antlr4::ParserRuleContext {
  public:
    Search_method_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *THROUGH();
    Range_producing_funciton_invocationContext *range_producing_funciton_invocation();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *USING();
    Index_filtering_function_invocationContext *index_filtering_function_invocation();
    Case_expressionContext *case_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_method_definitionContext* search_method_definition();

  class  Create_mask_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_mask_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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
    Or_replaceContext *or_replace();
    Correlation_nameContext *correlation_name();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_mask_statementContext* create_mask_statement();

  class  Case_expressionContext : public antlr4::ParserRuleContext {
  public:
    Case_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_expressionContext* case_expression();

  class  Range_producing_funciton_invocationContext : public antlr4::ParserRuleContext {
  public:
    Range_producing_funciton_invocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_producing_funciton_invocationContext* range_producing_funciton_invocation();

  class  Index_filtering_function_invocationContext : public antlr4::ParserRuleContext {
  public:
    Index_filtering_function_invocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_filtering_function_invocationContext* index_filtering_function_invocation();

  class  Create_method_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_method_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *METHOD();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    With_withoutContext *with_without();
    antlr4::tree::TerminalNode *LOCK();
    antlr4::tree::TerminalNode *REQUEST();
    Sql_method_bodyContext *sql_method_body();
    Method_nameContext *method_name();
    Method_signatureContext *method_signature();
    Method_optsContext *method_opts();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_method_statementContext* create_method_statement();

  class  Method_optsContext : public antlr4::ParserRuleContext {
  public:
    Method_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Method_opts_itemContext *> method_opts_item();
    Method_opts_itemContext* method_opts_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_optsContext* method_opts();

  class  Method_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Method_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *GROUP();
    Group_nameContext *group_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_opts_itemContext* method_opts_item();

  class  Method_signatureContext : public antlr4::ParserRuleContext {
  public:
    Method_signatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Method_param_listContext *method_param_list();
    antlr4::tree::TerminalNode *RETURNS();
    Data_type_2Context *data_type_2();
    Data_type_3Context *data_type_3();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *FROM();
    Data_type_4Context *data_type_4();
    As_locatorContext *as_locator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_signatureContext* method_signature();

  class  Method_param_listContext : public antlr4::ParserRuleContext {
  public:
    Method_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Data_type_1Context *> data_type_1();
    Data_type_1Context* data_type_1(size_t i);
    std::vector<Parameter_nameContext *> parameter_name();
    Parameter_nameContext* parameter_name(size_t i);
    std::vector<As_locatorContext *> as_locator();
    As_locatorContext* as_locator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_param_listContext* method_param_list();

  class  Data_type_3Context : public antlr4::ParserRuleContext {
  public:
    Data_type_3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_3Context* data_type_3();

  class  Data_type_4Context : public antlr4::ParserRuleContext {
  public:
    Data_type_4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_4Context* data_type_4();

  class  Sql_method_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sql_method_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    Compound_sql_inlinedContext *compound_sql_inlined();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_method_bodyContext* sql_method_body();

  class  Compound_sql_inlinedContext : public antlr4::ParserRuleContext {
  public:
    Compound_sql_inlinedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    TodoContext *todo();
    antlr4::tree::TerminalNode *END();
    std::vector<LabelContext *> label();
    LabelContext* label(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_sql_inlinedContext* compound_sql_inlined();

  class  Sql_statement_inlinedContext : public antlr4::ParserRuleContext {
  public:
    Sql_statement_inlinedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Call_statementContext *call_statement();
    For_statementContext *for_statement();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();
    Get_diagnostics_statementContext *get_diagnostics_statement();
    If_statementContext *if_statement();
    Insert_statementContext *insert_statement();
    Iterate_statementContext *iterate_statement();
    Leave_statementContext *leave_statement();
    Merge_statementContext *merge_statement();
    Return_statementContext *return_statement();
    Set_statementContext *set_statement();
    While_statementContext *while_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_statement_inlinedContext* sql_statement_inlined();

  class  Compound_sql_compiledContext : public antlr4::ParserRuleContext {
  public:
    Compound_sql_compiledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    std::vector<antlr4::tree::TerminalNode *> COMPOUND();
    antlr4::tree::TerminalNode* COMPOUND(size_t i);
    antlr4::tree::TerminalNode *ATOMIC();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *FIRST();
    Host_variableContext *host_variable();
    antlr4::tree::TerminalNode *STATEMENTS();
    std::vector<Sql_statement_compiledContext *> sql_statement_compiled();
    Sql_statement_compiledContext* sql_statement_compiled(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_sql_compiledContext* compound_sql_compiled();

  class  Sql_statement_compiledContext : public antlr4::ParserRuleContext {
  public:
    Sql_statement_compiledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_statement_compiledContext* sql_statement_compiled();

  class  Create_module_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_module_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *MODULE();
    Module_nameContext *module_name();
    Or_replaceContext *or_replace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_module_statementContext* create_module_statement();

  class  Create_nickname_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_nickname_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *NICKNAME();
    Nick_nameContext *nick_name();
    antlr4::tree::TerminalNode *FOR();
    Remote_object_nameContext *remote_object_name();
    Non_relational_data_definitionContext *non_relational_data_definition();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Nick_name_option_nameContext *> nick_name_option_name();
    Nick_name_option_nameContext* nick_name_option_name(size_t i);
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_nickname_statementContext* create_nickname_statement();

  class  Nick_name_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Nick_name_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nick_name_option_nameContext* nick_name_option_name();

  class  Remote_object_nameContext : public antlr4::ParserRuleContext {
  public:
    Remote_object_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remote_object_nameContext* remote_object_name();

  class  Non_relational_data_definitionContext : public antlr4::ParserRuleContext {
  public:
    Non_relational_data_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nick_name_column_listContext *nick_name_column_list();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_relational_data_definitionContext* non_relational_data_definition();

  class  Nick_name_column_listContext : public antlr4::ParserRuleContext {
  public:
    Nick_name_column_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Nick_name_column_list_itemContext *> nick_name_column_list_item();
    Nick_name_column_list_itemContext* nick_name_column_list_item(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nick_name_column_listContext* nick_name_column_list();

  class  Nick_name_column_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Nick_name_column_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nick_name_column_definitionContext *nick_name_column_definition();
    Unique_constraintContext *unique_constraint();
    Referential_constraintContext *referential_constraint();
    Check_constraintContext *check_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nick_name_column_list_itemContext* nick_name_column_list_item();

  class  Nick_name_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Nick_name_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Local_data_typeContext *local_data_type();
    std::vector<Nick_name_column_optionsContext *> nick_name_column_options();
    Nick_name_column_optionsContext* nick_name_column_options(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nick_name_column_definitionContext* nick_name_column_definition();

  class  Nick_name_column_optionsContext : public antlr4::ParserRuleContext {
  public:
    Nick_name_column_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    Constraint_attributesContext *constraint_attributes();
    References_clauseContext *references_clause();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UNIQUE();
    Federated_column_optionsContext *federated_column_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nick_name_column_optionsContext* nick_name_column_options();

  class  Federated_column_optionsContext : public antlr4::ParserRuleContext {
  public:
    Federated_column_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_option_nameContext *> column_option_name();
    Column_option_nameContext* column_option_name(size_t i);
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Federated_column_optionsContext* federated_column_options();

  class  Column_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_option_nameContext* column_option_name();

  class  Create_permission_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_permission_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PERMISSION();
    Permission_nameContext *permission_name();
    antlr4::tree::TerminalNode *ON();
    Table_nameContext *table_name();
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *ROWS();
    Where_clauseContext *where_clause();
    antlr4::tree::TerminalNode *ENFORCED();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ACCESS();
    Or_replaceContext *or_replace();
    Correlation_nameContext *correlation_name();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_permission_statementContext* create_permission_statement();

  class  Create_procedure_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_procedure_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_procedure_external_statementContext *create_procedure_external_statement();
    Create_procedure_sourced_statementContext *create_procedure_sourced_statement();
    Create_procedure_sql_statementContext *create_procedure_sql_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedure_statementContext* create_procedure_statement();

  class  Create_procedure_external_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_procedure_external_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Or_replaceContext *or_replace();
    Proc_ext_param_listContext *proc_ext_param_list();
    Option_list_2Context *option_list_2();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedure_external_statementContext* create_procedure_external_statement();

  class  Proc_ext_param_listContext : public antlr4::ParserRuleContext {
  public:
    Proc_ext_param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Proc_ext_paramContext *> proc_ext_param();
    Proc_ext_paramContext* proc_ext_param(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Proc_ext_param_listContext* proc_ext_param_list();

  class  Proc_ext_paramContext : public antlr4::ParserRuleContext {
  public:
    Proc_ext_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    In_out_inoutContext *in_out_inout();
    Data_typeContext *data_type();
    Parameter_nameContext *parameter_name();
    Default_clauseContext *default_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Proc_ext_paramContext* proc_ext_param();

  class  Option_list_2Context : public antlr4::ParserRuleContext {
  public:
    Option_list_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Option_list_2_itemContext *> option_list_2_item();
    Option_list_2_itemContext* option_list_2_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_list_2Context* option_list_2();

  class  Option_list_2_itemContext : public antlr4::ParserRuleContext {
  public:
    Option_list_2_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *C_();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *COBOL();
    antlr4::tree::TerminalNode *CLR();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *SETS();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INPUT();
    Old_newContext *old_new();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *NAME();
    StringContext *string();
    Id_Context *id_();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *RETURN();
    Yes_noContext *yes_no();
    antlr4::tree::TerminalNode *AUTONOMOUS();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *GENERAL();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE_WV();
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MAIN();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *STAY();
    antlr4::tree::TerminalNode *RESIDENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_list_2_itemContext* option_list_2_item();

  class  Create_procedure_sourced_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_procedure_sourced_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Source_procedure_clauseContext *source_procedure_clause();
    Or_replaceContext *or_replace();
    Option_list_1Context *option_list_1();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedure_sourced_statementContext* create_procedure_sourced_statement();

  class  Source_procedure_clauseContext : public antlr4::ParserRuleContext {
  public:
    Source_procedure_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOURCE();
    Source_object_nameContext *source_object_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *PARAMETERS();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *ID();
    Unique_idContext *unique_id();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_procedure_clauseContext* source_procedure_clause();

  class  Source_object_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_object_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Source_schema_nameContext *source_schema_name();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Source_procedure_nameContext *source_procedure_name();
    Source_package_nameContext *source_package_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_object_nameContext* source_object_name();

  class  Option_list_1Context : public antlr4::ParserRuleContext {
  public:
    Option_list_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Option_list_1_itemContext *> option_list_1_item();
    Option_list_1_itemContext* option_list_1_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_list_1Context* option_list_1();

  class  Option_list_1_itemContext : public antlr4::ParserRuleContext {
  public:
    Option_list_1_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Result_set_element_numberContext *> result_set_element_number();
    Result_set_element_numberContext* result_set_element_number(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_list_1_itemContext* option_list_1_item();

  class  Result_set_element_numberContext : public antlr4::ParserRuleContext {
  public:
    Result_set_element_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_constantContext *integer_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Result_set_element_numberContext* result_set_element_number();

  class  Unique_idContext : public antlr4::ParserRuleContext {
  public:
    Unique_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unique_idContext* unique_id();

  class  Create_procedure_sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_procedure_sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *PROCEDURE();
    Procedure_nameContext *procedure_name();
    Sql_procedure_bodyContext *sql_procedure_body();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Option_listContext *option_list();
    Proc_parameter_listContext *proc_parameter_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_procedure_sql_statementContext* create_procedure_sql_statement();

  class  Proc_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Proc_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Proc_parameter_list_itemContext *> proc_parameter_list_item();
    Proc_parameter_list_itemContext* proc_parameter_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Proc_parameter_listContext* proc_parameter_list();

  class  Proc_parameter_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Proc_parameter_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_nameContext *parameter_name();
    Data_typeContext *data_type();
    In_out_inoutContext *in_out_inout();
    Default_clauseContext *default_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Proc_parameter_list_itemContext* proc_parameter_list_item();

  class  In_out_inoutContext : public antlr4::ParserRuleContext {
  public:
    In_out_inoutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *OUT();
    antlr4::tree::TerminalNode *INOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_out_inoutContext* in_out_inout();

  class  Option_listContext : public antlr4::ParserRuleContext {
  public:
    Option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Option_list_itemContext *> option_list_item();
    Option_list_itemContext* option_list_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_listContext* option_list();

  class  Option_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Option_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *RESULT();
    antlr4::tree::TerminalNode *SETS();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *MODIFIES();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *RETURN();
    Yes_noContext *yes_no();
    antlr4::tree::TerminalNode *AUTONOMOUS();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();
    Old_newContext *old_new();
    antlr4::tree::TerminalNode *SAVEPOINT();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE_WV();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Option_list_itemContext* option_list_item();

  class  Sql_procedure_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sql_procedure_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sql_procedure_statementContext *sql_procedure_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_procedure_bodyContext* sql_procedure_body();

  class  Create_role_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_role_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_role_statementContext* create_role_statement();

  class  Create_schema_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_schema_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SCHEMA();
    Schema_nameContext *schema_name();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CAPTURE();
    None_changesContext *none_changes();
    std::vector<Schema_sql_statementContext *> schema_sql_statement();
    Schema_sql_statementContext* schema_sql_statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_schema_statementContext* create_schema_statement();

  class  Schema_sql_statementContext : public antlr4::ParserRuleContext {
  public:
    Schema_sql_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_table_statementContext *create_table_statement();
    Create_view_statementContext *create_view_statement();
    Create_index_statementContext *create_index_statement();
    Comment_statementContext *comment_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_sql_statementContext* schema_sql_statement();

  class  Create_security_label_component_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_security_label_component_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    antlr4::tree::TerminalNode *COMPONENT();
    Component_nameContext *component_name();
    Array_clauseContext *array_clause();
    Set_clauseContext *set_clause();
    Tree_clauseContext *tree_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_label_component_statementContext* create_security_label_component_statement();

  class  Array_clauseContext : public antlr4::ParserRuleContext {
  public:
    Array_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LEFT_SQR_BKT();
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *RIGHT_SQR_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_clauseContext* array_clause();

  class  Set_clauseContext : public antlr4::ParserRuleContext {
  public:
    Set_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *LEFT_CURLY_BKT();
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *RIGHT_CURLY_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_clauseContext* set_clause();

  class  Tree_clauseContext : public antlr4::ParserRuleContext {
  public:
    Tree_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TREE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *ROOT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<Tree_clause_itemContext *> tree_clause_item();
    Tree_clause_itemContext* tree_clause_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tree_clauseContext* tree_clause();

  class  Tree_clause_itemContext : public antlr4::ParserRuleContext {
  public:
    Tree_clause_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *UNDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tree_clause_itemContext* tree_clause_item();

  class  Create_security_label_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_security_label_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *LABEL();
    Security_label_nameContext *security_label_name();
    std::vector<Create_security_label_itemContext *> create_security_label_item();
    Create_security_label_itemContext* create_security_label_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_label_statementContext* create_security_label_statement();

  class  Create_security_label_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_security_label_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPONENT();
    Component_nameContext *component_name();
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_label_itemContext* create_security_label_item();

  class  Create_security_policy_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_security_policy_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> SECURITY();
    antlr4::tree::TerminalNode* SECURITY(size_t i);
    antlr4::tree::TerminalNode *POLICY();
    Security_policy_nameContext *security_policy_name();
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
    antlr4::tree::TerminalNode *OVERRIDE_();
    antlr4::tree::TerminalNode *RESTRICT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_security_policy_statementContext* create_security_policy_statement();

  class  Create_sequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_sequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_nameContext *sequence_name();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *AS();
    Create_sequence_optsContext *create_sequence_opts();
    antlr4::tree::TerminalNode *INTEGER();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_sequence_statementContext* create_sequence_statement();

  class  Create_sequence_optsContext : public antlr4::ParserRuleContext {
  public:
    Create_sequence_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Create_sequence_opts_itemContext *> create_sequence_opts_item();
    Create_sequence_opts_itemContext* create_sequence_opts_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_sequence_optsContext* create_sequence_opts();

  class  Create_sequence_opts_itemContext : public antlr4::ParserRuleContext {
  public:
    Create_sequence_opts_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    Numeric_constantContext *numeric_constant();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    antlr4::tree::TerminalNode *ORDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_sequence_opts_itemContext* create_sequence_opts_item();

  class  Create_service_class_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_service_class_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS_();
    Service_class_nameContext *service_class_name();
    Histogram_templace_clauseContext *histogram_templace_clause();
    antlr4::tree::TerminalNode *UNDER();
    Service_superclass_nameContext *service_superclass_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *TYPE();
    std::vector<antlr4::tree::TerminalNode *> RESOURCE();
    antlr4::tree::TerminalNode* RESOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SHARES();
    antlr4::tree::TerminalNode* SHARES(size_t i);
    std::vector<Integer_constantContext *> integer_constant();
    Integer_constantContext* integer_constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CPU();
    antlr4::tree::TerminalNode* CPU(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *MINIMUM();
    antlr4::tree::TerminalNode *SHARE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *QUEUE();
    antlr4::tree::TerminalNode *ORDER();
    std::vector<antlr4::tree::TerminalNode *> DEGREE_();
    antlr4::tree::TerminalNode* DEGREE_(size_t i);
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
    antlr4::tree::TerminalNode *ACTIVITY();
    std::vector<antlr4::tree::TerminalNode *> DATA();
    antlr4::tree::TerminalNode* DATA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> REQUEST();
    antlr4::tree::TerminalNode* REQUEST(size_t i);
    antlr4::tree::TerminalNode *UNIT();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *METRICS();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *CUSTOM();
    antlr4::tree::TerminalNode *BATCH();
    antlr4::tree::TerminalNode *INTERACTIVE();
    antlr4::tree::TerminalNode *MIXED();
    antlr4::tree::TerminalNode *FIFO();
    antlr4::tree::TerminalNode *LATENCY();
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DEFAULT();
    antlr4::tree::TerminalNode* DEFAULT(size_t i);
    On_offContext *on_off();
    DegreeContext *degree();
    std::vector<High_medium_lowContext *> high_medium_low();
    High_medium_lowContext* high_medium_low(size_t i);
    String_constantContext *string_constant();
    std::vector<Soft_hardContext *> soft_hard();
    Soft_hardContext* soft_hard(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTENDED();
    antlr4::tree::TerminalNode* EXTENDED(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_service_class_statementContext* create_service_class_statement();

  class  High_medium_lowContext : public antlr4::ParserRuleContext {
  public:
    High_medium_lowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *LOW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  High_medium_lowContext* high_medium_low();

  class  On_offContext : public antlr4::ParserRuleContext {
  public:
    On_offContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OFF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_offContext* on_off();

  class  Soft_hardContext : public antlr4::ParserRuleContext {
  public:
    Soft_hardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *HARD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Soft_hardContext* soft_hard();

  class  Create_server_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_server_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *VERSION();
    Server_versionContext *server_version();
    antlr4::tree::TerminalNode *TYPE();
    Server_typeContext *server_type();
    antlr4::tree::TerminalNode *AUTHORIZATION();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *PASSWORD();
    Password_Context *password_();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Server_option_nameContext *> server_option_name();
    Server_option_nameContext* server_option_name(size_t i);
    std::vector<String_constantContext *> string_constant();
    String_constantContext* string_constant(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_server_statementContext* create_server_statement();

  class  Password_Context : public antlr4::ParserRuleContext {
  public:
    Password_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Password_Context* password_();

  class  Create_stogroup_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_stogroup_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *STOGROUP();
    Storagegroup_nameContext *storagegroup_name();
    antlr4::tree::TerminalNode *ON();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Create_stogroup_optsContext *> create_stogroup_opts();
    Create_stogroup_optsContext* create_stogroup_opts(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_stogroup_statementContext* create_stogroup_statement();

  class  Create_stogroup_optsContext : public antlr4::ParserRuleContext {
  public:
    Create_stogroup_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVERHEAD();
    Number_of_millisecondsContext *number_of_milliseconds();
    antlr4::tree::TerminalNode *DEVICE();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *RATE();
    Number_megabytes_per_secondContext *number_megabytes_per_second();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_stogroup_optsContext* create_stogroup_opts();

  class  Create_synonym_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_synonym_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_synonym_statementContext* create_synonym_statement();

  class  Create_table_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_table_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    Table_nameContext *table_name();
    Element_listContext *element_list();
    antlr4::tree::TerminalNode *OF();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *LIKE();
    As_result_tableContext *as_result_table();
    Materialized_query_optionsContext *materialized_query_options();
    Staging_table_definitionContext *staging_table_definition();
    If_not_existsContext *if_not_exists();
    antlr4::tree::TerminalNode *ORGANIZED();
    antlr4::tree::TerminalNode *BY();
    std::vector<Create_table_optsContext *> create_table_opts();
    Create_table_optsContext* create_table_opts(size_t i);
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    Typed_table_optionsContext *typed_table_options();
    Copy_optionsContext *copy_options();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *COLUMN();
    Dimensions_clauseContext *dimensions_clause();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *SEQUENCE();
    Sequence_key_specContext *sequence_key_spec();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *USING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_statementContext* create_table_statement();

  class  Create_table_optsContext : public antlr4::ParserRuleContext {
  public:
    Create_table_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *CAPTURE();
    None_changesContext *none_changes();
    Tablespace_clausesContext *tablespace_clauses();
    Distribution_clauseContext *distribution_clause();
    Partitioning_clauseContext *partitioning_clause();
    antlr4::tree::TerminalNode *COMPRESS();
    antlr4::tree::TerminalNode *YES();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ADAPTIVE();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *COMPRESSION();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LOGGED();
    antlr4::tree::TerminalNode *INITIALLY();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE_WV();
    antlr4::tree::TerminalNode *SECURITY();
    antlr4::tree::TerminalNode *POLICY();
    Policy_nameContext *policy_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Table_option_listContext *table_option_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_table_optsContext* create_table_opts();

  class  Table_option_listContext : public antlr4::ParserRuleContext {
  public:
    Table_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_option_list_itemContext *> table_option_list_item();
    Table_option_list_itemContext* table_option_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_option_listContext* table_option_list();

  class  Table_option_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Table_option_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_option_nameContext *table_option_name();
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_option_list_itemContext* table_option_list_item();

  class  Table_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_option_nameContext* table_option_name();

  class  Element_listContext : public antlr4::ParserRuleContext {
  public:
    Element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Element_list_itemContext *> element_list_item();
    Element_list_itemContext* element_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_listContext* element_list();

  class  Element_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Element_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_definitionContext *column_definition();
    Period_definitionContext *period_definition();
    Unique_constraintContext *unique_constraint();
    Referential_constraintContext *referential_constraint();
    Check_constraintContext *check_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Element_list_itemContext* element_list_item();

  class  Column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Data_typeContext *data_type();
    Column_optionsContext *column_options();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definitionContext* column_definition();

  class  Period_definitionContext : public antlr4::ParserRuleContext {
  public:
    Period_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *BUSINESS_TIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_definitionContext* period_definition();

  class  Unique_constraintContext : public antlr4::ParserRuleContext {
  public:
    Unique_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    antlr4::tree::TerminalNode *COMMA();
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
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
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
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    Constraint_attributesContext *constraint_attributes();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Check_constraintContext* check_constraint();

  class  Column_optionsContext : public antlr4::ParserRuleContext {
  public:
    Column_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_options_itemContext *column_options_item();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_optionsContext* column_options();

  class  Column_options_itemContext : public antlr4::ParserRuleContext {
  public:
    Column_options_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();
    Lob_optionsContext *lob_options();
    antlr4::tree::TerminalNode *SCOPE();
    Typed_table_nameContext *typed_table_name();
    Typed_view_nameContext *typed_view_name();
    References_clauseContext *references_clause();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Check_conditionContext *check_condition();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *CONSTRAINT();
    Constraint_nameContext *constraint_name();
    Constraint_attributesContext *constraint_attributes();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *UNIQUE();
    Default_clauseContext *default_clause();
    Generated_clauseContext *generated_clause();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    Integer_valueContext *integer_value();
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

  Column_options_itemContext* column_options_item();

  class  References_clauseContext : public antlr4::ParserRuleContext {
  public:
    References_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCES();
    Table_nameContext *table_name();
    Nick_nameContext *nick_name();
    Column_name_list_parenContext *column_name_list_paren();
    Rule_clauseContext *rule_clause();
    Constraint_attributesContext *constraint_attributes();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  References_clauseContext* references_clause();

  class  Rule_clauseContext : public antlr4::ParserRuleContext {
  public:
    Rule_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *UPDATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rule_clauseContext* rule_clause();

  class  Constraint_attributesContext : public antlr4::ParserRuleContext {
  public:
    Constraint_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENFORCED();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    antlr4::tree::TerminalNode *TRUSTED();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *OPTIMIZATION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_attributesContext* constraint_attributes();

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

  class  Default_valuesContext : public antlr4::ParserRuleContext {
  public:
    Default_valuesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_Context *constant_();
    Datetime_special_registerContext *datetime_special_register();
    User_special_registerContext *user_special_register();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *NULL_();
    Cast_functionContext *cast_function();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *EMPTY_CLOB();
    antlr4::tree::TerminalNode *EMPTY_DBCLOB();
    antlr4::tree::TerminalNode *EMPTY_NCLOB();
    antlr4::tree::TerminalNode *EMPTY_BLOB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_valuesContext* default_values();

  class  Generated_clauseContext : public antlr4::ParserRuleContext {
  public:
    Generated_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATED();
    Identity_optionsContext *identity_options();
    As_row_change_timestamp_clauseContext *as_row_change_timestamp_clause();
    antlr4::tree::TerminalNode *ALWAYS();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *DEFAULT();
    As_generated_expression_clauseContext *as_generated_expression_clause();
    As_row_transaction_timestamp_clauseContext *as_row_transaction_timestamp_clause();
    As_row_transaction_start_id_clauseContext *as_row_transaction_start_id_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generated_clauseContext* generated_clause();

  class  Datetime_special_registerContext : public antlr4::ParserRuleContext {
  public:
    Datetime_special_registerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();


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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_special_registerContext* user_special_register();

  class  Cast_functionContext : public antlr4::ParserRuleContext {
  public:
    Cast_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cast_functionContext* cast_function();

  class  Identity_optionsContext : public antlr4::ParserRuleContext {
  public:
    Identity_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *IDENTITY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<Identity_options_itemContext *> identity_options_item();
    Identity_options_itemContext* identity_options_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_optionsContext* identity_options();

  class  Identity_options_itemContext : public antlr4::ParserRuleContext {
  public:
    Identity_options_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *WITH();
    Numeric_constantContext *numeric_constant();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *MAXVALUE();
    antlr4::tree::TerminalNode *CYCLE();
    antlr4::tree::TerminalNode *CACHE();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *ORDER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identity_options_itemContext* identity_options_item();

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
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Generation_expressionContext *generation_expression();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_generated_expression_clauseContext* as_generated_expression_clause();

  class  Generation_expressionContext : public antlr4::ParserRuleContext {
  public:
    Generation_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generation_expressionContext* generation_expression();

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

  class  Oid_column_definitionContext : public antlr4::ParserRuleContext {
  public:
    Oid_column_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *IS();
    Oid_column_nameContext *oid_column_name();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *GENERATED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oid_column_definitionContext* oid_column_definition();

  class  Range_partition_specContext : public antlr4::ParserRuleContext {
  public:
    Range_partition_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    Partition_expression_listContext *partition_expression_list();
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    Partition_element_listContext *partition_element_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_partition_specContext* range_partition_spec();

  class  Partition_expression_listContext : public antlr4::ParserRuleContext {
  public:
    Partition_expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Partition_expressionContext *> partition_expression();
    Partition_expressionContext* partition_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_expression_listContext* partition_expression_list();

  class  Partition_expressionContext : public antlr4::ParserRuleContext {
  public:
    Partition_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *NULLS();
    First_lastContext *first_last();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_expressionContext* partition_expression();

  class  Partition_element_listContext : public antlr4::ParserRuleContext {
  public:
    Partition_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Partition_elementContext *> partition_element();
    Partition_elementContext* partition_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_element_listContext* partition_element_list();

  class  Partition_elementContext : public antlr4::ParserRuleContext {
  public:
    Partition_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boundary_specContext *boundary_spec();
    antlr4::tree::TerminalNode *PARTITION();
    Partition_nameContext *partition_name();
    Partition_tablespace_optionsContext *partition_tablespace_options();
    antlr4::tree::TerminalNode *EVERY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Constant_Context *constant_();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Duration_labelContext *duration_label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_elementContext* partition_element();

  class  Boundary_specContext : public antlr4::ParserRuleContext {
  public:
    Boundary_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Starting_clauseContext *starting_clause();
    Ending_clauseContext *ending_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boundary_specContext* boundary_spec();

  class  Partition_tablespace_optionsContext : public antlr4::ParserRuleContext {
  public:
    Partition_tablespace_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LONG();
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    std::vector<Tablespace_nameContext *> tablespace_name();
    Tablespace_nameContext* tablespace_name(size_t i);
    antlr4::tree::TerminalNode *INDEX();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_tablespace_optionsContext* partition_tablespace_options();

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

  class  Starting_clauseContext : public antlr4::ParserRuleContext {
  public:
    Starting_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Const_min_max_listContext *const_min_max_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Const_min_maxContext *const_min_max();
    antlr4::tree::TerminalNode *FROM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Starting_clauseContext* starting_clause();

  class  Const_min_max_listContext : public antlr4::ParserRuleContext {
  public:
    Const_min_max_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Const_min_maxContext *> const_min_max();
    Const_min_maxContext* const_min_max(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_min_max_listContext* const_min_max_list();

  class  Const_min_maxContext : public antlr4::ParserRuleContext {
  public:
    Const_min_maxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_Context *constant_();
    antlr4::tree::TerminalNode *MINVALUE();
    antlr4::tree::TerminalNode *MAXVALUE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_min_maxContext* const_min_max();

  class  Ending_clauseContext : public antlr4::ParserRuleContext {
  public:
    Ending_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDING();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Const_min_max_listContext *const_min_max_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Const_min_maxContext *const_min_max();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *INCLUSIVE();
    antlr4::tree::TerminalNode *EXCLUSIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ending_clauseContext* ending_clause();

  class  Typed_table_optionsContext : public antlr4::ParserRuleContext {
  public:
    Typed_table_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Typed_element_listContext *typed_element_list();
    antlr4::tree::TerminalNode *HIERARCHY();
    Hierarchy_nameContext *hierarchy_name();
    Under_clauseContext *under_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_table_optionsContext* typed_table_options();

  class  Typed_element_listContext : public antlr4::ParserRuleContext {
  public:
    Typed_element_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Typed_element_list_itemContext *> typed_element_list_item();
    Typed_element_list_itemContext* typed_element_list_item(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_element_listContext* typed_element_list();

  class  Typed_element_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Typed_element_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Oid_column_nameContext *oid_column_name();
    With_optionsContext *with_options();
    Unique_constraintContext *unique_constraint();
    Check_constraintContext *check_constraint();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_element_list_itemContext* typed_element_list_item();

  class  As_result_tableContext : public antlr4::ParserRuleContext {
  public:
    As_result_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Fullselect_in_parenthesesContext *fullselect_in_parentheses();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DATA();
    Column_name_list_parenContext *column_name_list_paren();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_result_tableContext* as_result_table();

  class  Copy_optionsContext : public antlr4::ParserRuleContext {
  public:
    Copy_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULTS();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *COLUMN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Copy_optionsContext* copy_options();

  class  Materialized_query_optionsContext : public antlr4::ParserRuleContext {
  public:
    Materialized_query_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Fullselect_in_parenthesesContext *fullselect_in_parentheses();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *DATA();
    Column_name_list_parenContext *column_name_list_paren();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Materialized_query_optionsContext* materialized_query_options();

  class  Staging_table_definitionContext : public antlr4::ParserRuleContext {
  public:
    Staging_table_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *PROPAGATE();
    antlr4::tree::TerminalNode *IMMEDIATE();
    Column_name_list_parenContext *column_name_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Staging_table_definitionContext* staging_table_definition();

  class  Dimensions_clauseContext : public antlr4::ParserRuleContext {
  public:
    Dimensions_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Col_namesContext *> col_names();
    Col_namesContext* col_names(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *DIMENSIONS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dimensions_clauseContext* dimensions_clause();

  class  Col_namesContext : public antlr4::ParserRuleContext {
  public:
    Col_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Column_name_list_parenContext *column_name_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Col_namesContext* col_names();

  class  Sequence_key_specContext : public antlr4::ParserRuleContext {
  public:
    Sequence_key_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Sequence_key_spec_listContext *sequence_key_spec_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *OVERFLOW_WV();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *PCTFREE();
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_key_specContext* sequence_key_spec();

  class  Sequence_key_spec_listContext : public antlr4::ParserRuleContext {
  public:
    Sequence_key_spec_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_key_spec_list_itemContext *> sequence_key_spec_list_item();
    Sequence_key_spec_list_itemContext* sequence_key_spec_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_key_spec_listContext* sequence_key_spec_list();

  class  Sequence_key_spec_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Sequence_key_spec_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *ENDING();
    std::vector<Constant_Context *> constant_();
    Constant_Context* constant_(size_t i);
    antlr4::tree::TerminalNode *STARTING();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *FROM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_key_spec_list_itemContext* sequence_key_spec_list_item();

  class  Tablespace_clausesContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_clausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tablespace_name_listContext *> tablespace_name_list();
    Tablespace_name_listContext* tablespace_name_list(size_t i);
    antlr4::tree::TerminalNode *CYCLE();
    std::vector<antlr4::tree::TerminalNode *> IN();
    antlr4::tree::TerminalNode* IN(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *INDEX();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *LONG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_clausesContext* tablespace_clauses();

  class  Distribution_clauseContext : public antlr4::ParserRuleContext {
  public:
    Distribution_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTRIBUTE();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
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

  class  Create_tablespace_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_tablespace_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLESPACE();
    Tablespace_nameContext *tablespace_name();
    antlr4::tree::TerminalNode *LARGE();
    antlr4::tree::TerminalNode *REGULAR();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IN();
    Db_partition_group_nameContext *db_partition_group_name();
    antlr4::tree::TerminalNode *PAGESIZE();
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
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
    std::vector<Number_of_pagesContext *> number_of_pages();
    Number_of_pagesContext* number_of_pages(size_t i);
    std::vector<Number_of_millisecondsContext *> number_of_milliseconds();
    Number_of_millisecondsContext* number_of_milliseconds(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INHERIT();
    antlr4::tree::TerminalNode* INHERIT(size_t i);
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *NONE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *GROUP();
    std::vector<antlr4::tree::TerminalNode *> K();
    antlr4::tree::TerminalNode* K(size_t i);
    std::vector<antlr4::tree::TerminalNode *> M();
    antlr4::tree::TerminalNode* M(size_t i);
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *USER();
    Storage_groupContext *storage_group();
    Size_attributesContext *size_attributes();
    std::vector<System_containersContext *> system_containers();
    System_containersContext* system_containers(size_t i);
    std::vector<Database_containersContext *> database_containers();
    Database_containersContext* database_containers(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_tablespace_statementContext* create_tablespace_statement();

  class  Storage_groupContext : public antlr4::ParserRuleContext {
  public:
    Storage_groupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *STOGROUP();
    Storagegroup_nameContext *storagegroup_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Storage_groupContext* storage_group();

  class  Size_attributesContext : public antlr4::ParserRuleContext {
  public:
    Size_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIALSIZE();
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    std::vector<KmgContext *> kmg();
    KmgContext* kmg(size_t i);
    antlr4::tree::TerminalNode *AUTORESIZE();
    Yes_noContext *yes_no();
    antlr4::tree::TerminalNode *INCREASESIZE();
    antlr4::tree::TerminalNode *MAXSIZE();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *NONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Size_attributesContext* size_attributes();

  class  System_containersContext : public antlr4::ParserRuleContext {
  public:
    System_containersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Container_string_listContext *container_string_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    On_db_partitions_clauseContext *on_db_partitions_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_containersContext* system_containers();

  class  Container_string_listContext : public antlr4::ParserRuleContext {
  public:
    Container_string_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Container_string_listContext* container_string_list();

  class  Database_containersContext : public antlr4::ParserRuleContext {
  public:
    Database_containersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    Container_clauseContext *container_clause();
    On_db_partitions_clauseContext *on_db_partitions_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_containersContext* database_containers();

  class  Container_clauseContext : public antlr4::ParserRuleContext {
  public:
    Container_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Container_clause_listContext *container_clause_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Container_clauseContext* container_clause();

  class  Container_clause_listContext : public antlr4::ParserRuleContext {
  public:
    Container_clause_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Container_clause_list_itemContext *> container_clause_list_item();
    Container_clause_list_itemContext* container_clause_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Container_clause_listContext* container_clause_list();

  class  Container_clause_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Container_clause_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_deviceContext *file_device();
    StringContext *string();
    Number_of_pagesContext *number_of_pages();
    Integer_valueContext *integer_value();
    KmgContext *kmg();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Container_clause_list_itemContext* container_clause_list_item();

  class  On_db_partitions_clauseContext : public antlr4::ParserRuleContext {
  public:
    On_db_partitions_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    Db_partition_num_numsContext *db_partition_num_nums();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Db_partition_number_listContext *db_partition_number_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  On_db_partitions_clauseContext* on_db_partitions_clause();

  class  Db_partition_number_listContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_number_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Db_partition_number_list_itemContext *> db_partition_number_list_item();
    Db_partition_number_list_itemContext* db_partition_number_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_number_listContext* db_partition_number_list();

  class  Db_partition_number_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_number_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Db_partition_numberContext *> db_partition_number();
    Db_partition_numberContext* db_partition_number(size_t i);
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_number_list_itemContext* db_partition_number_list_item();

  class  Db_partition_numberContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_numberContext* db_partition_number();

  class  Number_of_pagesContext : public antlr4::ParserRuleContext {
  public:
    Number_of_pagesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_of_pagesContext* number_of_pages();

  class  Number_of_filesContext : public antlr4::ParserRuleContext {
  public:
    Number_of_filesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_of_filesContext* number_of_files();

  class  Number_of_millisecondsContext : public antlr4::ParserRuleContext {
  public:
    Number_of_millisecondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_of_millisecondsContext* number_of_milliseconds();

  class  Number_megabytes_per_secondContext : public antlr4::ParserRuleContext {
  public:
    Number_megabytes_per_secondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_megabytes_per_secondContext* number_megabytes_per_second();

  class  Create_threshold_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_threshold_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *THRESHOLD();
    Threshold_nameContext *threshold_name();
    antlr4::tree::TerminalNode *FOR();
    Threshold_domainContext *threshold_domain();
    Enable_disableContext *enable_disable();
    antlr4::tree::TerminalNode *WHEN();
    Threshold_predicateContext *threshold_predicate();
    Threshold_exceeded_actions_2Context *threshold_exceeded_actions_2();
    antlr4::tree::TerminalNode *ENFORCEMENT();
    antlr4::tree::TerminalNode *DEFAULT();
    Enforcement_scopeContext *enforcement_scope();
    antlr4::tree::TerminalNode *ACTIVITIES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_threshold_statementContext* create_threshold_statement();

  class  Threshold_domainContext : public antlr4::ParserRuleContext {
  public:
    Threshold_domainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS_();
    std::vector<Service_class_nameContext *> service_class_name();
    Service_class_nameContext* service_class_name(size_t i);
    antlr4::tree::TerminalNode *UNDER();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *TEXT();
    Statement_textContext *statement_text();
    antlr4::tree::TerminalNode *REFERENCE();
    Executable_idContext *executable_id();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_domainContext* threshold_domain();

  class  Statement_textContext : public antlr4::ParserRuleContext {
  public:
    Statement_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_textContext* statement_text();

  class  Executable_idContext : public antlr4::ParserRuleContext {
  public:
    Executable_idContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Executable_idContext* executable_id();

  class  Enforcement_scopeContext : public antlr4::ParserRuleContext {
  public:
    Enforcement_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *WORKLOAD();
    antlr4::tree::TerminalNode *OCCURENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enforcement_scopeContext* enforcement_scope();

  class  Threshold_predicateContext : public antlr4::ParserRuleContext {
  public:
    Threshold_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOTALMEMBERCONNECTIONS();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    antlr4::tree::TerminalNode *TOTALSCMEMBERCONNECTIONS();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *QUEUEDCONNECTIONS();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *CONNECTIONIDLETIME();
    Day_to_minutesContext *day_to_minutes();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADOCCURRENCES();
    antlr4::tree::TerminalNode *CONCURRENTWORKLOADACTIVITIES();
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    Day_to_secondsContext *day_to_seconds();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *UOWTOTALTIME();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    antlr4::tree::TerminalNode *AGGSQLTEMPSPACE();
    Bigint_valueContext *bigint_value();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SQLROWSREADINSC();
    Checking_everyContext *checking_every();
    Hour_to_secondsContext *hour_to_seconds();
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
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Integer_constant_listContext *integer_constant_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_predicateContext* threshold_predicate();

  class  Checking_everyContext : public antlr4::ParserRuleContext {
  public:
    Checking_everyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *EVERY();
    Integer_valueContext *integer_value();
    Second_secondsContext *second_seconds();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checking_everyContext* checking_every();

  class  Hour_to_secondsContext : public antlr4::ParserRuleContext {
  public:
    Hour_to_secondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hour_to_secondsContext* hour_to_seconds();

  class  Day_to_minutesContext : public antlr4::ParserRuleContext {
  public:
    Day_to_minutesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Day_to_minutesContext* day_to_minutes();

  class  Day_to_secondsContext : public antlr4::ParserRuleContext {
  public:
    Day_to_secondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DAYS();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();
    antlr4::tree::TerminalNode *SECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Day_to_secondsContext* day_to_seconds();

  class  Threshold_exceeded_actions_2Context : public antlr4::ParserRuleContext {
  public:
    Threshold_exceeded_actions_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *APPLICATION();
    Remap_activity_actionContext *remap_activity_action();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *WITH();
    Details_sectionContext *details_section();
    TodoContext *todo();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_exceeded_actions_2Context* threshold_exceeded_actions_2();

  class  Details_sectionContext : public antlr4::ParserRuleContext {
  public:
    Details_sectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SECTION();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Details_sectionContext* details_section();

  class  Remap_activity_actionContext : public antlr4::ParserRuleContext {
  public:
    Remap_activity_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REMAP();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *TO();
    Service_subclass_nameContext *service_subclass_name();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *MONITOR();
    antlr4::tree::TerminalNode *RECORD();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *LOG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remap_activity_actionContext* remap_activity_action();

  class  Create_transform_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_transform_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *FOR();
    Type_nameContext *type_name();
    Tranform_listContext *tranform_list();
    antlr4::tree::TerminalNode *TRANSFORM();
    antlr4::tree::TerminalNode *TRANSFORMS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_transform_statementContext* create_transform_statement();

  class  Tranform_listContext : public antlr4::ParserRuleContext {
  public:
    Tranform_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tranform_list_itemContext *> tranform_list_item();
    Tranform_list_itemContext* tranform_list_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tranform_listContext* tranform_list();

  class  Tranform_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Tranform_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Group_nameContext *group_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Transform_group_listContext *transform_group_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tranform_list_itemContext* tranform_list_item();

  class  Transform_group_listContext : public antlr4::ParserRuleContext {
  public:
    Transform_group_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Transform_group_list_itemContext *> transform_group_list_item();
    Transform_group_list_itemContext* transform_group_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transform_group_listContext* transform_group_list();

  class  Transform_group_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Transform_group_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *WITH();
    Function_designatorContext *function_designator();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *FROM();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transform_group_list_itemContext* transform_group_list_item();

  class  Create_trigger_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_trigger_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRIGGER();
    Trigger_nameContext *trigger_name();
    Trigger_eventContext *trigger_event();
    antlr4::tree::TerminalNode *ON();
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *EACH();
    Triggered_actionContext *triggered_action();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *STATEMENT();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *INSTEAD();
    antlr4::tree::TerminalNode *OF();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *REFERENCING();
    Ref_listContext *ref_list();
    antlr4::tree::TerminalNode *SECURED();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_trigger_statementContext* create_trigger_statement();

  class  Ref_listContext : public antlr4::ParserRuleContext {
  public:
    Ref_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ref_list_itemContext *> ref_list_item();
    Ref_list_itemContext* ref_list_item(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ref_listContext* ref_list();

  class  Ref_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Ref_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Old_newContext *old_new();
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *TABLE();
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ref_list_itemContext* ref_list_item();

  class  Old_newContext : public antlr4::ParserRuleContext {
  public:
    Old_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OLD();
    antlr4::tree::TerminalNode *NEW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Old_newContext* old_new();

  class  Correlation_nameContext : public antlr4::ParserRuleContext {
  public:
    Correlation_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Correlation_nameContext* correlation_name();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Trigger_eventContext : public antlr4::ParserRuleContext {
  public:
    Trigger_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *UPDATE();
    antlr4::tree::TerminalNode *OF();
    Column_name_listContext *column_name_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_eventContext* trigger_event();

  class  Triggered_actionContext : public antlr4::ParserRuleContext {
  public:
    Triggered_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sql_procedure_statementContext *sql_procedure_statement();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Search_conditionContext *search_condition();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    LabelContext *label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Triggered_actionContext* triggered_action();

  class  Sql_procedure_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_procedure_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IF();
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_procedure_statementContext* sql_procedure_statement();

  class  Sql_function_statementContext : public antlr4::ParserRuleContext {
  public:
    Sql_function_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *FOR();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();
    antlr4::tree::TerminalNode *GET();
    antlr4::tree::TerminalNode *DIAGNOSTICS();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *ITERATE();
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *MERGE();
    Searched_delete_statementContext *searched_delete_statement();
    Searched_update_statementContext *searched_update_statement();
    antlr4::tree::TerminalNode *SET();
    VariableContext *variable();
    antlr4::tree::TerminalNode *SIGNAL();
    antlr4::tree::TerminalNode *WHILE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_function_statementContext* sql_function_statement();

  class  Create_trusted_context_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_trusted_context_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TRUSTED();
    antlr4::tree::TerminalNode *CONTEXT();
    Context_nameContext *context_name();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *UPON();
    antlr4::tree::TerminalNode *CONNECTION();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *AUTHID();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *ATTRIBUTES();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Attr_listContext *attr_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *FOR();
    Auth_listContext *auth_list();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_trusted_context_statementContext* create_trusted_context_statement();

  class  Attr_listContext : public antlr4::ParserRuleContext {
  public:
    Attr_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attr_list_itemContext *> attr_list_item();
    Attr_list_itemContext* attr_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_listContext* attr_list();

  class  Attr_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Attr_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();
    Address_valueContext *address_value();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ENCRYPTION();
    Encryption_valueContext *encryption_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_list_itemContext* attr_list_item();

  class  Auth_listContext : public antlr4::ParserRuleContext {
  public:
    Auth_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Auth_list_itemContext *> auth_list_item();
    Auth_list_itemContext* auth_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Auth_listContext* auth_list();

  class  Auth_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Auth_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *PUBLIC();
    With_withoutContext *with_without();
    antlr4::tree::TerminalNode *AUTHENTICATION();
    antlr4::tree::TerminalNode *ROLE();
    Role_nameContext *role_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Auth_list_itemContext* auth_list_item();

  class  Address_valueContext : public antlr4::ParserRuleContext {
  public:
    Address_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Address_valueContext* address_value();

  class  Encryption_valueContext : public antlr4::ParserRuleContext {
  public:
    Encryption_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Encryption_valueContext* encryption_value();

  class  Create_type_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Create_type_array_statementContext *create_type_array_statement();
    Create_type_cursor_statementContext *create_type_cursor_statement();
    Create_type_distinct_statementContext *create_type_distinct_statement();
    Create_type_row_statementContext *create_type_row_statement();
    Create_type_structured_statementContext *create_type_structured_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_statementContext* create_type_statement();

  class  Create_type_array_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_array_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LEFT_SQR_BKT();
    antlr4::tree::TerminalNode *RIGHT_SQR_BKT();
    Integer_constantContext *integer_constant();
    Data_type_2Context *data_type_2();
    Or_replaceContext *or_replace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_array_statementContext* create_type_array_statement();

  class  Create_type_cursor_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_cursor_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *CURSOR();
    Or_replaceContext *or_replace();
    Anchored_row_data_typeContext *anchored_row_data_type();
    Row_type_nameContext *row_type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_cursor_statementContext* create_type_cursor_statement();

  class  Create_type_distinct_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_distinct_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    Distinct_type_nameContext *distinct_type_name();
    antlr4::tree::TerminalNode *AS();
    Source_data_typeContext *source_data_type();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *RULES();
    antlr4::tree::TerminalNode *WEAK();
    Data_type_constrainstContext *data_type_constrainst();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_distinct_statementContext* create_type_distinct_statement();

  class  Create_type_row_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_row_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ROW();
    Field_definition_list_parenContext *field_definition_list_paren();
    Anchored_row_data_typeContext *anchored_row_data_type();
    Or_replaceContext *or_replace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_row_statementContext* create_type_row_statement();

  class  Field_definition_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Field_definition_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Field_definition_listContext *field_definition_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_definition_list_parenContext* field_definition_list_paren();

  class  Field_definition_listContext : public antlr4::ParserRuleContext {
  public:
    Field_definition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Field_definitionContext *> field_definition();
    Field_definitionContext* field_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_definition_listContext* field_definition_list();

  class  Field_definitionContext : public antlr4::ParserRuleContext {
  public:
    Field_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Field_nameContext *field_name();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_definitionContext* field_definition();

  class  Create_type_structured_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_structured_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TYPE();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *UNDER();
    Supertype_nameContext *supertype_name();
    antlr4::tree::TerminalNode *AS();
    Attribute_definition_list_parenContext *attribute_definition_list_paren();
    std::vector<Structured_type_seqContext *> structured_type_seq();
    Structured_type_seqContext* structured_type_seq(size_t i);
    Method_specification_listContext *method_specification_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_structured_statementContext* create_type_structured_statement();

  class  Structured_type_seqContext : public antlr4::ParserRuleContext {
  public:
    Structured_type_seqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANTIABLE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *SOURCE();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *WITH();
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *LENGTH();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *COMPARISONS();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *USING();
    Rep_typeContext *rep_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Structured_type_seqContext* structured_type_seq();

  class  Attribute_definition_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Attribute_definition_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Attribute_definition_listContext *attribute_definition_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_definition_list_parenContext* attribute_definition_list_paren();

  class  Attribute_definition_listContext : public antlr4::ParserRuleContext {
  public:
    Attribute_definition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_definitionContext *> attribute_definition();
    Attribute_definitionContext* attribute_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_definition_listContext* attribute_definition_list();

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

  class  Method_specification_listContext : public antlr4::ParserRuleContext {
  public:
    Method_specification_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Method_specificationContext *> method_specification();
    Method_specificationContext* method_specification(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_specification_listContext* method_specification_list();

  class  Method_specificationContext : public antlr4::ParserRuleContext {
  public:
    Method_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *METHOD();
    Method_nameContext *method_name();
    Param_decl_list_parenContext *param_decl_list_paren();
    antlr4::tree::TerminalNode *OVERRIDING();
    std::vector<Method_specification_seqContext *> method_specification_seq();
    Method_specification_seqContext* method_specification_seq(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_specificationContext* method_specification();

  class  Method_specification_seqContext : public antlr4::ParserRuleContext {
  public:
    Method_specification_seqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURNS();
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *FROM();
    As_locatorContext *as_locator();
    antlr4::tree::TerminalNode *SPECIFIC();
    Specific_nameContext *specific_name();
    antlr4::tree::TerminalNode *SELF();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *RESULT();
    Sql_routine_characteristicsContext *sql_routine_characteristics();
    External_routine_characteristicsContext *external_routine_characteristics();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_specification_seqContext* method_specification_seq();

  class  As_locatorContext : public antlr4::ParserRuleContext {
  public:
    As_locatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LOCATOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  As_locatorContext* as_locator();

  class  Param_decl_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Param_decl_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Param_decl_listContext *param_decl_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_list_parenContext* param_decl_list_paren();

  class  Param_decl_listContext : public antlr4::ParserRuleContext {
  public:
    Param_decl_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_declContext *> param_decl();
    Param_declContext* param_decl(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_decl_listContext* param_decl_list();

  class  Param_declContext : public antlr4::ParserRuleContext {
  public:
    Param_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_2Context *data_type_2();
    Parameter_nameContext *parameter_name();
    As_locatorContext *as_locator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_declContext* param_decl();

  class  Sql_routine_characteristicsContext : public antlr4::ParserRuleContext {
  public:
    Sql_routine_characteristicsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE_WV();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *READS();
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

  Sql_routine_characteristicsContext* sql_routine_characteristics();

  class  External_routine_characteristicsContext : public antlr4::ParserRuleContext {
  public:
    External_routine_characteristicsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LANGUAGE();
    antlr4::tree::TerminalNode *C_();
    antlr4::tree::TerminalNode *JAVA();
    antlr4::tree::TerminalNode *OLE();
    antlr4::tree::TerminalNode *PARAMETER();
    antlr4::tree::TerminalNode *STYLE();
    antlr4::tree::TerminalNode *DB2GENERAL();
    antlr4::tree::TerminalNode *SQL();
    antlr4::tree::TerminalNode *CCSID();
    antlr4::tree::TerminalNode *ASCII();
    antlr4::tree::TerminalNode *UNICODE_WV();
    antlr4::tree::TerminalNode *DETERMINISTIC();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FENCED();
    antlr4::tree::TerminalNode *THREADSAFE();
    antlr4::tree::TerminalNode *CALLED();
    antlr4::tree::TerminalNode *ON();
    std::vector<antlr4::tree::TerminalNode *> NULL_();
    antlr4::tree::TerminalNode* NULL_(size_t i);
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *RETURNS();
    antlr4::tree::TerminalNode *READS();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *EXTERNAL();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *SCRATCHPAD();
    LengthContext *length();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *PARALLEL();
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();
    antlr4::tree::TerminalNode *DBINFO();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SPECIAL();
    antlr4::tree::TerminalNode *REGISTERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_routine_characteristicsContext* external_routine_characteristics();

  class  LengthContext : public antlr4::ParserRuleContext {
  public:
    LengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LengthContext* length();

  class  Rep_typeContext : public antlr4::ParserRuleContext {
  public:
    Rep_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BIGINT();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *NUMERIC();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *DECFLOAT();
    Char_characterContext *char_character();
    Integer_parenContext *integer_paren();
    For_bit_dataContext *for_bit_data();
    VarcharsContext *varchars();
    antlr4::tree::TerminalNode *BINARY();
    VarbinariesContext *varbinaries();
    antlr4::tree::TerminalNode *GRAPHIC();
    antlr4::tree::TerminalNode *VARGRAPHIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rep_typeContext* rep_type();

  class  VarcharsContext : public antlr4::ParserRuleContext {
  public:
    VarcharsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARCHAR();
    Char_characterContext *char_character();
    antlr4::tree::TerminalNode *VARYING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarcharsContext* varchars();

  class  VarbinariesContext : public antlr4::ParserRuleContext {
  public:
    VarbinariesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARBINARY();
    antlr4::tree::TerminalNode *BINARY();
    antlr4::tree::TerminalNode *VARYING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarbinariesContext* varbinaries();

  class  For_bit_dataContext : public antlr4::ParserRuleContext {
  public:
    For_bit_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *DATA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_bit_dataContext* for_bit_data();

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

  class  Create_type_mapping_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_type_mapping_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> TYPE();
    antlr4::tree::TerminalNode* TYPE(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    std::vector<From_toContext *> from_to();
    From_toContext* from_to(size_t i);
    Local_data_typeContext *local_data_type();
    Remote_serverContext *remote_server();
    Data_source_data_typeContext *data_source_data_type();
    For_bit_data_precisionContext *for_bit_data_precision();
    Type_mapping_nameContext *type_mapping_name();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *REMOTE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_type_mapping_statementContext* create_type_mapping_statement();

  class  For_bit_data_precisionContext : public antlr4::ParserRuleContext {
  public:
    For_bit_data_precisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    For_bit_dataContext *for_bit_data();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<PrecisionContext *> precision();
    PrecisionContext* precision(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT_DOT();
    antlr4::tree::TerminalNode* DOT_DOT(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    Precision_scale_compContext *precision_scale_comp();
    std::vector<ScaleContext *> scale();
    ScaleContext* scale(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_bit_data_precisionContext* for_bit_data_precision();

  class  PrecisionContext : public antlr4::ParserRuleContext {
  public:
    PrecisionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrecisionContext* precision();

  class  ScaleContext : public antlr4::ParserRuleContext {
  public:
    ScaleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScaleContext* scale();

  class  Precision_scale_compContext : public antlr4::ParserRuleContext {
  public:
    Precision_scale_compContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *P_();
    antlr4::tree::TerminalNode *S_();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *LTGT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Precision_scale_compContext* precision_scale_comp();

  class  From_toContext : public antlr4::ParserRuleContext {
  public:
    From_toContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_toContext* from_to();

  class  Data_source_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_source_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_source_data_typeContext* data_source_data_type();

  class  Local_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Local_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Type_nameContext *type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_data_typeContext* local_data_type();

  class  Remote_serverContext : public antlr4::ParserRuleContext {
  public:
    Remote_serverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *TYPE();
    Server_typeContext *server_type();
    antlr4::tree::TerminalNode *VERSION();
    Server_versionContext *server_version();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remote_serverContext* remote_server();

  class  Server_versionContext : public antlr4::ParserRuleContext {
  public:
    Server_versionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VersionContext *version();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    ReleaseContext *release();
    ModContext *mod();
    String_constantContext *string_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_versionContext* server_version();

  class  Server_typeContext : public antlr4::ParserRuleContext {
  public:
    Server_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_typeContext* server_type();

  class  VersionContext : public antlr4::ParserRuleContext {
  public:
    VersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionContext* version();

  class  ReleaseContext : public antlr4::ParserRuleContext {
  public:
    ReleaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReleaseContext* release();

  class  ModContext : public antlr4::ParserRuleContext {
  public:
    ModContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModContext* mod();

  class  Create_usage_list_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_usage_list_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *USAGE();
    std::vector<antlr4::tree::TerminalNode *> LIST();
    antlr4::tree::TerminalNode* LIST(size_t i);
    Usage_list_nameContext *usage_list_name();
    antlr4::tree::TerminalNode *FOR();
    Object_nameContext *object_name();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *SIZE();
    Integer_valueContext *integer_value();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *WRAP();
    antlr4::tree::TerminalNode *DEACTIVATE();
    antlr4::tree::TerminalNode *INACTIVE();
    antlr4::tree::TerminalNode *ACTIVE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_usage_list_statementContext* create_usage_list_statement();

  class  Create_user_mapping_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_user_mapping_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> USER();
    antlr4::tree::TerminalNode* USER(size_t i);
    antlr4::tree::TerminalNode *MAPPING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SERVER();
    Server_nameContext *server_name();
    antlr4::tree::TerminalNode *OPTIONS();
    User_mapping_options_parenContext *user_mapping_options_paren();
    Authorization_nameContext *authorization_name();
    antlr4::tree::TerminalNode *PUBLIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_user_mapping_statementContext* create_user_mapping_statement();

  class  User_mapping_options_parenContext : public antlr4::ParserRuleContext {
  public:
    User_mapping_options_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<User_mapping_optionsContext *> user_mapping_options();
    User_mapping_optionsContext* user_mapping_options(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_mapping_options_parenContext* user_mapping_options_paren();

  class  User_mapping_optionsContext : public antlr4::ParserRuleContext {
  public:
    User_mapping_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    User_mapping_option_nameContext *user_mapping_option_name();
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_mapping_optionsContext* user_mapping_options();

  class  Create_variable_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_variable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VARIABLE();
    Variable_nameContext *variable_name();
    Data_type_1Context *data_type_1();
    antlr4::tree::TerminalNode *NULL_();
    Or_replaceContext *or_replace();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CONSTANT();
    Constant_Context *constant_();
    Special_registerContext *special_register();
    Global_variableContext *global_variable();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Cursor_value_constructorContext *cursor_value_constructor();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_variable_statementContext* create_variable_statement();

  class  Constant_Context : public antlr4::ParserRuleContext {
  public:
    Constant_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_constantContext *integer_constant();
    Bigint_constantContext *bigint_constant();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *REAL_LITERAL();
    StringContext *string();
    antlr4::tree::TerminalNode *NULL_();
    antlr4::tree::TerminalNode *L_ONE();
    antlr4::tree::TerminalNode *L_ZERO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_Context* constant_();

  class  Special_registerContext : public antlr4::ParserRuleContext {
  public:
    Special_registerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Special_registerContext* special_register();

  class  Global_variableContext : public antlr4::ParserRuleContext {
  public:
    Global_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_variableContext* global_variable();

  class  Data_type_1Context : public antlr4::ParserRuleContext {
  public:
    Data_type_1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Built_in_typeContext *built_in_type();
    Anchored_variable_data_typeContext *anchored_variable_data_type();
    Array_type_nameContext *array_type_name();
    Cursor_type_nameContext *cursor_type_name();
    Distinct_type_nameContext *distinct_type_name();
    antlr4::tree::TerminalNode *REF();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Row_type_nameContext *row_type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_1Context* data_type_1();

  class  Cursor_value_constructorContext : public antlr4::ParserRuleContext {
  public:
    Cursor_value_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CURSOR();
    HoldabilityContext *holdability();
    antlr4::tree::TerminalNode *FOR();
    Select_statementContext *select_statement();
    antlr4::tree::TerminalNode *ASENSITIVE();
    antlr4::tree::TerminalNode *INSENSITIVE();
    Param_decl_list_parenContext *param_decl_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_value_constructorContext* cursor_value_constructor();

  class  Anchored_variable_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Anchored_variable_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ANCHOR();
    Variable_nameContext *variable_name();
    Table_nameContext *table_name();
    antlr4::tree::TerminalNode *DOT();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TO();
    Table_or_view_nameContext *table_or_view_name();
    Cursor_variable_nameContext *cursor_variable_name();
    antlr4::tree::TerminalNode *OF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anchored_variable_data_typeContext* anchored_variable_data_type();

  class  HoldabilityContext : public antlr4::ParserRuleContext {
  public:
    HoldabilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOLD();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HoldabilityContext* holdability();

  class  ReturnabilityContext : public antlr4::ParserRuleContext {
  public:
    ReturnabilityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *CALLER();
    antlr4::tree::TerminalNode *CLIENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnabilityContext* returnability();

  class  Create_view_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_view_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *VIEW();
    View_nameContext *view_name();
    FullselectContext *fullselect();
    Or_replaceContext *or_replace();
    Column_name_list_parenContext *column_name_list_paren();
    antlr4::tree::TerminalNode *OF();
    Type_nameContext *type_name();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();
    std::vector<Create_view_seqContext *> create_view_seq();
    Create_view_seqContext* create_view_seq(size_t i);
    Root_view_definitionContext *root_view_definition();
    Subview_definitionContext *subview_definition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_statementContext* create_view_statement();

  class  Create_view_seqContext : public antlr4::ParserRuleContext {
  public:
    Create_view_seqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *CASCADED();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *MOVEMENT();
    antlr4::tree::TerminalNode *NO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_view_seqContext* create_view_seq();

  class  FullselectContext : public antlr4::ParserRuleContext {
  public:
    FullselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SubselectContext *> subselect();
    SubselectContext* subselect(size_t i);
    std::vector<Fullselect_in_parenthesesContext *> fullselect_in_parentheses();
    Fullselect_in_parenthesesContext* fullselect_in_parentheses(size_t i);
    std::vector<Values_clauseContext *> values_clause();
    Values_clauseContext* values_clause(size_t i);
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    Isolation_clauseContext *isolation_clause();
    std::vector<antlr4::tree::TerminalNode *> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXCEPT();
    antlr4::tree::TerminalNode* EXCEPT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INTERSECT();
    antlr4::tree::TerminalNode* INTERSECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullselectContext* fullselect();

  class  SubselectContext : public antlr4::ParserRuleContext {
  public:
    SubselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_clauseContext *select_clause();
    From_clauseContext *from_clause();
    Where_clauseContext *where_clause();
    Group_by_clauseContext *group_by_clause();
    Having_clauseContext *having_clause();
    Order_by_clauseContext *order_by_clause();
    Offset_clauseContext *offset_clause();
    Fetch_clauseContext *fetch_clause();
    Isolation_clauseContext *isolation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubselectContext* subselect();

  class  Select_clauseContext : public antlr4::ParserRuleContext {
  public:
    Select_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    std::vector<Select_clause_itemContext *> select_clause_item();
    Select_clause_itemContext* select_clause_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_clauseContext* select_clause();

  class  Select_clause_itemContext : public antlr4::ParserRuleContext {
  public:
    Select_clause_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    ExpressionContext *expression();
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *AS();
    Exposed_nameContext *exposed_name();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_clause_itemContext* select_clause_item();

  class  From_clauseContext : public antlr4::ParserRuleContext {
  public:
    From_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    Table_reference_listContext *table_reference_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_clauseContext* from_clause();

  class  Table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Singles_table_referenceContext *singles_table_reference();
    Single_view_referenceContext *single_view_reference();
    Single_nickname_referenceContext *single_nickname_reference();
    Only_table_referenceContext *only_table_reference();
    Outer_table_referenceContext *outer_table_reference();
    Analyze_table_referenceContext *analyze_table_reference();
    Nested_table_referenceContext *nested_table_reference();
    Data_change_table_referenceContext *data_change_table_reference();
    Table_function_referenceContext *table_function_reference();
    Collection_derived_tableContext *collection_derived_table();
    Xmltable_expressionContext *xmltable_expression();
    External_table_referenceContext *external_table_reference();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_referenceContext* table_reference();

  class  Table_reference_listContext : public antlr4::ParserRuleContext {
  public:
    Table_reference_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_referenceContext *> table_reference();
    Table_referenceContext* table_reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_reference_listContext* table_reference_list();

  class  Singles_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Singles_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    std::vector<Period_specificationContext *> period_specification();
    Period_specificationContext* period_specification(size_t i);
    Correlation_clauseContext *correlation_clause();
    Tablesample_clauseContext *tablesample_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Singles_table_referenceContext* singles_table_reference();

  class  Period_specificationContext : public antlr4::ParserRuleContext {
  public:
    Period_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SYSTEM_TIME();
    antlr4::tree::TerminalNode *BUSINESS_TIME();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *OF();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_specificationContext* period_specification();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  Correlation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Correlation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *AS();
    Column_name_list_parenContext *column_name_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Correlation_clauseContext* correlation_clause();

  class  Tablesample_clauseContext : public antlr4::ParserRuleContext {
  public:
    Tablesample_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Numeric_expressionContext *> numeric_expression();
    Numeric_expressionContext* numeric_expression(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *REPEATABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablesample_clauseContext* tablesample_clause();

  class  Numeric_expressionContext : public antlr4::ParserRuleContext {
  public:
    Numeric_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Numeric_expressionContext* numeric_expression();

  class  Single_view_referenceContext : public antlr4::ParserRuleContext {
  public:
    Single_view_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    View_nameContext *view_name();
    std::vector<Period_specificationContext *> period_specification();
    Period_specificationContext* period_specification(size_t i);
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_view_referenceContext* single_view_reference();

  class  Single_nickname_referenceContext : public antlr4::ParserRuleContext {
  public:
    Single_nickname_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nick_nameContext *nick_name();
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Single_nickname_referenceContext* single_nickname_reference();

  class  Only_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Only_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Only_table_referenceContext* only_table_reference();

  class  Outer_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Outer_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Outer_table_referenceContext* outer_table_reference();

  class  Analyze_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Analyze_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_or_view_nameContext *table_or_view_name();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Implementation_clauseContext *implementation_clause();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Analyze_table_referenceContext* analyze_table_reference();

  class  Implementation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Implementation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTATION();
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implementation_clauseContext* implementation_clause();

  class  Nested_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Nested_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    FullselectContext *fullselect();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();
    Correlation_clauseContext *correlation_clause();
    Continue_handlerContext *continue_handler();
    antlr4::tree::TerminalNode *WITHIN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nested_table_referenceContext* nested_table_reference();

  class  Continue_handlerContext : public antlr4::ParserRuleContext {
  public:
    Continue_handlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *UNTIL();
    std::vector<Specific_condition_valueContext *> specific_condition_value();
    Specific_condition_valueContext* specific_condition_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continue_handlerContext* continue_handler();

  class  Specific_condition_valueContext : public antlr4::ParserRuleContext {
  public:
    Specific_condition_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FEDERATED();
    antlr4::tree::TerminalNode *SQLSTATE();
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *SQLCODE();
    std::vector<Integer_constantContext *> integer_constant();
    Integer_constantContext* integer_constant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specific_condition_valueContext* specific_condition_value();

  class  Data_change_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    Data_change_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Final_newContext *final_new();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Insert_statementContext *insert_statement();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Final_new_oldContext *final_new_old();
    Searched_update_statementContext *searched_update_statement();
    antlr4::tree::TerminalNode *OLD();
    Searched_delete_statementContext *searched_delete_statement();
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_change_table_referenceContext* data_change_table_reference();

  class  Searched_update_statementContext : public antlr4::ParserRuleContext {
  public:
    Searched_update_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Searched_update_statementContext* searched_update_statement();

  class  Searched_delete_statementContext : public antlr4::ParserRuleContext {
  public:
    Searched_delete_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Searched_delete_statementContext* searched_delete_statement();

  class  Final_newContext : public antlr4::ParserRuleContext {
  public:
    Final_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *NEW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Final_newContext* final_new();

  class  Final_new_oldContext : public antlr4::ParserRuleContext {
  public:
    Final_new_oldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *OLD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Final_new_oldContext* final_new_old();

  class  Table_function_referenceContext : public antlr4::ParserRuleContext {
  public:
    Table_function_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    std::vector<antlr4::tree::TerminalNode *> LEFT_RND_BKT();
    antlr4::tree::TerminalNode* LEFT_RND_BKT(size_t i);
    Function_nameContext *function_name();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHT_RND_BKT();
    antlr4::tree::TerminalNode* RIGHT_RND_BKT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Table_udf_cardinality_clauseContext *table_udf_cardinality_clause();
    Correlation_clauseContext *correlation_clause();
    Typed_correlation_clauseContext *typed_correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_function_referenceContext* table_function_reference();

  class  Table_udf_cardinality_clauseContext : public antlr4::ParserRuleContext {
  public:
    Table_udf_cardinality_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARDINALITY();
    Integer_constantContext *integer_constant();
    antlr4::tree::TerminalNode *MULTIPLIER();
    Numeric_constantContext *numeric_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_udf_cardinality_clauseContext* table_udf_cardinality_clause();

  class  Typed_correlation_clauseContext : public antlr4::ParserRuleContext {
  public:
    Typed_correlation_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Correlation_nameContext *correlation_name();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_name_data_typeContext *> column_name_data_type();
    Column_name_data_typeContext* column_name_data_type(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_correlation_clauseContext* typed_correlation_clause();

  class  Column_name_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Column_name_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Data_typeContext *data_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_name_data_typeContext* column_name_data_type();

  class  Collection_derived_tableContext : public antlr4::ParserRuleContext {
  public:
    Collection_derived_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNNEST();
    Table_functionContext *table_function();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ORDINALITY();
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collection_derived_tableContext* collection_derived_table();

  class  Table_functionContext : public antlr4::ParserRuleContext {
  public:
    Table_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_functionContext* table_function();

  class  Xmltable_expressionContext : public antlr4::ParserRuleContext {
  public:
    Xmltable_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xmltable_functionContext *xmltable_function();
    Correlation_clauseContext *correlation_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmltable_expressionContext* xmltable_expression();

  class  Xmltable_functionContext : public antlr4::ParserRuleContext {
  public:
    Xmltable_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmltable_functionContext* xmltable_function();

  class  Joined_tableContext : public antlr4::ParserRuleContext {
  public:
    Joined_tableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Table_referenceContext *> table_reference();
    Table_referenceContext* table_reference(size_t i);
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *ON();
    Join_conditionContext *join_condition();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Column_name_listContext *column_name_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *INNER();
    OuterContext *outer();
    antlr4::tree::TerminalNode *CROSS();
    Joined_tableContext *joined_table();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Joined_tableContext* joined_table();

  class  Join_conditionContext : public antlr4::ParserRuleContext {
  public:
    Join_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_conditionContext* join_condition();

  class  OuterContext : public antlr4::ParserRuleContext {
  public:
    OuterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *OUTER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OuterContext* outer();

  class  External_table_referenceContext : public antlr4::ParserRuleContext {
  public:
    External_table_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERNAL();
    File_nameContext *file_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Column_definition_2Context *> column_definition_2();
    Column_definition_2Context* column_definition_2(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *LIKE();
    Correlation_nameContext *correlation_name();
    Table_or_view_nameContext *table_or_view_name();
    Nick_nameContext *nick_name();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *AS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_table_referenceContext* external_table_reference();

  class  Column_definition_2Context : public antlr4::ParserRuleContext {
  public:
    Column_definition_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    Built_in_typeContext *built_in_type();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULL_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_definition_2Context* column_definition_2();

  class  File_nameContext : public antlr4::ParserRuleContext {
  public:
    File_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TodoContext *todo();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_nameContext* file_name();

  class  Where_clauseContext : public antlr4::ParserRuleContext {
  public:
    Where_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Where_clauseContext* where_clause();

  class  Group_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Group_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    std::vector<Group_by_clause_optsContext *> group_by_clause_opts();
    Group_by_clause_optsContext* group_by_clause_opts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_clauseContext* group_by_clause();

  class  Group_by_clause_optsContext : public antlr4::ParserRuleContext {
  public:
    Group_by_clause_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Grouping_expressionContext *grouping_expression();
    Grouping_setsContext *grouping_sets();
    Super_groupsContext *super_groups();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_by_clause_optsContext* group_by_clause_opts();

  class  Grouping_expressionContext : public antlr4::ParserRuleContext {
  public:
    Grouping_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grouping_expressionContext* grouping_expression();

  class  Grouping_setsContext : public antlr4::ParserRuleContext {
  public:
    Grouping_setsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grouping_setsContext* grouping_sets();

  class  Super_groupsContext : public antlr4::ParserRuleContext {
  public:
    Super_groupsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *CUBE();
    Grant_totalContext *grant_total();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Super_groupsContext* super_groups();

  class  Grant_totalContext : public antlr4::ParserRuleContext {
  public:
    Grant_totalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Grant_totalContext* grant_total();

  class  Having_clauseContext : public antlr4::ParserRuleContext {
  public:
    Having_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Search_conditionContext *search_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Having_clauseContext* having_clause();

  class  Order_by_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Order_by_clause_optsContext *> order_by_clause_opts();
    Order_by_clause_optsContext* order_by_clause_opts(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *SEQUENCE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clauseContext* order_by_clause();

  class  Order_by_clause_optsContext : public antlr4::ParserRuleContext {
  public:
    Order_by_clause_optsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sort_keyContext *sort_key();
    Asc_descContext *asc_desc();
    antlr4::tree::TerminalNode *NULLS();
    First_lastContext *first_last();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *OF();
    Table_designatorContext *table_designator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Order_by_clause_optsContext* order_by_clause_opts();

  class  Table_designatorContext : public antlr4::ParserRuleContext {
  public:
    Table_designatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_designatorContext* table_designator();

  class  Asc_descContext : public antlr4::ParserRuleContext {
  public:
    Asc_descContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Asc_descContext* asc_desc();

  class  First_lastContext : public antlr4::ParserRuleContext {
  public:
    First_lastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  First_lastContext* first_last();

  class  Sort_keyContext : public antlr4::ParserRuleContext {
  public:
    Sort_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_column_nameContext *simple_column_name();
    Simple_integerContext *simple_integer();
    Sork_key_expressionContext *sork_key_expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sort_keyContext* sort_key();

  class  Simple_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Simple_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_column_nameContext* simple_column_name();

  class  Simple_integerContext : public antlr4::ParserRuleContext {
  public:
    Simple_integerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_integerContext* simple_integer();

  class  Sork_key_expressionContext : public antlr4::ParserRuleContext {
  public:
    Sork_key_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sork_key_expressionContext* sork_key_expression();

  class  Offset_clauseContext : public antlr4::ParserRuleContext {
  public:
    Offset_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OFFSET();
    Offset_row_countContext *offset_row_count();
    Row_rowsContext *row_rows();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Offset_clauseContext* offset_clause();

  class  Offset_row_countContext : public antlr4::ParserRuleContext {
  public:
    Offset_row_countContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Offset_row_countContext* offset_row_count();

  class  Fetch_clauseContext : public antlr4::ParserRuleContext {
  public:
    Fetch_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *NEXT();
    Row_rowsContext *row_rows();
    antlr4::tree::TerminalNode *ONLY();
    Fetch_row_countContext *fetch_row_count();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_clauseContext* fetch_clause();

  class  Fetch_row_countContext : public antlr4::ParserRuleContext {
  public:
    Fetch_row_countContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fetch_row_countContext* fetch_row_count();

  class  Row_rowsContext : public antlr4::ParserRuleContext {
  public:
    Row_rowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *ROWS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_rowsContext* row_rows();

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

  class  Values_clauseContext : public antlr4::ParserRuleContext {
  public:
    Values_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    std::vector<Values_rowContext *> values_row();
    Values_rowContext* values_row(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_clauseContext* values_clause();

  class  Values_rowContext : public antlr4::ParserRuleContext {
  public:
    Values_rowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULL_();
    Row_expressionContext *row_expression();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<Expr_nullContext *> expr_null();
    Expr_nullContext* expr_null(size_t i);
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Values_rowContext* values_row();

  class  Root_view_definitionContext : public antlr4::ParserRuleContext {
  public:
    Root_view_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODE();
    antlr4::tree::TerminalNode *DB2SQL();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Oid_columnContext *oid_column();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *COMMA();
    With_optionsContext *with_options();


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
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    With_optionsContext *with_options();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *EXTEND();


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

  class  With_optionsContext : public antlr4::ParserRuleContext {
  public:
    With_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<With_option_defContext *> with_option_def();
    With_option_defContext* with_option_def(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_optionsContext* with_options();

  class  With_option_defContext : public antlr4::ParserRuleContext {
  public:
    With_option_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_nameContext *column_name();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    std::vector<With_option_scope_defContext *> with_option_scope_def();
    With_option_scope_defContext* with_option_scope_def(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_option_defContext* with_option_def();

  class  With_option_scope_defContext : public antlr4::ParserRuleContext {
  public:
    With_option_scope_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCOPE();
    Typed_table_nameContext *typed_table_name();
    Typed_view_nameContext *typed_view_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_option_scope_defContext* with_option_scope_def();

  class  Under_clauseContext : public antlr4::ParserRuleContext {
  public:
    Under_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDER();
    Superview_nameContext *superview_name();
    antlr4::tree::TerminalNode *INHERIT();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *PRIVILEGES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Under_clauseContext* under_clause();

  class  Create_work_action_set_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_work_action_set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    antlr4::tree::TerminalNode *ACTION();
    std::vector<antlr4::tree::TerminalNode *> SET();
    antlr4::tree::TerminalNode* SET(size_t i);
    Work_action_set_nameContext *work_action_set_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *USING();
    std::vector<antlr4::tree::TerminalNode *> CLASS_();
    antlr4::tree::TerminalNode* CLASS_(size_t i);
    Work_class_set_nameContext *work_class_set_name();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *SERVICE();
    Service_superclass_nameContext *service_superclass_name();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    Work_action_definition_list_parenContext *work_action_definition_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_work_action_set_statementContext* create_work_action_set_statement();

  class  Work_action_definition_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Work_action_definition_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Work_action_definition_listContext *work_action_definition_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_definition_list_parenContext* work_action_definition_list_paren();

  class  Work_action_definition_listContext : public antlr4::ParserRuleContext {
  public:
    Work_action_definition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Work_action_definitionContext *> work_action_definition();
    Work_action_definitionContext* work_action_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_definition_listContext* work_action_definition_list();

  class  Work_action_definitionContext : public antlr4::ParserRuleContext {
  public:
    Work_action_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WORK();
    antlr4::tree::TerminalNode* WORK(size_t i);
    antlr4::tree::TerminalNode *ACTION();
    Work_action_nameContext *work_action_name();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *CLASS_();
    Work_class_nameContext *work_class_name();
    Action_types_clauseContext *action_types_clause();
    std::vector<Histogram_templace_clauseContext *> histogram_templace_clause();
    Histogram_templace_clauseContext* histogram_templace_clause(size_t i);
    Enable_disableContext *enable_disable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_definitionContext* work_action_definition();

  class  Action_types_clauseContext : public antlr4::ParserRuleContext {
  public:
    Action_types_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *TO();
    Service_subclass_nameContext *service_subclass_name();
    With_withoutContext *with_without();
    antlr4::tree::TerminalNode *NESTED();
    antlr4::tree::TerminalNode *WHEN();
    Threshold_types_clauseContext *threshold_types_clause();
    Threshold_exceeded_actionsContext *threshold_exceeded_actions();
    antlr4::tree::TerminalNode *PREVENT();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *DATA();
    Collect_activity_data_clauseContext *collect_activity_data_clause();
    antlr4::tree::TerminalNode *AGGREGATE();
    antlr4::tree::TerminalNode *BASE();
    antlr4::tree::TerminalNode *EXTENDED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_types_clauseContext* action_types_clause();

  class  Threshold_types_clauseContext : public antlr4::ParserRuleContext {
  public:
    Threshold_types_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONCURRENTDBCOORDACTIVITIES();
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<Integer_valueContext *> integer_value();
    Integer_valueContext* integer_value(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *QUEUEDACTIVITIES();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *SQLTEMPSPACE();
    KmgContext *kmg();
    antlr4::tree::TerminalNode *SQLROWSRETURNED();
    antlr4::tree::TerminalNode *ESTIMATEDSQLCOST();
    Bigint_valueContext *bigint_value();
    antlr4::tree::TerminalNode *CPUTIME();
    Hours_minutesContext *hours_minutes();
    antlr4::tree::TerminalNode *CHECKING();
    antlr4::tree::TerminalNode *EVERY();
    Second_secondsContext *second_seconds();
    antlr4::tree::TerminalNode *SQLROWSREAD();
    antlr4::tree::TerminalNode *SORTSHRHEAPUTIL();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *BLOCKING();
    antlr4::tree::TerminalNode *ADMISSION();
    antlr4::tree::TerminalNode *FOR();
    Dt_units_with_secondsContext *dt_units_with_seconds();
    antlr4::tree::TerminalNode *ACTIVITYTOTALTIME();
    antlr4::tree::TerminalNode *ACTIVITYTOTALRUNTIME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_types_clauseContext* threshold_types_clause();

  class  Second_secondsContext : public antlr4::ParserRuleContext {
  public:
    Second_secondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Second_secondsContext* second_seconds();

  class  Hours_minutesContext : public antlr4::ParserRuleContext {
  public:
    Hours_minutesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *HOURS();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MINUTES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hours_minutesContext* hours_minutes();

  class  Threshold_exceeded_actionsContext : public antlr4::ParserRuleContext {
  public:
    Threshold_exceeded_actionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *EXECUTION();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *COLLECT();
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *NONE();
    Collect_activity_data_clauseContext *collect_activity_data_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_exceeded_actionsContext* threshold_exceeded_actions();

  class  Collect_activity_data_clauseContext : public antlr4::ParserRuleContext {
  public:
    Collect_activity_data_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *MEMBERS();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collect_activity_data_clauseContext* collect_activity_data_clause();

  class  With_withoutContext : public antlr4::ParserRuleContext {
  public:
    With_withoutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHOUT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  With_withoutContext* with_without();

  class  Histogram_templace_clauseContext : public antlr4::ParserRuleContext {
  public:
    Histogram_templace_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTIVITY();
    antlr4::tree::TerminalNode *HISTOGRAM();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *LIFETIME();
    antlr4::tree::TerminalNode *QUEUETIME();
    antlr4::tree::TerminalNode *EXECUTETIME();
    antlr4::tree::TerminalNode *ESTIMATEDCOST();
    antlr4::tree::TerminalNode *INTERARRIVALTIME();
    antlr4::tree::TerminalNode *SYSDEFAULTHISTOGRAM();
    Template_nameContext *template_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Histogram_templace_clauseContext* histogram_templace_clause();

  class  Create_work_class_set_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_work_class_set_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS_();
    antlr4::tree::TerminalNode *SET();
    Work_class_set_nameContext *work_class_set_name();
    Work_class_definition_list_parenContext *work_class_definition_list_paren();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_work_class_set_statementContext* create_work_class_set_statement();

  class  Work_class_definition_list_parenContext : public antlr4::ParserRuleContext {
  public:
    Work_class_definition_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Work_class_definition_listContext *work_class_definition_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_definition_list_parenContext* work_class_definition_list_paren();

  class  Work_class_definition_listContext : public antlr4::ParserRuleContext {
  public:
    Work_class_definition_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Work_class_definitionContext *> work_class_definition();
    Work_class_definitionContext* work_class_definition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_definition_listContext* work_class_definition_list();

  class  Work_class_definitionContext : public antlr4::ParserRuleContext {
  public:
    Work_class_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Work_class_nameContext *work_class_name();
    Work_attributesContext *work_attributes();
    Position_clauseContext *position_clause();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *CLASS_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_definitionContext* work_class_definition();

  class  Work_attributesContext : public antlr4::ParserRuleContext {
  public:
    Work_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *DDL();
    antlr4::tree::TerminalNode *LOAD();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *DML();
    Schema_clauseContext *schema_clause();
    For_from_to_clauseContext *for_from_to_clause();
    Data_tag_clauseContext *data_tag_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_attributesContext* work_attributes();

  class  Position_clauseContext : public antlr4::ParserRuleContext {
  public:
    Position_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LAST();
    Work_class_nameContext *work_class_name();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AT();
    Position_Context *position_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Position_clauseContext* position_clause();

  class  Position_Context : public antlr4::ParserRuleContext {
  public:
    Position_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Positive_integerContext *positive_integer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Position_Context* position_();

  class  For_from_to_clauseContext : public antlr4::ParserRuleContext {
  public:
    For_from_to_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    From_valueContext *from_value();
    antlr4::tree::TerminalNode *TIMERONCOST();
    antlr4::tree::TerminalNode *CARDINALITY();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *UNBOUNDED();
    To_valueContext *to_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_from_to_clauseContext* for_from_to_clause();

  class  From_valueContext : public antlr4::ParserRuleContext {
  public:
    From_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_valueContext* from_value();

  class  To_valueContext : public antlr4::ParserRuleContext {
  public:
    To_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  To_valueContext* to_value();

  class  Data_tag_clauseContext : public antlr4::ParserRuleContext {
  public:
    Data_tag_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *TAG();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *CONTAINS();
    Integer_constantContext *integer_constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_tag_clauseContext* data_tag_clause();

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

  class  Create_workload_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_workload_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WORKLOAD();
    Workload_nameContext *workload_name();
    Workload_attributesContext *workload_attributes();
    Histogram_templace_clauseContext *histogram_templace_clause();
    std::vector<Connection_attributesContext *> connection_attributes();
    Connection_attributesContext* connection_attributes(size_t i);
    Position_clause_2Context *position_clause_2();
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
    Collect_lock_wait_optionsContext *collect_lock_wait_options();
    antlr4::tree::TerminalNode *CRITICAL();
    antlr4::tree::TerminalNode *HIGH();
    antlr4::tree::TerminalNode *MEDIUM();
    antlr4::tree::TerminalNode *LOW();
    std::vector<antlr4::tree::TerminalNode *> NONE();
    antlr4::tree::TerminalNode* NONE(size_t i);
    Collect_on_clauseContext *collect_on_clause();
    Collect_details_clauseContext *collect_details_clause();
    std::vector<antlr4::tree::TerminalNode *> BASE();
    antlr4::tree::TerminalNode* BASE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WITH();
    antlr4::tree::TerminalNode* WITH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> HISTORY();
    antlr4::tree::TerminalNode* HISTORY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXTENDED();
    antlr4::tree::TerminalNode* EXTENDED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUES();
    antlr4::tree::TerminalNode* VALUES(size_t i);
    antlr4::tree::TerminalNode *INCLUDE();
    Pkg_exec_seqContext *pkg_exec_seq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_workload_statementContext* create_workload_statement();

  class  Pkg_exec_seqContext : public antlr4::ParserRuleContext {
  public:
    Pkg_exec_seqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    std::vector<antlr4::tree::TerminalNode *> LIST();
    antlr4::tree::TerminalNode* LIST(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *EXECUTABLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pkg_exec_seqContext* pkg_exec_seq();

  class  Position_clause_2Context : public antlr4::ParserRuleContext {
  public:
    Position_clause_2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *LAST();
    Workload_nameContext *workload_name();
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *AT();
    Position_Context *position_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Position_clause_2Context* position_clause_2();

  class  Connection_attributesContext : public antlr4::ParserRuleContext {
  public:
    Connection_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADDRESS();
    String_list_parenContext *string_list_paren();
    antlr4::tree::TerminalNode *APPLNAME();
    antlr4::tree::TerminalNode *SYSTEM_USER();
    antlr4::tree::TerminalNode *SESSION_USER();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *ROLE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *CLIENT_USERID();
    antlr4::tree::TerminalNode *CLIENT_APPLNAME();
    antlr4::tree::TerminalNode *CLIENT_WRKSTNNAME();
    antlr4::tree::TerminalNode *CLIENT_ACCTNG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Connection_attributesContext* connection_attributes();

  class  String_listContext : public antlr4::ParserRuleContext {
  public:
    String_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_listContext* string_list();

  class  String_list_parenContext : public antlr4::ParserRuleContext {
  public:
    String_list_parenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    std::vector<StringContext *> string();
    StringContext* string(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_list_parenContext* string_list_paren();

  class  Workload_attributesContext : public antlr4::ParserRuleContext {
  public:
    Workload_attributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Enable_disableContext *enable_disable();
    Allow_disallowContext *allow_disallow();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *ACCESS();
    antlr4::tree::TerminalNode *MAXIMUM();
    antlr4::tree::TerminalNode *DEGREE_();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *CLASS_();
    antlr4::tree::TerminalNode *DEFAULT();
    DegreeContext *degree();
    antlr4::tree::TerminalNode *SYSDEFAULTUSERCLASS();
    Service_class_nameContext *service_class_name();
    antlr4::tree::TerminalNode *UNDER();
    Service_superclass_nameContext *service_superclass_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Workload_attributesContext* workload_attributes();

  class  DegreeContext : public antlr4::ParserRuleContext {
  public:
    DegreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECIMAL_LITERAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DegreeContext* degree();

  class  Allow_disallowContext : public antlr4::ParserRuleContext {
  public:
    Allow_disallowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALLOW();
    antlr4::tree::TerminalNode *DISALLOW();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Allow_disallowContext* allow_disallow();

  class  Collect_on_clauseContext : public antlr4::ParserRuleContext {
  public:
    Collect_on_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *COORDINATOR();
    antlr4::tree::TerminalNode *MEMBER();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *MEMBERS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collect_on_clauseContext* collect_on_clause();

  class  Collect_details_clauseContext : public antlr4::ParserRuleContext {
  public:
    Collect_details_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *DETAILS();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *SECTION();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *ACTUALS();
    antlr4::tree::TerminalNode *BASE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collect_details_clauseContext* collect_details_clause();

  class  Collect_lock_wait_optionsContext : public antlr4::ParserRuleContext {
  public:
    Collect_lock_wait_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LOCKS();
    antlr4::tree::TerminalNode *WAITING();
    antlr4::tree::TerminalNode *MORE_();
    antlr4::tree::TerminalNode *THAN();
    Wait_timeContext *wait_time();
    antlr4::tree::TerminalNode *L_ONE();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *MICROSECONDS();
    antlr4::tree::TerminalNode *WITHOUT();
    antlr4::tree::TerminalNode *HISTORY();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *VALUES();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Collect_lock_wait_optionsContext* collect_lock_wait_options();

  class  Wait_timeContext : public antlr4::ParserRuleContext {
  public:
    Wait_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_valueContext *integer_value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wait_timeContext* wait_time();

  class  Create_wrapper_statementContext : public antlr4::ParserRuleContext {
  public:
    Create_wrapper_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *WRAPPER();
    Wrapper_nameContext *wrapper_name();
    antlr4::tree::TerminalNode *LIBRARY();
    Library_nameContext *library_name();
    antlr4::tree::TerminalNode *OPTIONS();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Wrapper_option_listContext *wrapper_option_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Create_wrapper_statementContext* create_wrapper_statement();

  class  Wrapper_option_listContext : public antlr4::ParserRuleContext {
  public:
    Wrapper_option_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Wrapper_optionContext *> wrapper_option();
    Wrapper_optionContext* wrapper_option(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wrapper_option_listContext* wrapper_option_list();

  class  Wrapper_optionContext : public antlr4::ParserRuleContext {
  public:
    Wrapper_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Wrapper_option_nameContext *wrapper_option_name();
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wrapper_optionContext* wrapper_option();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_invocationContext *function_invocation();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Constant_Context *constant_();
    Column_nameContext *column_name();
    VariableContext *variable();
    Special_registerContext *special_register();
    Scalar_fullselectContext *scalar_fullselect();
    Case_expressionContext *case_expression();
    Cast_specificationContext *cast_specification();
    Field_referenceContext *field_reference();
    Xmlcast_specificationContext *xmlcast_specification();
    Array_element_specificationContext *array_element_specification();
    Array_constructorContext *array_constructor();
    Method_invocationContext *method_invocation();
    Olap_specificationContext *olap_specification();
    Row_change_expressionContext *row_change_expression();
    Sequence_referenceContext *sequence_reference();
    Subtype_treatmentContext *subtype_treatment();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *STAR_STAR();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *PIPE_PIPE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *ARROW();
    Id_Context *id_();
    Expression_list_in_parenthesesContext *expression_list_in_parentheses();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *YEARS();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *MONTHS();
    Day_to_secondsContext *day_to_seconds();
    antlr4::tree::TerminalNode *MICROSECOND();
    antlr4::tree::TerminalNode *MICROSECONDS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Function_invocationContext : public antlr4::ParserRuleContext {
  public:
    Function_invocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_nameContext *function_name();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Arg_listContext *arg_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    All_distinctContext *all_distinct();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_invocationContext* function_invocation();

  class  All_distinctContext : public antlr4::ParserRuleContext {
  public:
    All_distinctContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  All_distinctContext* all_distinct();

  class  Scalar_fullselectContext : public antlr4::ParserRuleContext {
  public:
    Scalar_fullselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fullselect_in_parenthesesContext *fullselect_in_parentheses();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_fullselectContext* scalar_fullselect();

  class  Cast_specificationContext : public antlr4::ParserRuleContext {
  public:
    Cast_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    Cursor_cast_specificationContext *cursor_cast_specification();
    Row_cast_specificationContext *row_cast_specification();
    Interval_cast_specificationContext *interval_cast_specification();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULL_();
    Parameter_markerContext *parameter_marker();
    antlr4::tree::TerminalNode *SCOPE();
    Typed_table_nameContext *typed_table_name();
    Typed_view_nameContext *typed_view_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cast_specificationContext* cast_specification();

  class  Cursor_cast_specificationContext : public antlr4::ParserRuleContext {
  public:
    Cursor_cast_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_markerContext *parameter_marker();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *CURSOR();
    Cursor_type_nameContext *cursor_type_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_cast_specificationContext* cursor_cast_specification();

  class  Row_cast_specificationContext : public antlr4::ParserRuleContext {
  public:
    Row_cast_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    Row_type_nameContext *row_type_name();
    Row_expressionContext *row_expression();
    antlr4::tree::TerminalNode *NULL_();
    Parameter_markerContext *parameter_marker();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_cast_specificationContext* row_cast_specification();

  class  Interval_cast_specificationContext : public antlr4::ParserRuleContext {
  public:
    Interval_cast_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_constantContext *string_constant();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *INTERVAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interval_cast_specificationContext* interval_cast_specification();

  class  Xmlcast_specificationContext : public antlr4::ParserRuleContext {
  public:
    Xmlcast_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XMLCAST();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULL_();
    Parameter_markerContext *parameter_marker();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xmlcast_specificationContext* xmlcast_specification();

  class  Array_element_specificationContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::Id_Context *av = nullptr;
    Array_element_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SQR_BKT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_SQR_BKT();
    Id_Context *id_();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Parameter_markerContext *parameter_marker();
    antlr4::tree::TerminalNode *AS();
    Array_type_nameContext *array_type_name();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_element_specificationContext* array_element_specification();

  class  Array_constructorContext : public antlr4::ParserRuleContext {
  public:
    Array_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LEFT_SQR_BKT();
    antlr4::tree::TerminalNode *RIGHT_SQR_BKT();
    FullselectContext *fullselect();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *WITH();
    Common_table_expression_listContext *common_table_expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_constructorContext* array_constructor();

  class  Method_invocationContext : public antlr4::ParserRuleContext {
  public:
    Method_invocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Id_Context *> id_();
    Id_Context* id_(size_t i);
    antlr4::tree::TerminalNode *DOT_DOT();
    Expression_list_in_parenthesesContext *expression_list_in_parentheses();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_invocationContext* method_invocation();

  class  Olap_specificationContext : public antlr4::ParserRuleContext {
  public:
    Olap_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ordered_olap_specificationContext *ordered_olap_specification();
    Numbering_specificationContext *numbering_specification();
    Aggregation_specificationContext *aggregation_specification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Olap_specificationContext* olap_specification();

  class  Ordered_olap_specificationContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::Id_Context *f = nullptr;
    Ordered_olap_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Window_order_clauseContext *window_order_clause();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Id_Context *id_();
    Window_partition_clauseContext *window_partition_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_olap_specificationContext* ordered_olap_specification();

  class  Window_partition_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_partition_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    Expression_listContext *expression_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_partition_clauseContext* window_partition_clause();

  class  Window_order_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_order_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    Order_by_clause_optsContext *order_by_clause_opts();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_order_clauseContext* window_order_clause();

  class  Numbering_specificationContext : public antlr4::ParserRuleContext {
  public:
    Numbering_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW_NUMBER();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *OVER();
    Window_partition_clauseContext *window_partition_clause();
    Window_order_clauseContext *window_order_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Numbering_specificationContext* numbering_specification();

  class  Aggregation_specificationContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::Id_Context *af = nullptr;
    Aggregation_specificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Olap_aggregate_functionContext *olap_aggregate_function();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *BETWEEN();
    std::vector<antlr4::tree::TerminalNode *> UNBOUNDED();
    antlr4::tree::TerminalNode* UNBOUNDED(size_t i);
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *FOLLOWING();
    Window_order_clauseContext *window_order_clause();
    Id_Context *id_();
    Window_partition_clauseContext *window_partition_clause();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ROW();
    Window_aggregation_group_clauseContext *window_aggregation_group_clause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Aggregation_specificationContext* aggregation_specification();

  class  Olap_aggregate_functionContext : public antlr4::ParserRuleContext {
  public:
    Olap_aggregate_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    First_value_functionContext *first_value_function();
    Last_value_functionContext *last_value_function();
    Nth_value_functionContext *nth_value_function();
    Ratio_to_report_functionContext *ratio_to_report_function();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Olap_aggregate_functionContext* olap_aggregate_function();

  class  First_value_functionContext : public antlr4::ParserRuleContext {
  public:
    First_value_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FIRST_VALUE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *COMMA();
    Ignore_respect_nullsContext *ignore_respect_nulls();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  First_value_functionContext* first_value_function();

  class  Last_value_functionContext : public antlr4::ParserRuleContext {
  public:
    Last_value_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LAST_VALUE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    antlr4::tree::TerminalNode *COMMA();
    Ignore_respect_nullsContext *ignore_respect_nulls();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Last_value_functionContext* last_value_function();

  class  Nth_value_functionContext : public antlr4::ParserRuleContext {
  public:
    Db2Parser::ExpressionContext *nth_row = nullptr;
    Nth_value_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NTH_VALUE();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();
    Ignore_respect_nullsContext *ignore_respect_nulls();
    From_first_lastContext *from_first_last();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nth_value_functionContext* nth_value_function();

  class  Ratio_to_report_functionContext : public antlr4::ParserRuleContext {
  public:
    Ratio_to_report_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RATION_TO_REPORT();
    Expression_list_in_parenthesesContext *expression_list_in_parentheses();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ratio_to_report_functionContext* ratio_to_report_function();

  class  Ignore_respect_nullsContext : public antlr4::ParserRuleContext {
  public:
    Ignore_respect_nullsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *RESPECT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ignore_respect_nullsContext* ignore_respect_nulls();

  class  From_first_lastContext : public antlr4::ParserRuleContext {
  public:
    From_first_lastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    First_lastContext *first_last();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  From_first_lastContext* from_first_last();

  class  Window_aggregation_group_clauseContext : public antlr4::ParserRuleContext {
  public:
    Window_aggregation_group_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *RANGE();
    Group_startContext *group_start();
    Group_betweenContext *group_between();
    Group_endContext *group_end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Window_aggregation_group_clauseContext* window_aggregation_group_clause();

  class  Group_startContext : public antlr4::ParserRuleContext {
  public:
    Group_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    Constant_Context *constant_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_startContext* group_start();

  class  Group_betweenContext : public antlr4::ParserRuleContext {
  public:
    Group_betweenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BETWEEN();
    Group_bound1Context *group_bound1();
    antlr4::tree::TerminalNode *AND();
    Group_bound2Context *group_bound2();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_betweenContext* group_between();

  class  Group_bound1Context : public antlr4::ParserRuleContext {
  public:
    Group_bound1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    Constant_Context *constant_();
    antlr4::tree::TerminalNode *FOLLOWING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_bound1Context* group_bound1();

  class  Group_bound2Context : public antlr4::ParserRuleContext {
  public:
    Group_bound2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *FOLLOWING();
    Constant_Context *constant_();
    antlr4::tree::TerminalNode *PRECEDING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_bound2Context* group_bound2();

  class  Group_endContext : public antlr4::ParserRuleContext {
  public:
    Group_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *FOLLOWING();
    Constant_Context *constant_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_endContext* group_end();

  class  Row_change_expressionContext : public antlr4::ParserRuleContext {
  public:
    Row_change_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *CHANGE();
    antlr4::tree::TerminalNode *FOR();
    Table_designatorContext *table_designator();
    antlr4::tree::TerminalNode *TOKEN();
    antlr4::tree::TerminalNode *TIMESTAMP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_change_expressionContext* row_change_expression();

  class  Sequence_referenceContext : public antlr4::ParserRuleContext {
  public:
    Sequence_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *FOR();
    Sequence_nameContext *sequence_name();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *PREVIOUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_referenceContext* sequence_reference();

  class  Subtype_treatmentContext : public antlr4::ParserRuleContext {
  public:
    Subtype_treatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TREAT();
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    antlr4::tree::TerminalNode *AS();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subtype_treatmentContext* subtype_treatment();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_listContext* expression_list();

  class  Expression_list_in_parenthesesContext : public antlr4::ParserRuleContext {
  public:
    Expression_list_in_parenthesesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_RND_BKT();
    Expression_listContext *expression_list();
    antlr4::tree::TerminalNode *RIGHT_RND_BKT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_list_in_parenthesesContext* expression_list_in_parentheses();

  class  Id_Context : public antlr4::ParserRuleContext {
  public:
    Id_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_Context* id_();

  class  Exposed_nameContext : public antlr4::ParserRuleContext {
  public:
    Exposed_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    View_nameContext *view_name();
    Nick_nameContext *nick_name();
    Correlation_nameContext *correlation_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exposed_nameContext* exposed_name();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  Host_labelContext : public antlr4::ParserRuleContext {
  public:
    Host_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_labelContext* host_label();

  class  Library_nameContext : public antlr4::ParserRuleContext {
  public:
    Library_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_nameContext* library_name();

  class  Array_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Array_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_type_nameContext* array_type_name();

  class  Attribute_nameContext : public antlr4::ParserRuleContext {
  public:
    Attribute_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_nameContext* attribute_name();

  class  Row_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Row_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_type_nameContext* row_type_name();

  class  Authorization_nameContext : public antlr4::ParserRuleContext {
  public:
    Authorization_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Authorization_nameContext* authorization_name();

  class  Boolean_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Boolean_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_variable_nameContext* boolean_variable_name();

  class  Array_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Array_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_variable_nameContext* array_variable_name();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Column_nameContext* column_name();

  class  Constraint_nameContext : public antlr4::ParserRuleContext {
  public:
    Constraint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_nameContext* constraint_name();

  class  Descriptor_nameContext : public antlr4::ParserRuleContext {
  public:
    Descriptor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Descriptor_nameContext* descriptor_name();

  class  Distinct_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Distinct_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Distinct_type_nameContext* distinct_type_name();

  class  Cursor_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_nameContext* cursor_name();

  class  Cursor_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_type_nameContext* cursor_type_name();

  class  Condition_nameContext : public antlr4::ParserRuleContext {
  public:
    Condition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_nameContext* condition_name();

  class  Data_source_nameContext : public antlr4::ParserRuleContext {
  public:
    Data_source_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_source_nameContext* data_source_name();

  class  Expression_nameContext : public antlr4::ParserRuleContext {
  public:
    Expression_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_nameContext* expression_name();

  class  Group_nameContext : public antlr4::ParserRuleContext {
  public:
    Group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Group_nameContext* group_name();

  class  Policy_nameContext : public antlr4::ParserRuleContext {
  public:
    Policy_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Policy_nameContext* policy_name();

  class  Bufferpool_nameContext : public antlr4::ParserRuleContext {
  public:
    Bufferpool_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bufferpool_nameContext* bufferpool_name();

  class  Db_partition_nameContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_nameContext* db_partition_name();

  class  Database_nameContext : public antlr4::ParserRuleContext {
  public:
    Database_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Database_nameContext* database_name();

  class  Event_monitor_nameContext : public antlr4::ParserRuleContext {
  public:
    Event_monitor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_monitor_nameContext* event_monitor_name();

  class  Field_nameContext : public antlr4::ParserRuleContext {
  public:
    Field_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Field_nameContext* field_name();

  class  For_loop_nameContext : public antlr4::ParserRuleContext {
  public:
    For_loop_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_loop_nameContext* for_loop_name();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_nameContext* function_name();

  class  Function_mapping_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_mapping_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_mapping_nameContext* function_mapping_name();

  class  Global_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Global_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_variable_nameContext* global_variable_name();

  class  Hierarchy_nameContext : public antlr4::ParserRuleContext {
  public:
    Hierarchy_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchy_nameContext* hierarchy_name();

  class  Host_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Host_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Host_variable_nameContext* host_variable_name();

  class  Parameter_markerContext : public antlr4::ParserRuleContext {
  public:
    Parameter_markerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_markerContext* parameter_marker();

  class  Template_nameContext : public antlr4::ParserRuleContext {
  public:
    Template_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Template_nameContext* template_name();

  class  Index_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_nameContext* index_name();

  class  Index_extension_nameContext : public antlr4::ParserRuleContext {
  public:
    Index_extension_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_extension_nameContext* index_extension_name();

  class  Input_descriptor_nameContext : public antlr4::ParserRuleContext {
  public:
    Input_descriptor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_descriptor_nameContext* input_descriptor_name();

  class  Mask_nameContext : public antlr4::ParserRuleContext {
  public:
    Mask_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mask_nameContext* mask_name();

  class  Method_nameContext : public antlr4::ParserRuleContext {
  public:
    Method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_nameContext* method_name();

  class  Model_nameContext : public antlr4::ParserRuleContext {
  public:
    Model_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Model_nameContext* model_name();

  class  Module_nameContext : public antlr4::ParserRuleContext {
  public:
    Module_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_nameContext* module_name();

  class  New_ownerContext : public antlr4::ParserRuleContext {
  public:
    New_ownerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  New_ownerContext* new_owner();

  class  Nick_nameContext : public antlr4::ParserRuleContext {
  public:
    Nick_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nick_nameContext* nick_name();

  class  Object_nameContext : public antlr4::ParserRuleContext {
  public:
    Object_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_nameContext* object_name();

  class  Oid_column_nameContext : public antlr4::ParserRuleContext {
  public:
    Oid_column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Oid_column_nameContext* oid_column_name();

  class  Optimization_profile_nameContext : public antlr4::ParserRuleContext {
  public:
    Optimization_profile_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optimization_profile_nameContext* optimization_profile_name();

  class  Package_nameContext : public antlr4::ParserRuleContext {
  public:
    Package_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_nameContext* package_name();

  class  Partition_nameContext : public antlr4::ParserRuleContext {
  public:
    Partition_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Partition_nameContext* partition_name();

  class  Path_nameContext : public antlr4::ParserRuleContext {
  public:
    Path_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_nameContext* path_name();

  class  Permission_nameContext : public antlr4::ParserRuleContext {
  public:
    Permission_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Permission_nameContext* permission_name();

  class  Pipe_nameContext : public antlr4::ParserRuleContext {
  public:
    Pipe_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pipe_nameContext* pipe_name();

  class  Procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    Procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedure_nameContext* procedure_name();

  class  Result_descriptor_nameContext : public antlr4::ParserRuleContext {
  public:
    Result_descriptor_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Result_descriptor_nameContext* result_descriptor_name();

  class  Role_nameContext : public antlr4::ParserRuleContext {
  public:
    Role_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Role_nameContext* role_name();

  class  Root_table_nameContext : public antlr4::ParserRuleContext {
  public:
    Root_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Root_table_nameContext* root_table_name();

  class  Root_view_nameContext : public antlr4::ParserRuleContext {
  public:
    Root_view_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Root_view_nameContext* root_view_name();

  class  Row_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Row_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Row_variable_nameContext* row_variable_name();

  class  Source_schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_schema_nameContext* source_schema_name();

  class  Source_package_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_package_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_package_nameContext* source_package_name();

  class  Source_procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_procedure_nameContext* source_procedure_name();

  class  Sql_parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Sql_parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_parameter_nameContext* sql_parameter_name();

  class  Sql_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Sql_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sql_variable_nameContext* sql_variable_name();

  class  Transition_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Transition_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Transition_variable_nameContext* transition_variable_name();

  class  Savepoint_nameContext : public antlr4::ParserRuleContext {
  public:
    Savepoint_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Savepoint_nameContext* savepoint_name();

  class  Specific_nameContext : public antlr4::ParserRuleContext {
  public:
    Specific_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specific_nameContext* specific_name();

  class  SchemaContext : public antlr4::ParserRuleContext {
  public:
    SchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Schema_nameContext *schema_name();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SchemaContext* schema();

  class  Schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Schema_nameContext* schema_name();

  class  Search_method_nameContext : public antlr4::ParserRuleContext {
  public:
    Search_method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_method_nameContext* search_method_name();

  class  Server_nameContext : public antlr4::ParserRuleContext {
  public:
    Server_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_nameContext* server_name();

  class  Server_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Server_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Server_option_nameContext* server_option_name();

  class  Session_authorization_nameContext : public antlr4::ParserRuleContext {
  public:
    Session_authorization_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Session_authorization_nameContext* session_authorization_name();

  class  Component_nameContext : public antlr4::ParserRuleContext {
  public:
    Component_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Component_nameContext* component_name();

  class  Sec_label_comp_nameContext : public antlr4::ParserRuleContext {
  public:
    Sec_label_comp_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sec_label_comp_nameContext* sec_label_comp_name();

  class  Security_policy_nameContext : public antlr4::ParserRuleContext {
  public:
    Security_policy_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Security_policy_nameContext* security_policy_name();

  class  Security_label_nameContext : public antlr4::ParserRuleContext {
  public:
    Security_label_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Security_label_nameContext* security_label_name();

  class  Sequence_nameContext : public antlr4::ParserRuleContext {
  public:
    Sequence_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_nameContext* sequence_name();

  class  Service_class_nameContext : public antlr4::ParserRuleContext {
  public:
    Service_class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_class_nameContext* service_class_name();

  class  Service_superclass_nameContext : public antlr4::ParserRuleContext {
  public:
    Service_superclass_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_superclass_nameContext* service_superclass_name();

  class  Storagegroup_nameContext : public antlr4::ParserRuleContext {
  public:
    Storagegroup_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Storagegroup_nameContext* storagegroup_name();

  class  Supertype_nameContext : public antlr4::ParserRuleContext {
  public:
    Supertype_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Supertype_nameContext* supertype_name();

  class  Superview_nameContext : public antlr4::ParserRuleContext {
  public:
    Superview_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Superview_nameContext* superview_name();

  class  Service_subclass_nameContext : public antlr4::ParserRuleContext {
  public:
    Service_subclass_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Service_subclass_nameContext* service_subclass_name();

  class  Statement_nameContext : public antlr4::ParserRuleContext {
  public:
    Statement_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_nameContext* statement_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Table_nameContext* table_name();

  class  Tablespace_nameContext : public antlr4::ParserRuleContext {
  public:
    Tablespace_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tablespace_nameContext* tablespace_name();

  class  Target_identifierContext : public antlr4::ParserRuleContext {
  public:
    Target_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_identifierContext* target_identifier();

  class  Threshold_nameContext : public antlr4::ParserRuleContext {
  public:
    Threshold_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Threshold_nameContext* threshold_name();

  class  Trigger_nameContext : public antlr4::ParserRuleContext {
  public:
    Trigger_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_nameContext* trigger_name();

  class  Context_nameContext : public antlr4::ParserRuleContext {
  public:
    Context_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Context_nameContext* context_name();

  class  Usage_list_nameContext : public antlr4::ParserRuleContext {
  public:
    Usage_list_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Usage_list_nameContext* usage_list_name();

  class  Type_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_nameContext* type_name();

  class  Type_mapping_nameContext : public antlr4::ParserRuleContext {
  public:
    Type_mapping_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_mapping_nameContext* type_mapping_name();

  class  Typed_table_nameContext : public antlr4::ParserRuleContext {
  public:
    Typed_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_table_nameContext* typed_table_name();

  class  Typed_view_nameContext : public antlr4::ParserRuleContext {
  public:
    Typed_view_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Typed_view_nameContext* typed_view_name();

  class  User_mapping_option_nameContext : public antlr4::ParserRuleContext {
  public:
    User_mapping_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  User_mapping_option_nameContext* user_mapping_option_name();

  class  View_nameContext : public antlr4::ParserRuleContext {
  public:
    View_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  View_nameContext* view_name();

  class  Variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_nameContext* variable_name();

  class  Work_action_set_nameContext : public antlr4::ParserRuleContext {
  public:
    Work_action_set_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_set_nameContext* work_action_set_name();

  class  Work_class_set_nameContext : public antlr4::ParserRuleContext {
  public:
    Work_class_set_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_set_nameContext* work_class_set_name();

  class  Workload_nameContext : public antlr4::ParserRuleContext {
  public:
    Workload_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Workload_nameContext* workload_name();

  class  Work_action_nameContext : public antlr4::ParserRuleContext {
  public:
    Work_action_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_action_nameContext* work_action_name();

  class  Work_class_nameContext : public antlr4::ParserRuleContext {
  public:
    Work_class_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Work_class_nameContext* work_class_name();

  class  Wrapper_nameContext : public antlr4::ParserRuleContext {
  public:
    Wrapper_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wrapper_nameContext* wrapper_name();

  class  Wrapper_option_nameContext : public antlr4::ParserRuleContext {
  public:
    Wrapper_option_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wrapper_option_nameContext* wrapper_option_name();

  class  Xsrobject_nameContext : public antlr4::ParserRuleContext {
  public:
    Xsrobject_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xsrobject_nameContext* xsrobject_name();

  class  Parameter_nameContext : public antlr4::ParserRuleContext {
  public:
    Parameter_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_nameContext* parameter_name();

  class  Cursor_variable_nameContext : public antlr4::ParserRuleContext {
  public:
    Cursor_variable_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cursor_variable_nameContext* cursor_variable_name();

  class  Alias_nameContext : public antlr4::ParserRuleContext {
  public:
    Alias_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Alias_nameContext* alias_name();

  class  Db_partition_group_nameContext : public antlr4::ParserRuleContext {
  public:
    Db_partition_group_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Db_partition_group_nameContext* db_partition_group_name();

  class  Source_index_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_index_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_index_nameContext* source_index_name();

  class  Source_table_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_table_nameContext* source_table_name();

  class  Source_storagegroup_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_storagegroup_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_storagegroup_nameContext* source_storagegroup_name();

  class  Target_storagegroup_nameContext : public antlr4::ParserRuleContext {
  public:
    Target_storagegroup_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_storagegroup_nameContext* target_storagegroup_name();

  class  Source_tablespace_nameContext : public antlr4::ParserRuleContext {
  public:
    Source_tablespace_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_tablespace_nameContext* source_tablespace_name();

  class  Target_tablespace_nameContext : public antlr4::ParserRuleContext {
  public:
    Target_tablespace_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Target_tablespace_nameContext* target_tablespace_name();

  class  Unqualified_function_nameContext : public antlr4::ParserRuleContext {
  public:
    Unqualified_function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unqualified_function_nameContext* unqualified_function_name();

  class  Unqualified_procedure_nameContext : public antlr4::ParserRuleContext {
  public:
    Unqualified_procedure_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unqualified_procedure_nameContext* unqualified_procedure_name();

  class  Unqualified_specific_nameContext : public antlr4::ParserRuleContext {
  public:
    Unqualified_specific_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unqualified_specific_nameContext* unqualified_specific_name();

  class  Period_nameContext : public antlr4::ParserRuleContext {
  public:
    Period_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Period_nameContext* period_name();

  class  History_table_nameContext : public antlr4::ParserRuleContext {
  public:
    History_table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  History_table_nameContext* history_table_name();

  class  Xml_schema_nameContext : public antlr4::ParserRuleContext {
  public:
    Xml_schema_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xml_schema_nameContext* xml_schema_name();

  class  TodoContext : public antlr4::ParserRuleContext {
  public:
    TodoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Id_Context *id_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TodoContext* todo();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool search_conditionSempred(Search_conditionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpp_db2
