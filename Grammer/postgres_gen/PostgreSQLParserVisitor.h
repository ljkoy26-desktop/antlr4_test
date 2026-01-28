
// Generated from PostgreSQLParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PostgreSQLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PostgreSQLParser.
 */
class  PostgreSQLParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PostgreSQLParser.
   */
    virtual std::any visitRoot(PostgreSQLParser::RootContext *context) = 0;

    virtual std::any visitStmtblock(PostgreSQLParser::StmtblockContext *context) = 0;

    virtual std::any visitStmtmulti(PostgreSQLParser::StmtmultiContext *context) = 0;

    virtual std::any visitStmt(PostgreSQLParser::StmtContext *context) = 0;

    virtual std::any visitCallstmt(PostgreSQLParser::CallstmtContext *context) = 0;

    virtual std::any visitCreaterolestmt(PostgreSQLParser::CreaterolestmtContext *context) = 0;

    virtual std::any visitWith_(PostgreSQLParser::With_Context *context) = 0;

    virtual std::any visitOptrolelist(PostgreSQLParser::OptrolelistContext *context) = 0;

    virtual std::any visitAlteroptrolelist(PostgreSQLParser::AlteroptrolelistContext *context) = 0;

    virtual std::any visitAlteroptroleelem(PostgreSQLParser::AlteroptroleelemContext *context) = 0;

    virtual std::any visitCreateoptroleelem(PostgreSQLParser::CreateoptroleelemContext *context) = 0;

    virtual std::any visitCreateuserstmt(PostgreSQLParser::CreateuserstmtContext *context) = 0;

    virtual std::any visitAlterrolestmt(PostgreSQLParser::AlterrolestmtContext *context) = 0;

    virtual std::any visitIn_database_(PostgreSQLParser::In_database_Context *context) = 0;

    virtual std::any visitAlterrolesetstmt(PostgreSQLParser::AlterrolesetstmtContext *context) = 0;

    virtual std::any visitDroprolestmt(PostgreSQLParser::DroprolestmtContext *context) = 0;

    virtual std::any visitCreategroupstmt(PostgreSQLParser::CreategroupstmtContext *context) = 0;

    virtual std::any visitAltergroupstmt(PostgreSQLParser::AltergroupstmtContext *context) = 0;

    virtual std::any visitAdd_drop(PostgreSQLParser::Add_dropContext *context) = 0;

    virtual std::any visitCreateschemastmt(PostgreSQLParser::CreateschemastmtContext *context) = 0;

    virtual std::any visitOptschemaname(PostgreSQLParser::OptschemanameContext *context) = 0;

    virtual std::any visitOptschemaeltlist(PostgreSQLParser::OptschemaeltlistContext *context) = 0;

    virtual std::any visitSchema_stmt(PostgreSQLParser::Schema_stmtContext *context) = 0;

    virtual std::any visitVariablesetstmt(PostgreSQLParser::VariablesetstmtContext *context) = 0;

    virtual std::any visitSet_rest(PostgreSQLParser::Set_restContext *context) = 0;

    virtual std::any visitGeneric_set(PostgreSQLParser::Generic_setContext *context) = 0;

    virtual std::any visitSet_rest_more(PostgreSQLParser::Set_rest_moreContext *context) = 0;

    virtual std::any visitVar_name(PostgreSQLParser::Var_nameContext *context) = 0;

    virtual std::any visitVar_list(PostgreSQLParser::Var_listContext *context) = 0;

    virtual std::any visitVar_value(PostgreSQLParser::Var_valueContext *context) = 0;

    virtual std::any visitIso_level(PostgreSQLParser::Iso_levelContext *context) = 0;

    virtual std::any visitBoolean_or_string_(PostgreSQLParser::Boolean_or_string_Context *context) = 0;

    virtual std::any visitZone_value(PostgreSQLParser::Zone_valueContext *context) = 0;

    virtual std::any visitEncoding_(PostgreSQLParser::Encoding_Context *context) = 0;

    virtual std::any visitNonreservedword_or_sconst(PostgreSQLParser::Nonreservedword_or_sconstContext *context) = 0;

    virtual std::any visitVariableresetstmt(PostgreSQLParser::VariableresetstmtContext *context) = 0;

    virtual std::any visitReset_rest(PostgreSQLParser::Reset_restContext *context) = 0;

    virtual std::any visitGeneric_reset(PostgreSQLParser::Generic_resetContext *context) = 0;

    virtual std::any visitSetresetclause(PostgreSQLParser::SetresetclauseContext *context) = 0;

    virtual std::any visitFunctionsetresetclause(PostgreSQLParser::FunctionsetresetclauseContext *context) = 0;

    virtual std::any visitVariableshowstmt(PostgreSQLParser::VariableshowstmtContext *context) = 0;

    virtual std::any visitConstraintssetstmt(PostgreSQLParser::ConstraintssetstmtContext *context) = 0;

    virtual std::any visitConstraints_set_list(PostgreSQLParser::Constraints_set_listContext *context) = 0;

    virtual std::any visitConstraints_set_mode(PostgreSQLParser::Constraints_set_modeContext *context) = 0;

    virtual std::any visitCheckpointstmt(PostgreSQLParser::CheckpointstmtContext *context) = 0;

    virtual std::any visitDiscardstmt(PostgreSQLParser::DiscardstmtContext *context) = 0;

    virtual std::any visitAltertablestmt(PostgreSQLParser::AltertablestmtContext *context) = 0;

    virtual std::any visitAlter_table_cmds(PostgreSQLParser::Alter_table_cmdsContext *context) = 0;

    virtual std::any visitPartition_cmd(PostgreSQLParser::Partition_cmdContext *context) = 0;

    virtual std::any visitIndex_partition_cmd(PostgreSQLParser::Index_partition_cmdContext *context) = 0;

    virtual std::any visitAlter_table_cmd(PostgreSQLParser::Alter_table_cmdContext *context) = 0;

    virtual std::any visitAlter_column_default(PostgreSQLParser::Alter_column_defaultContext *context) = 0;

    virtual std::any visitDrop_behavior_(PostgreSQLParser::Drop_behavior_Context *context) = 0;

    virtual std::any visitCollate_clause_(PostgreSQLParser::Collate_clause_Context *context) = 0;

    virtual std::any visitAlter_using(PostgreSQLParser::Alter_usingContext *context) = 0;

    virtual std::any visitReplica_identity(PostgreSQLParser::Replica_identityContext *context) = 0;

    virtual std::any visitReloptions(PostgreSQLParser::ReloptionsContext *context) = 0;

    virtual std::any visitReloptions_(PostgreSQLParser::Reloptions_Context *context) = 0;

    virtual std::any visitReloption_list(PostgreSQLParser::Reloption_listContext *context) = 0;

    virtual std::any visitReloption_elem(PostgreSQLParser::Reloption_elemContext *context) = 0;

    virtual std::any visitAlter_identity_column_option_list(PostgreSQLParser::Alter_identity_column_option_listContext *context) = 0;

    virtual std::any visitAlter_identity_column_option(PostgreSQLParser::Alter_identity_column_optionContext *context) = 0;

    virtual std::any visitPartitionboundspec(PostgreSQLParser::PartitionboundspecContext *context) = 0;

    virtual std::any visitHash_partbound_elem(PostgreSQLParser::Hash_partbound_elemContext *context) = 0;

    virtual std::any visitHash_partbound(PostgreSQLParser::Hash_partboundContext *context) = 0;

    virtual std::any visitAltercompositetypestmt(PostgreSQLParser::AltercompositetypestmtContext *context) = 0;

    virtual std::any visitAlter_type_cmds(PostgreSQLParser::Alter_type_cmdsContext *context) = 0;

    virtual std::any visitAlter_type_cmd(PostgreSQLParser::Alter_type_cmdContext *context) = 0;

    virtual std::any visitCloseportalstmt(PostgreSQLParser::CloseportalstmtContext *context) = 0;

    virtual std::any visitCopystmt(PostgreSQLParser::CopystmtContext *context) = 0;

    virtual std::any visitCopy_from(PostgreSQLParser::Copy_fromContext *context) = 0;

    virtual std::any visitProgram_(PostgreSQLParser::Program_Context *context) = 0;

    virtual std::any visitCopy_file_name(PostgreSQLParser::Copy_file_nameContext *context) = 0;

    virtual std::any visitCopy_options(PostgreSQLParser::Copy_optionsContext *context) = 0;

    virtual std::any visitCopy_opt_list(PostgreSQLParser::Copy_opt_listContext *context) = 0;

    virtual std::any visitCopy_opt_item(PostgreSQLParser::Copy_opt_itemContext *context) = 0;

    virtual std::any visitBinary_(PostgreSQLParser::Binary_Context *context) = 0;

    virtual std::any visitCopy_delimiter(PostgreSQLParser::Copy_delimiterContext *context) = 0;

    virtual std::any visitUsing_(PostgreSQLParser::Using_Context *context) = 0;

    virtual std::any visitCopy_generic_opt_list(PostgreSQLParser::Copy_generic_opt_listContext *context) = 0;

    virtual std::any visitCopy_generic_opt_elem(PostgreSQLParser::Copy_generic_opt_elemContext *context) = 0;

    virtual std::any visitCopy_generic_opt_arg(PostgreSQLParser::Copy_generic_opt_argContext *context) = 0;

    virtual std::any visitCopy_generic_opt_arg_list(PostgreSQLParser::Copy_generic_opt_arg_listContext *context) = 0;

    virtual std::any visitCopy_generic_opt_arg_list_item(PostgreSQLParser::Copy_generic_opt_arg_list_itemContext *context) = 0;

    virtual std::any visitCreatestmt(PostgreSQLParser::CreatestmtContext *context) = 0;

    virtual std::any visitOpttemp(PostgreSQLParser::OpttempContext *context) = 0;

    virtual std::any visitOpttableelementlist(PostgreSQLParser::OpttableelementlistContext *context) = 0;

    virtual std::any visitOpttypedtableelementlist(PostgreSQLParser::OpttypedtableelementlistContext *context) = 0;

    virtual std::any visitTableelementlist(PostgreSQLParser::TableelementlistContext *context) = 0;

    virtual std::any visitTypedtableelementlist(PostgreSQLParser::TypedtableelementlistContext *context) = 0;

    virtual std::any visitTableelement(PostgreSQLParser::TableelementContext *context) = 0;

    virtual std::any visitTypedtableelement(PostgreSQLParser::TypedtableelementContext *context) = 0;

    virtual std::any visitColumnDef(PostgreSQLParser::ColumnDefContext *context) = 0;

    virtual std::any visitColumnOptions(PostgreSQLParser::ColumnOptionsContext *context) = 0;

    virtual std::any visitColquallist(PostgreSQLParser::ColquallistContext *context) = 0;

    virtual std::any visitColconstraint(PostgreSQLParser::ColconstraintContext *context) = 0;

    virtual std::any visitColconstraintelem(PostgreSQLParser::ColconstraintelemContext *context) = 0;

    virtual std::any visitGenerated_when(PostgreSQLParser::Generated_whenContext *context) = 0;

    virtual std::any visitConstraintattr(PostgreSQLParser::ConstraintattrContext *context) = 0;

    virtual std::any visitTablelikeclause(PostgreSQLParser::TablelikeclauseContext *context) = 0;

    virtual std::any visitTablelikeoptionlist(PostgreSQLParser::TablelikeoptionlistContext *context) = 0;

    virtual std::any visitTablelikeoption(PostgreSQLParser::TablelikeoptionContext *context) = 0;

    virtual std::any visitTableconstraint(PostgreSQLParser::TableconstraintContext *context) = 0;

    virtual std::any visitConstraintelem(PostgreSQLParser::ConstraintelemContext *context) = 0;

    virtual std::any visitNo_inherit_(PostgreSQLParser::No_inherit_Context *context) = 0;

    virtual std::any visitColumn_list_(PostgreSQLParser::Column_list_Context *context) = 0;

    virtual std::any visitColumnlist(PostgreSQLParser::ColumnlistContext *context) = 0;

    virtual std::any visitColumnElem(PostgreSQLParser::ColumnElemContext *context) = 0;

    virtual std::any visitC_include_(PostgreSQLParser::C_include_Context *context) = 0;

    virtual std::any visitKey_match(PostgreSQLParser::Key_matchContext *context) = 0;

    virtual std::any visitExclusionconstraintlist(PostgreSQLParser::ExclusionconstraintlistContext *context) = 0;

    virtual std::any visitExclusionconstraintelem(PostgreSQLParser::ExclusionconstraintelemContext *context) = 0;

    virtual std::any visitExclusionwhereclause(PostgreSQLParser::ExclusionwhereclauseContext *context) = 0;

    virtual std::any visitKey_actions(PostgreSQLParser::Key_actionsContext *context) = 0;

    virtual std::any visitKey_update(PostgreSQLParser::Key_updateContext *context) = 0;

    virtual std::any visitKey_delete(PostgreSQLParser::Key_deleteContext *context) = 0;

    virtual std::any visitKey_action(PostgreSQLParser::Key_actionContext *context) = 0;

    virtual std::any visitOptinherit(PostgreSQLParser::OptinheritContext *context) = 0;

    virtual std::any visitOptpartitionspec(PostgreSQLParser::OptpartitionspecContext *context) = 0;

    virtual std::any visitPartitionspec(PostgreSQLParser::PartitionspecContext *context) = 0;

    virtual std::any visitPart_params(PostgreSQLParser::Part_paramsContext *context) = 0;

    virtual std::any visitPart_elem(PostgreSQLParser::Part_elemContext *context) = 0;

    virtual std::any visitTable_access_method_clause(PostgreSQLParser::Table_access_method_clauseContext *context) = 0;

    virtual std::any visitOptwith(PostgreSQLParser::OptwithContext *context) = 0;

    virtual std::any visitOncommitoption(PostgreSQLParser::OncommitoptionContext *context) = 0;

    virtual std::any visitOpttablespace(PostgreSQLParser::OpttablespaceContext *context) = 0;

    virtual std::any visitOptconstablespace(PostgreSQLParser::OptconstablespaceContext *context) = 0;

    virtual std::any visitExistingindex(PostgreSQLParser::ExistingindexContext *context) = 0;

    virtual std::any visitCreatestatsstmt(PostgreSQLParser::CreatestatsstmtContext *context) = 0;

    virtual std::any visitAlterstatsstmt(PostgreSQLParser::AlterstatsstmtContext *context) = 0;

    virtual std::any visitCreateasstmt(PostgreSQLParser::CreateasstmtContext *context) = 0;

    virtual std::any visitCreate_as_target(PostgreSQLParser::Create_as_targetContext *context) = 0;

    virtual std::any visitWith_data_(PostgreSQLParser::With_data_Context *context) = 0;

    virtual std::any visitCreatematviewstmt(PostgreSQLParser::CreatematviewstmtContext *context) = 0;

    virtual std::any visitCreate_mv_target(PostgreSQLParser::Create_mv_targetContext *context) = 0;

    virtual std::any visitOptnolog(PostgreSQLParser::OptnologContext *context) = 0;

    virtual std::any visitRefreshmatviewstmt(PostgreSQLParser::RefreshmatviewstmtContext *context) = 0;

    virtual std::any visitCreateseqstmt(PostgreSQLParser::CreateseqstmtContext *context) = 0;

    virtual std::any visitAlterseqstmt(PostgreSQLParser::AlterseqstmtContext *context) = 0;

    virtual std::any visitOptseqoptlist(PostgreSQLParser::OptseqoptlistContext *context) = 0;

    virtual std::any visitOptparenthesizedseqoptlist(PostgreSQLParser::OptparenthesizedseqoptlistContext *context) = 0;

    virtual std::any visitSeqoptlist(PostgreSQLParser::SeqoptlistContext *context) = 0;

    virtual std::any visitSeqoptelem(PostgreSQLParser::SeqoptelemContext *context) = 0;

    virtual std::any visitBy_(PostgreSQLParser::By_Context *context) = 0;

    virtual std::any visitNumericonly(PostgreSQLParser::NumericonlyContext *context) = 0;

    virtual std::any visitNumericonly_list(PostgreSQLParser::Numericonly_listContext *context) = 0;

    virtual std::any visitCreateplangstmt(PostgreSQLParser::CreateplangstmtContext *context) = 0;

    virtual std::any visitTrusted_(PostgreSQLParser::Trusted_Context *context) = 0;

    virtual std::any visitHandler_name(PostgreSQLParser::Handler_nameContext *context) = 0;

    virtual std::any visitInline_handler_(PostgreSQLParser::Inline_handler_Context *context) = 0;

    virtual std::any visitValidator_clause(PostgreSQLParser::Validator_clauseContext *context) = 0;

    virtual std::any visitValidator_(PostgreSQLParser::Validator_Context *context) = 0;

    virtual std::any visitProcedural_(PostgreSQLParser::Procedural_Context *context) = 0;

    virtual std::any visitCreatetablespacestmt(PostgreSQLParser::CreatetablespacestmtContext *context) = 0;

    virtual std::any visitOpttablespaceowner(PostgreSQLParser::OpttablespaceownerContext *context) = 0;

    virtual std::any visitDroptablespacestmt(PostgreSQLParser::DroptablespacestmtContext *context) = 0;

    virtual std::any visitCreateextensionstmt(PostgreSQLParser::CreateextensionstmtContext *context) = 0;

    virtual std::any visitCreate_extension_opt_list(PostgreSQLParser::Create_extension_opt_listContext *context) = 0;

    virtual std::any visitCreate_extension_opt_item(PostgreSQLParser::Create_extension_opt_itemContext *context) = 0;

    virtual std::any visitAlterextensionstmt(PostgreSQLParser::AlterextensionstmtContext *context) = 0;

    virtual std::any visitAlter_extension_opt_list(PostgreSQLParser::Alter_extension_opt_listContext *context) = 0;

    virtual std::any visitAlter_extension_opt_item(PostgreSQLParser::Alter_extension_opt_itemContext *context) = 0;

    virtual std::any visitAlterextensioncontentsstmt(PostgreSQLParser::AlterextensioncontentsstmtContext *context) = 0;

    virtual std::any visitCreatefdwstmt(PostgreSQLParser::CreatefdwstmtContext *context) = 0;

    virtual std::any visitFdw_option(PostgreSQLParser::Fdw_optionContext *context) = 0;

    virtual std::any visitFdw_options(PostgreSQLParser::Fdw_optionsContext *context) = 0;

    virtual std::any visitFdw_options_(PostgreSQLParser::Fdw_options_Context *context) = 0;

    virtual std::any visitAlterfdwstmt(PostgreSQLParser::AlterfdwstmtContext *context) = 0;

    virtual std::any visitCreate_generic_options(PostgreSQLParser::Create_generic_optionsContext *context) = 0;

    virtual std::any visitGeneric_option_list(PostgreSQLParser::Generic_option_listContext *context) = 0;

    virtual std::any visitAlter_generic_options(PostgreSQLParser::Alter_generic_optionsContext *context) = 0;

    virtual std::any visitAlter_generic_option_list(PostgreSQLParser::Alter_generic_option_listContext *context) = 0;

    virtual std::any visitAlter_generic_option_elem(PostgreSQLParser::Alter_generic_option_elemContext *context) = 0;

    virtual std::any visitGeneric_option_elem(PostgreSQLParser::Generic_option_elemContext *context) = 0;

    virtual std::any visitGeneric_option_name(PostgreSQLParser::Generic_option_nameContext *context) = 0;

    virtual std::any visitGeneric_option_arg(PostgreSQLParser::Generic_option_argContext *context) = 0;

    virtual std::any visitCreateforeignserverstmt(PostgreSQLParser::CreateforeignserverstmtContext *context) = 0;

    virtual std::any visitType_(PostgreSQLParser::Type_Context *context) = 0;

    virtual std::any visitForeign_server_version(PostgreSQLParser::Foreign_server_versionContext *context) = 0;

    virtual std::any visitForeign_server_version_(PostgreSQLParser::Foreign_server_version_Context *context) = 0;

    virtual std::any visitAlterforeignserverstmt(PostgreSQLParser::AlterforeignserverstmtContext *context) = 0;

    virtual std::any visitCreateforeigntablestmt(PostgreSQLParser::CreateforeigntablestmtContext *context) = 0;

    virtual std::any visitImportforeignschemastmt(PostgreSQLParser::ImportforeignschemastmtContext *context) = 0;

    virtual std::any visitImport_qualification_type(PostgreSQLParser::Import_qualification_typeContext *context) = 0;

    virtual std::any visitImport_qualification(PostgreSQLParser::Import_qualificationContext *context) = 0;

    virtual std::any visitCreateusermappingstmt(PostgreSQLParser::CreateusermappingstmtContext *context) = 0;

    virtual std::any visitAuth_ident(PostgreSQLParser::Auth_identContext *context) = 0;

    virtual std::any visitDropusermappingstmt(PostgreSQLParser::DropusermappingstmtContext *context) = 0;

    virtual std::any visitAlterusermappingstmt(PostgreSQLParser::AlterusermappingstmtContext *context) = 0;

    virtual std::any visitCreatepolicystmt(PostgreSQLParser::CreatepolicystmtContext *context) = 0;

    virtual std::any visitAlterpolicystmt(PostgreSQLParser::AlterpolicystmtContext *context) = 0;

    virtual std::any visitRowsecurityoptionalexpr(PostgreSQLParser::RowsecurityoptionalexprContext *context) = 0;

    virtual std::any visitRowsecurityoptionalwithcheck(PostgreSQLParser::RowsecurityoptionalwithcheckContext *context) = 0;

    virtual std::any visitRowsecuritydefaulttorole(PostgreSQLParser::RowsecuritydefaulttoroleContext *context) = 0;

    virtual std::any visitRowsecurityoptionaltorole(PostgreSQLParser::RowsecurityoptionaltoroleContext *context) = 0;

    virtual std::any visitRowsecuritydefaultpermissive(PostgreSQLParser::RowsecuritydefaultpermissiveContext *context) = 0;

    virtual std::any visitRowsecuritydefaultforcmd(PostgreSQLParser::RowsecuritydefaultforcmdContext *context) = 0;

    virtual std::any visitRow_security_cmd(PostgreSQLParser::Row_security_cmdContext *context) = 0;

    virtual std::any visitCreateamstmt(PostgreSQLParser::CreateamstmtContext *context) = 0;

    virtual std::any visitAm_type(PostgreSQLParser::Am_typeContext *context) = 0;

    virtual std::any visitCreatetrigstmt(PostgreSQLParser::CreatetrigstmtContext *context) = 0;

    virtual std::any visitTriggeractiontime(PostgreSQLParser::TriggeractiontimeContext *context) = 0;

    virtual std::any visitTriggerevents(PostgreSQLParser::TriggereventsContext *context) = 0;

    virtual std::any visitTriggeroneevent(PostgreSQLParser::TriggeroneeventContext *context) = 0;

    virtual std::any visitTriggerreferencing(PostgreSQLParser::TriggerreferencingContext *context) = 0;

    virtual std::any visitTriggertransitions(PostgreSQLParser::TriggertransitionsContext *context) = 0;

    virtual std::any visitTriggertransition(PostgreSQLParser::TriggertransitionContext *context) = 0;

    virtual std::any visitTransitionoldornew(PostgreSQLParser::TransitionoldornewContext *context) = 0;

    virtual std::any visitTransitionrowortable(PostgreSQLParser::TransitionrowortableContext *context) = 0;

    virtual std::any visitTransitionrelname(PostgreSQLParser::TransitionrelnameContext *context) = 0;

    virtual std::any visitTriggerforspec(PostgreSQLParser::TriggerforspecContext *context) = 0;

    virtual std::any visitTriggerforopteach(PostgreSQLParser::TriggerforopteachContext *context) = 0;

    virtual std::any visitTriggerfortype(PostgreSQLParser::TriggerfortypeContext *context) = 0;

    virtual std::any visitTriggerwhen(PostgreSQLParser::TriggerwhenContext *context) = 0;

    virtual std::any visitFunction_or_procedure(PostgreSQLParser::Function_or_procedureContext *context) = 0;

    virtual std::any visitTriggerfuncargs(PostgreSQLParser::TriggerfuncargsContext *context) = 0;

    virtual std::any visitTriggerfuncarg(PostgreSQLParser::TriggerfuncargContext *context) = 0;

    virtual std::any visitOptconstrfromtable(PostgreSQLParser::OptconstrfromtableContext *context) = 0;

    virtual std::any visitConstraintattributespec(PostgreSQLParser::ConstraintattributespecContext *context) = 0;

    virtual std::any visitConstraintattributeElem(PostgreSQLParser::ConstraintattributeElemContext *context) = 0;

    virtual std::any visitCreateeventtrigstmt(PostgreSQLParser::CreateeventtrigstmtContext *context) = 0;

    virtual std::any visitEvent_trigger_when_list(PostgreSQLParser::Event_trigger_when_listContext *context) = 0;

    virtual std::any visitEvent_trigger_when_item(PostgreSQLParser::Event_trigger_when_itemContext *context) = 0;

    virtual std::any visitEvent_trigger_value_list(PostgreSQLParser::Event_trigger_value_listContext *context) = 0;

    virtual std::any visitAltereventtrigstmt(PostgreSQLParser::AltereventtrigstmtContext *context) = 0;

    virtual std::any visitEnable_trigger(PostgreSQLParser::Enable_triggerContext *context) = 0;

    virtual std::any visitCreateassertionstmt(PostgreSQLParser::CreateassertionstmtContext *context) = 0;

    virtual std::any visitDefinestmt(PostgreSQLParser::DefinestmtContext *context) = 0;

    virtual std::any visitDefinition(PostgreSQLParser::DefinitionContext *context) = 0;

    virtual std::any visitDef_list(PostgreSQLParser::Def_listContext *context) = 0;

    virtual std::any visitDef_elem(PostgreSQLParser::Def_elemContext *context) = 0;

    virtual std::any visitDef_arg(PostgreSQLParser::Def_argContext *context) = 0;

    virtual std::any visitOld_aggr_definition(PostgreSQLParser::Old_aggr_definitionContext *context) = 0;

    virtual std::any visitOld_aggr_list(PostgreSQLParser::Old_aggr_listContext *context) = 0;

    virtual std::any visitOld_aggr_elem(PostgreSQLParser::Old_aggr_elemContext *context) = 0;

    virtual std::any visitEnum_val_list_(PostgreSQLParser::Enum_val_list_Context *context) = 0;

    virtual std::any visitEnum_val_list(PostgreSQLParser::Enum_val_listContext *context) = 0;

    virtual std::any visitAlterenumstmt(PostgreSQLParser::AlterenumstmtContext *context) = 0;

    virtual std::any visitIf_not_exists_(PostgreSQLParser::If_not_exists_Context *context) = 0;

    virtual std::any visitCreateopclassstmt(PostgreSQLParser::CreateopclassstmtContext *context) = 0;

    virtual std::any visitOpclass_item_list(PostgreSQLParser::Opclass_item_listContext *context) = 0;

    virtual std::any visitOpclass_item(PostgreSQLParser::Opclass_itemContext *context) = 0;

    virtual std::any visitDefault_(PostgreSQLParser::Default_Context *context) = 0;

    virtual std::any visitOpfamily_(PostgreSQLParser::Opfamily_Context *context) = 0;

    virtual std::any visitOpclass_purpose(PostgreSQLParser::Opclass_purposeContext *context) = 0;

    virtual std::any visitRecheck_(PostgreSQLParser::Recheck_Context *context) = 0;

    virtual std::any visitCreateopfamilystmt(PostgreSQLParser::CreateopfamilystmtContext *context) = 0;

    virtual std::any visitAlteropfamilystmt(PostgreSQLParser::AlteropfamilystmtContext *context) = 0;

    virtual std::any visitOpclass_drop_list(PostgreSQLParser::Opclass_drop_listContext *context) = 0;

    virtual std::any visitOpclass_drop(PostgreSQLParser::Opclass_dropContext *context) = 0;

    virtual std::any visitDropopclassstmt(PostgreSQLParser::DropopclassstmtContext *context) = 0;

    virtual std::any visitDropopfamilystmt(PostgreSQLParser::DropopfamilystmtContext *context) = 0;

    virtual std::any visitDropownedstmt(PostgreSQLParser::DropownedstmtContext *context) = 0;

    virtual std::any visitReassignownedstmt(PostgreSQLParser::ReassignownedstmtContext *context) = 0;

    virtual std::any visitDropstmt(PostgreSQLParser::DropstmtContext *context) = 0;

    virtual std::any visitObject_type_any_name(PostgreSQLParser::Object_type_any_nameContext *context) = 0;

    virtual std::any visitObject_type_name(PostgreSQLParser::Object_type_nameContext *context) = 0;

    virtual std::any visitDrop_type_name(PostgreSQLParser::Drop_type_nameContext *context) = 0;

    virtual std::any visitObject_type_name_on_any_name(PostgreSQLParser::Object_type_name_on_any_nameContext *context) = 0;

    virtual std::any visitAny_name_list_(PostgreSQLParser::Any_name_list_Context *context) = 0;

    virtual std::any visitAny_name(PostgreSQLParser::Any_nameContext *context) = 0;

    virtual std::any visitAttrs(PostgreSQLParser::AttrsContext *context) = 0;

    virtual std::any visitType_name_list(PostgreSQLParser::Type_name_listContext *context) = 0;

    virtual std::any visitTruncatestmt(PostgreSQLParser::TruncatestmtContext *context) = 0;

    virtual std::any visitRestart_seqs_(PostgreSQLParser::Restart_seqs_Context *context) = 0;

    virtual std::any visitCommentstmt(PostgreSQLParser::CommentstmtContext *context) = 0;

    virtual std::any visitComment_text(PostgreSQLParser::Comment_textContext *context) = 0;

    virtual std::any visitSeclabelstmt(PostgreSQLParser::SeclabelstmtContext *context) = 0;

    virtual std::any visitProvider_(PostgreSQLParser::Provider_Context *context) = 0;

    virtual std::any visitSecurity_label(PostgreSQLParser::Security_labelContext *context) = 0;

    virtual std::any visitFetchstmt(PostgreSQLParser::FetchstmtContext *context) = 0;

    virtual std::any visitFetch_args(PostgreSQLParser::Fetch_argsContext *context) = 0;

    virtual std::any visitFrom_in(PostgreSQLParser::From_inContext *context) = 0;

    virtual std::any visitFrom_in_(PostgreSQLParser::From_in_Context *context) = 0;

    virtual std::any visitGrantstmt(PostgreSQLParser::GrantstmtContext *context) = 0;

    virtual std::any visitRevokestmt(PostgreSQLParser::RevokestmtContext *context) = 0;

    virtual std::any visitPrivileges(PostgreSQLParser::PrivilegesContext *context) = 0;

    virtual std::any visitPrivilege_list(PostgreSQLParser::Privilege_listContext *context) = 0;

    virtual std::any visitPrivilege(PostgreSQLParser::PrivilegeContext *context) = 0;

    virtual std::any visitPrivilege_target(PostgreSQLParser::Privilege_targetContext *context) = 0;

    virtual std::any visitGrantee_list(PostgreSQLParser::Grantee_listContext *context) = 0;

    virtual std::any visitGrantee(PostgreSQLParser::GranteeContext *context) = 0;

    virtual std::any visitGrant_grant_option_(PostgreSQLParser::Grant_grant_option_Context *context) = 0;

    virtual std::any visitGrantrolestmt(PostgreSQLParser::GrantrolestmtContext *context) = 0;

    virtual std::any visitRevokerolestmt(PostgreSQLParser::RevokerolestmtContext *context) = 0;

    virtual std::any visitGrant_admin_option_(PostgreSQLParser::Grant_admin_option_Context *context) = 0;

    virtual std::any visitGranted_by_(PostgreSQLParser::Granted_by_Context *context) = 0;

    virtual std::any visitAlterdefaultprivilegesstmt(PostgreSQLParser::AlterdefaultprivilegesstmtContext *context) = 0;

    virtual std::any visitDefacloptionlist(PostgreSQLParser::DefacloptionlistContext *context) = 0;

    virtual std::any visitDefacloption(PostgreSQLParser::DefacloptionContext *context) = 0;

    virtual std::any visitDefaclaction(PostgreSQLParser::DefaclactionContext *context) = 0;

    virtual std::any visitDefacl_privilege_target(PostgreSQLParser::Defacl_privilege_targetContext *context) = 0;

    virtual std::any visitIndexstmt(PostgreSQLParser::IndexstmtContext *context) = 0;

    virtual std::any visitUnique_(PostgreSQLParser::Unique_Context *context) = 0;

    virtual std::any visitNulls_distinct(PostgreSQLParser::Nulls_distinctContext *context) = 0;

    virtual std::any visitSingle_name_(PostgreSQLParser::Single_name_Context *context) = 0;

    virtual std::any visitConcurrently_(PostgreSQLParser::Concurrently_Context *context) = 0;

    virtual std::any visitIndex_name_(PostgreSQLParser::Index_name_Context *context) = 0;

    virtual std::any visitAccess_method_clause(PostgreSQLParser::Access_method_clauseContext *context) = 0;

    virtual std::any visitIndex_params(PostgreSQLParser::Index_paramsContext *context) = 0;

    virtual std::any visitIndex_elem_options(PostgreSQLParser::Index_elem_optionsContext *context) = 0;

    virtual std::any visitIndex_elem(PostgreSQLParser::Index_elemContext *context) = 0;

    virtual std::any visitInclude_(PostgreSQLParser::Include_Context *context) = 0;

    virtual std::any visitIndex_including_params(PostgreSQLParser::Index_including_paramsContext *context) = 0;

    virtual std::any visitCollate_(PostgreSQLParser::Collate_Context *context) = 0;

    virtual std::any visitClass_(PostgreSQLParser::Class_Context *context) = 0;

    virtual std::any visitAsc_desc_(PostgreSQLParser::Asc_desc_Context *context) = 0;

    virtual std::any visitNulls_order_(PostgreSQLParser::Nulls_order_Context *context) = 0;

    virtual std::any visitCreatefunctionstmt(PostgreSQLParser::CreatefunctionstmtContext *context) = 0;

    virtual std::any visitOr_replace_(PostgreSQLParser::Or_replace_Context *context) = 0;

    virtual std::any visitFunc_args(PostgreSQLParser::Func_argsContext *context) = 0;

    virtual std::any visitFunc_args_list(PostgreSQLParser::Func_args_listContext *context) = 0;

    virtual std::any visitFunction_with_argtypes_list(PostgreSQLParser::Function_with_argtypes_listContext *context) = 0;

    virtual std::any visitFunction_with_argtypes(PostgreSQLParser::Function_with_argtypesContext *context) = 0;

    virtual std::any visitFunc_args_with_defaults(PostgreSQLParser::Func_args_with_defaultsContext *context) = 0;

    virtual std::any visitFunc_args_with_defaults_list(PostgreSQLParser::Func_args_with_defaults_listContext *context) = 0;

    virtual std::any visitFunc_arg(PostgreSQLParser::Func_argContext *context) = 0;

    virtual std::any visitArg_class(PostgreSQLParser::Arg_classContext *context) = 0;

    virtual std::any visitParam_name(PostgreSQLParser::Param_nameContext *context) = 0;

    virtual std::any visitFunc_return(PostgreSQLParser::Func_returnContext *context) = 0;

    virtual std::any visitFunc_type(PostgreSQLParser::Func_typeContext *context) = 0;

    virtual std::any visitFunc_arg_with_default(PostgreSQLParser::Func_arg_with_defaultContext *context) = 0;

    virtual std::any visitAggr_arg(PostgreSQLParser::Aggr_argContext *context) = 0;

    virtual std::any visitAggr_args(PostgreSQLParser::Aggr_argsContext *context) = 0;

    virtual std::any visitAggr_args_list(PostgreSQLParser::Aggr_args_listContext *context) = 0;

    virtual std::any visitAggregate_with_argtypes(PostgreSQLParser::Aggregate_with_argtypesContext *context) = 0;

    virtual std::any visitAggregate_with_argtypes_list(PostgreSQLParser::Aggregate_with_argtypes_listContext *context) = 0;

    virtual std::any visitCreatefunc_opt_list(PostgreSQLParser::Createfunc_opt_listContext *context) = 0;

    virtual std::any visitCommon_func_opt_item(PostgreSQLParser::Common_func_opt_itemContext *context) = 0;

    virtual std::any visitCreatefunc_opt_item(PostgreSQLParser::Createfunc_opt_itemContext *context) = 0;

    virtual std::any visitFunc_as(PostgreSQLParser::Func_asContext *context) = 0;

    virtual std::any visitTransform_type_list(PostgreSQLParser::Transform_type_listContext *context) = 0;

    virtual std::any visitDefinition_(PostgreSQLParser::Definition_Context *context) = 0;

    virtual std::any visitTable_func_column(PostgreSQLParser::Table_func_columnContext *context) = 0;

    virtual std::any visitTable_func_column_list(PostgreSQLParser::Table_func_column_listContext *context) = 0;

    virtual std::any visitAlterfunctionstmt(PostgreSQLParser::AlterfunctionstmtContext *context) = 0;

    virtual std::any visitAlterfunc_opt_list(PostgreSQLParser::Alterfunc_opt_listContext *context) = 0;

    virtual std::any visitRestrict_(PostgreSQLParser::Restrict_Context *context) = 0;

    virtual std::any visitRemovefuncstmt(PostgreSQLParser::RemovefuncstmtContext *context) = 0;

    virtual std::any visitRemoveaggrstmt(PostgreSQLParser::RemoveaggrstmtContext *context) = 0;

    virtual std::any visitRemoveoperstmt(PostgreSQLParser::RemoveoperstmtContext *context) = 0;

    virtual std::any visitOper_argtypes(PostgreSQLParser::Oper_argtypesContext *context) = 0;

    virtual std::any visitAny_operator(PostgreSQLParser::Any_operatorContext *context) = 0;

    virtual std::any visitOperator_with_argtypes_list(PostgreSQLParser::Operator_with_argtypes_listContext *context) = 0;

    virtual std::any visitOperator_with_argtypes(PostgreSQLParser::Operator_with_argtypesContext *context) = 0;

    virtual std::any visitDostmt(PostgreSQLParser::DostmtContext *context) = 0;

    virtual std::any visitDostmt_opt_list(PostgreSQLParser::Dostmt_opt_listContext *context) = 0;

    virtual std::any visitDostmt_opt_item(PostgreSQLParser::Dostmt_opt_itemContext *context) = 0;

    virtual std::any visitCreatecaststmt(PostgreSQLParser::CreatecaststmtContext *context) = 0;

    virtual std::any visitCast_context(PostgreSQLParser::Cast_contextContext *context) = 0;

    virtual std::any visitDropcaststmt(PostgreSQLParser::DropcaststmtContext *context) = 0;

    virtual std::any visitIf_exists_(PostgreSQLParser::If_exists_Context *context) = 0;

    virtual std::any visitCreatetransformstmt(PostgreSQLParser::CreatetransformstmtContext *context) = 0;

    virtual std::any visitTransform_element_list(PostgreSQLParser::Transform_element_listContext *context) = 0;

    virtual std::any visitDroptransformstmt(PostgreSQLParser::DroptransformstmtContext *context) = 0;

    virtual std::any visitReindexstmt(PostgreSQLParser::ReindexstmtContext *context) = 0;

    virtual std::any visitReindex_target_relation(PostgreSQLParser::Reindex_target_relationContext *context) = 0;

    virtual std::any visitReindex_target_all(PostgreSQLParser::Reindex_target_allContext *context) = 0;

    virtual std::any visitReindex_option_list(PostgreSQLParser::Reindex_option_listContext *context) = 0;

    virtual std::any visitAltertblspcstmt(PostgreSQLParser::AltertblspcstmtContext *context) = 0;

    virtual std::any visitRenamestmt(PostgreSQLParser::RenamestmtContext *context) = 0;

    virtual std::any visitColumn_(PostgreSQLParser::Column_Context *context) = 0;

    virtual std::any visitSet_data_(PostgreSQLParser::Set_data_Context *context) = 0;

    virtual std::any visitAlterobjectdependsstmt(PostgreSQLParser::AlterobjectdependsstmtContext *context) = 0;

    virtual std::any visitNo_(PostgreSQLParser::No_Context *context) = 0;

    virtual std::any visitAlterobjectschemastmt(PostgreSQLParser::AlterobjectschemastmtContext *context) = 0;

    virtual std::any visitAlteroperatorstmt(PostgreSQLParser::AlteroperatorstmtContext *context) = 0;

    virtual std::any visitOperator_def_list(PostgreSQLParser::Operator_def_listContext *context) = 0;

    virtual std::any visitOperator_def_elem(PostgreSQLParser::Operator_def_elemContext *context) = 0;

    virtual std::any visitOperator_def_arg(PostgreSQLParser::Operator_def_argContext *context) = 0;

    virtual std::any visitAltertypestmt(PostgreSQLParser::AltertypestmtContext *context) = 0;

    virtual std::any visitAlterownerstmt(PostgreSQLParser::AlterownerstmtContext *context) = 0;

    virtual std::any visitCreatepublicationstmt(PostgreSQLParser::CreatepublicationstmtContext *context) = 0;

    virtual std::any visitPublication_for_tables_(PostgreSQLParser::Publication_for_tables_Context *context) = 0;

    virtual std::any visitPublication_for_tables(PostgreSQLParser::Publication_for_tablesContext *context) = 0;

    virtual std::any visitAlterpublicationstmt(PostgreSQLParser::AlterpublicationstmtContext *context) = 0;

    virtual std::any visitCreatesubscriptionstmt(PostgreSQLParser::CreatesubscriptionstmtContext *context) = 0;

    virtual std::any visitPublication_name_list(PostgreSQLParser::Publication_name_listContext *context) = 0;

    virtual std::any visitPublication_name_item(PostgreSQLParser::Publication_name_itemContext *context) = 0;

    virtual std::any visitAltersubscriptionstmt(PostgreSQLParser::AltersubscriptionstmtContext *context) = 0;

    virtual std::any visitDropsubscriptionstmt(PostgreSQLParser::DropsubscriptionstmtContext *context) = 0;

    virtual std::any visitRulestmt(PostgreSQLParser::RulestmtContext *context) = 0;

    virtual std::any visitRuleactionlist(PostgreSQLParser::RuleactionlistContext *context) = 0;

    virtual std::any visitRuleactionmulti(PostgreSQLParser::RuleactionmultiContext *context) = 0;

    virtual std::any visitRuleactionstmt(PostgreSQLParser::RuleactionstmtContext *context) = 0;

    virtual std::any visitRuleactionstmtOrEmpty(PostgreSQLParser::RuleactionstmtOrEmptyContext *context) = 0;

    virtual std::any visitEvent(PostgreSQLParser::EventContext *context) = 0;

    virtual std::any visitInstead_(PostgreSQLParser::Instead_Context *context) = 0;

    virtual std::any visitNotifystmt(PostgreSQLParser::NotifystmtContext *context) = 0;

    virtual std::any visitNotify_payload(PostgreSQLParser::Notify_payloadContext *context) = 0;

    virtual std::any visitListenstmt(PostgreSQLParser::ListenstmtContext *context) = 0;

    virtual std::any visitUnlistenstmt(PostgreSQLParser::UnlistenstmtContext *context) = 0;

    virtual std::any visitTransactionstmt(PostgreSQLParser::TransactionstmtContext *context) = 0;

    virtual std::any visitTransaction_(PostgreSQLParser::Transaction_Context *context) = 0;

    virtual std::any visitTransaction_mode_item(PostgreSQLParser::Transaction_mode_itemContext *context) = 0;

    virtual std::any visitTransaction_mode_list(PostgreSQLParser::Transaction_mode_listContext *context) = 0;

    virtual std::any visitTransaction_mode_list_or_empty(PostgreSQLParser::Transaction_mode_list_or_emptyContext *context) = 0;

    virtual std::any visitTransaction_chain_(PostgreSQLParser::Transaction_chain_Context *context) = 0;

    virtual std::any visitViewstmt(PostgreSQLParser::ViewstmtContext *context) = 0;

    virtual std::any visitCheck_option_(PostgreSQLParser::Check_option_Context *context) = 0;

    virtual std::any visitLoadstmt(PostgreSQLParser::LoadstmtContext *context) = 0;

    virtual std::any visitCreatedbstmt(PostgreSQLParser::CreatedbstmtContext *context) = 0;

    virtual std::any visitCreatedb_opt_list(PostgreSQLParser::Createdb_opt_listContext *context) = 0;

    virtual std::any visitCreatedb_opt_items(PostgreSQLParser::Createdb_opt_itemsContext *context) = 0;

    virtual std::any visitCreatedb_opt_item(PostgreSQLParser::Createdb_opt_itemContext *context) = 0;

    virtual std::any visitCreatedb_opt_name(PostgreSQLParser::Createdb_opt_nameContext *context) = 0;

    virtual std::any visitEqual_(PostgreSQLParser::Equal_Context *context) = 0;

    virtual std::any visitAlterdatabasestmt(PostgreSQLParser::AlterdatabasestmtContext *context) = 0;

    virtual std::any visitAlterdatabasesetstmt(PostgreSQLParser::AlterdatabasesetstmtContext *context) = 0;

    virtual std::any visitDropdbstmt(PostgreSQLParser::DropdbstmtContext *context) = 0;

    virtual std::any visitDrop_option_list(PostgreSQLParser::Drop_option_listContext *context) = 0;

    virtual std::any visitDrop_option(PostgreSQLParser::Drop_optionContext *context) = 0;

    virtual std::any visitAltercollationstmt(PostgreSQLParser::AltercollationstmtContext *context) = 0;

    virtual std::any visitAltersystemstmt(PostgreSQLParser::AltersystemstmtContext *context) = 0;

    virtual std::any visitCreatedomainstmt(PostgreSQLParser::CreatedomainstmtContext *context) = 0;

    virtual std::any visitAlterdomainstmt(PostgreSQLParser::AlterdomainstmtContext *context) = 0;

    virtual std::any visitAs_(PostgreSQLParser::As_Context *context) = 0;

    virtual std::any visitAltertsdictionarystmt(PostgreSQLParser::AltertsdictionarystmtContext *context) = 0;

    virtual std::any visitAltertsconfigurationstmt(PostgreSQLParser::AltertsconfigurationstmtContext *context) = 0;

    virtual std::any visitAny_with(PostgreSQLParser::Any_withContext *context) = 0;

    virtual std::any visitCreateconversionstmt(PostgreSQLParser::CreateconversionstmtContext *context) = 0;

    virtual std::any visitClusterstmt(PostgreSQLParser::ClusterstmtContext *context) = 0;

    virtual std::any visitCluster_index_specification(PostgreSQLParser::Cluster_index_specificationContext *context) = 0;

    virtual std::any visitVacuumstmt(PostgreSQLParser::VacuumstmtContext *context) = 0;

    virtual std::any visitAnalyzestmt(PostgreSQLParser::AnalyzestmtContext *context) = 0;

    virtual std::any visitUtility_option_list(PostgreSQLParser::Utility_option_listContext *context) = 0;

    virtual std::any visitVac_analyze_option_list(PostgreSQLParser::Vac_analyze_option_listContext *context) = 0;

    virtual std::any visitAnalyze_keyword(PostgreSQLParser::Analyze_keywordContext *context) = 0;

    virtual std::any visitUtility_option_elem(PostgreSQLParser::Utility_option_elemContext *context) = 0;

    virtual std::any visitUtility_option_name(PostgreSQLParser::Utility_option_nameContext *context) = 0;

    virtual std::any visitUtility_option_arg(PostgreSQLParser::Utility_option_argContext *context) = 0;

    virtual std::any visitVac_analyze_option_elem(PostgreSQLParser::Vac_analyze_option_elemContext *context) = 0;

    virtual std::any visitVac_analyze_option_name(PostgreSQLParser::Vac_analyze_option_nameContext *context) = 0;

    virtual std::any visitVac_analyze_option_arg(PostgreSQLParser::Vac_analyze_option_argContext *context) = 0;

    virtual std::any visitAnalyze_(PostgreSQLParser::Analyze_Context *context) = 0;

    virtual std::any visitVerbose_(PostgreSQLParser::Verbose_Context *context) = 0;

    virtual std::any visitFull_(PostgreSQLParser::Full_Context *context) = 0;

    virtual std::any visitFreeze_(PostgreSQLParser::Freeze_Context *context) = 0;

    virtual std::any visitName_list_(PostgreSQLParser::Name_list_Context *context) = 0;

    virtual std::any visitVacuum_relation(PostgreSQLParser::Vacuum_relationContext *context) = 0;

    virtual std::any visitVacuum_relation_list(PostgreSQLParser::Vacuum_relation_listContext *context) = 0;

    virtual std::any visitVacuum_relation_list_(PostgreSQLParser::Vacuum_relation_list_Context *context) = 0;

    virtual std::any visitExplainstmt(PostgreSQLParser::ExplainstmtContext *context) = 0;

    virtual std::any visitExplainablestmt(PostgreSQLParser::ExplainablestmtContext *context) = 0;

    virtual std::any visitExplain_option_list(PostgreSQLParser::Explain_option_listContext *context) = 0;

    virtual std::any visitExplain_option_elem(PostgreSQLParser::Explain_option_elemContext *context) = 0;

    virtual std::any visitExplain_option_name(PostgreSQLParser::Explain_option_nameContext *context) = 0;

    virtual std::any visitExplain_option_arg(PostgreSQLParser::Explain_option_argContext *context) = 0;

    virtual std::any visitPreparestmt(PostgreSQLParser::PreparestmtContext *context) = 0;

    virtual std::any visitPrep_type_clause(PostgreSQLParser::Prep_type_clauseContext *context) = 0;

    virtual std::any visitPreparablestmt(PostgreSQLParser::PreparablestmtContext *context) = 0;

    virtual std::any visitExecutestmt(PostgreSQLParser::ExecutestmtContext *context) = 0;

    virtual std::any visitExecute_param_clause(PostgreSQLParser::Execute_param_clauseContext *context) = 0;

    virtual std::any visitDeallocatestmt(PostgreSQLParser::DeallocatestmtContext *context) = 0;

    virtual std::any visitInsertstmt(PostgreSQLParser::InsertstmtContext *context) = 0;

    virtual std::any visitInsert_target(PostgreSQLParser::Insert_targetContext *context) = 0;

    virtual std::any visitInsert_rest(PostgreSQLParser::Insert_restContext *context) = 0;

    virtual std::any visitOverride_kind(PostgreSQLParser::Override_kindContext *context) = 0;

    virtual std::any visitInsert_column_list(PostgreSQLParser::Insert_column_listContext *context) = 0;

    virtual std::any visitInsert_column_item(PostgreSQLParser::Insert_column_itemContext *context) = 0;

    virtual std::any visitOn_conflict_(PostgreSQLParser::On_conflict_Context *context) = 0;

    virtual std::any visitConf_expr_(PostgreSQLParser::Conf_expr_Context *context) = 0;

    virtual std::any visitReturning_clause(PostgreSQLParser::Returning_clauseContext *context) = 0;

    virtual std::any visitMergestmt(PostgreSQLParser::MergestmtContext *context) = 0;

    virtual std::any visitMerge_insert_clause(PostgreSQLParser::Merge_insert_clauseContext *context) = 0;

    virtual std::any visitMerge_update_clause(PostgreSQLParser::Merge_update_clauseContext *context) = 0;

    virtual std::any visitMerge_delete_clause(PostgreSQLParser::Merge_delete_clauseContext *context) = 0;

    virtual std::any visitDeletestmt(PostgreSQLParser::DeletestmtContext *context) = 0;

    virtual std::any visitUsing_clause(PostgreSQLParser::Using_clauseContext *context) = 0;

    virtual std::any visitLockstmt(PostgreSQLParser::LockstmtContext *context) = 0;

    virtual std::any visitLock_(PostgreSQLParser::Lock_Context *context) = 0;

    virtual std::any visitLock_type(PostgreSQLParser::Lock_typeContext *context) = 0;

    virtual std::any visitNowait_(PostgreSQLParser::Nowait_Context *context) = 0;

    virtual std::any visitNowait_or_skip_(PostgreSQLParser::Nowait_or_skip_Context *context) = 0;

    virtual std::any visitUpdatestmt(PostgreSQLParser::UpdatestmtContext *context) = 0;

    virtual std::any visitSet_clause_list(PostgreSQLParser::Set_clause_listContext *context) = 0;

    virtual std::any visitSet_clause(PostgreSQLParser::Set_clauseContext *context) = 0;

    virtual std::any visitSet_target(PostgreSQLParser::Set_targetContext *context) = 0;

    virtual std::any visitSet_target_list(PostgreSQLParser::Set_target_listContext *context) = 0;

    virtual std::any visitDeclarecursorstmt(PostgreSQLParser::DeclarecursorstmtContext *context) = 0;

    virtual std::any visitCursor_name(PostgreSQLParser::Cursor_nameContext *context) = 0;

    virtual std::any visitCursor_options(PostgreSQLParser::Cursor_optionsContext *context) = 0;

    virtual std::any visitHold_(PostgreSQLParser::Hold_Context *context) = 0;

    virtual std::any visitSelectstmt(PostgreSQLParser::SelectstmtContext *context) = 0;

    virtual std::any visitSelect_with_parens(PostgreSQLParser::Select_with_parensContext *context) = 0;

    virtual std::any visitSelect_no_parens(PostgreSQLParser::Select_no_parensContext *context) = 0;

    virtual std::any visitSelect_clause(PostgreSQLParser::Select_clauseContext *context) = 0;

    virtual std::any visitSimple_select_intersect(PostgreSQLParser::Simple_select_intersectContext *context) = 0;

    virtual std::any visitSimple_select_pramary(PostgreSQLParser::Simple_select_pramaryContext *context) = 0;

    virtual std::any visitWith_clause(PostgreSQLParser::With_clauseContext *context) = 0;

    virtual std::any visitCte_list(PostgreSQLParser::Cte_listContext *context) = 0;

    virtual std::any visitCommon_table_expr(PostgreSQLParser::Common_table_exprContext *context) = 0;

    virtual std::any visitMaterialized_(PostgreSQLParser::Materialized_Context *context) = 0;

    virtual std::any visitWith_clause_(PostgreSQLParser::With_clause_Context *context) = 0;

    virtual std::any visitInto_clause(PostgreSQLParser::Into_clauseContext *context) = 0;

    virtual std::any visitStrict_(PostgreSQLParser::Strict_Context *context) = 0;

    virtual std::any visitOpttempTableName(PostgreSQLParser::OpttempTableNameContext *context) = 0;

    virtual std::any visitTable_(PostgreSQLParser::Table_Context *context) = 0;

    virtual std::any visitAll_or_distinct(PostgreSQLParser::All_or_distinctContext *context) = 0;

    virtual std::any visitDistinct_clause(PostgreSQLParser::Distinct_clauseContext *context) = 0;

    virtual std::any visitAll_clause_(PostgreSQLParser::All_clause_Context *context) = 0;

    virtual std::any visitSort_clause_(PostgreSQLParser::Sort_clause_Context *context) = 0;

    virtual std::any visitSort_clause(PostgreSQLParser::Sort_clauseContext *context) = 0;

    virtual std::any visitSortby_list(PostgreSQLParser::Sortby_listContext *context) = 0;

    virtual std::any visitSortby(PostgreSQLParser::SortbyContext *context) = 0;

    virtual std::any visitSelect_limit(PostgreSQLParser::Select_limitContext *context) = 0;

    virtual std::any visitSelect_limit_(PostgreSQLParser::Select_limit_Context *context) = 0;

    virtual std::any visitLimit_clause(PostgreSQLParser::Limit_clauseContext *context) = 0;

    virtual std::any visitOffset_clause(PostgreSQLParser::Offset_clauseContext *context) = 0;

    virtual std::any visitSelect_limit_value(PostgreSQLParser::Select_limit_valueContext *context) = 0;

    virtual std::any visitSelect_offset_value(PostgreSQLParser::Select_offset_valueContext *context) = 0;

    virtual std::any visitSelect_fetch_first_value(PostgreSQLParser::Select_fetch_first_valueContext *context) = 0;

    virtual std::any visitI_or_f_const(PostgreSQLParser::I_or_f_constContext *context) = 0;

    virtual std::any visitRow_or_rows(PostgreSQLParser::Row_or_rowsContext *context) = 0;

    virtual std::any visitFirst_or_next(PostgreSQLParser::First_or_nextContext *context) = 0;

    virtual std::any visitGroup_clause(PostgreSQLParser::Group_clauseContext *context) = 0;

    virtual std::any visitGroup_by_list(PostgreSQLParser::Group_by_listContext *context) = 0;

    virtual std::any visitGroup_by_item(PostgreSQLParser::Group_by_itemContext *context) = 0;

    virtual std::any visitEmpty_grouping_set(PostgreSQLParser::Empty_grouping_setContext *context) = 0;

    virtual std::any visitRollup_clause(PostgreSQLParser::Rollup_clauseContext *context) = 0;

    virtual std::any visitCube_clause(PostgreSQLParser::Cube_clauseContext *context) = 0;

    virtual std::any visitGrouping_sets_clause(PostgreSQLParser::Grouping_sets_clauseContext *context) = 0;

    virtual std::any visitHaving_clause(PostgreSQLParser::Having_clauseContext *context) = 0;

    virtual std::any visitFor_locking_clause(PostgreSQLParser::For_locking_clauseContext *context) = 0;

    virtual std::any visitFor_locking_clause_(PostgreSQLParser::For_locking_clause_Context *context) = 0;

    virtual std::any visitFor_locking_items(PostgreSQLParser::For_locking_itemsContext *context) = 0;

    virtual std::any visitFor_locking_item(PostgreSQLParser::For_locking_itemContext *context) = 0;

    virtual std::any visitFor_locking_strength(PostgreSQLParser::For_locking_strengthContext *context) = 0;

    virtual std::any visitLocked_rels_list(PostgreSQLParser::Locked_rels_listContext *context) = 0;

    virtual std::any visitValues_clause(PostgreSQLParser::Values_clauseContext *context) = 0;

    virtual std::any visitFrom_clause(PostgreSQLParser::From_clauseContext *context) = 0;

    virtual std::any visitFrom_list(PostgreSQLParser::From_listContext *context) = 0;

    virtual std::any visitTable_ref(PostgreSQLParser::Table_refContext *context) = 0;

    virtual std::any visitAlias_clause(PostgreSQLParser::Alias_clauseContext *context) = 0;

    virtual std::any visitFunc_alias_clause(PostgreSQLParser::Func_alias_clauseContext *context) = 0;

    virtual std::any visitJoin_type(PostgreSQLParser::Join_typeContext *context) = 0;

    virtual std::any visitJoin_qual(PostgreSQLParser::Join_qualContext *context) = 0;

    virtual std::any visitRelation_expr(PostgreSQLParser::Relation_exprContext *context) = 0;

    virtual std::any visitRelation_expr_list(PostgreSQLParser::Relation_expr_listContext *context) = 0;

    virtual std::any visitRelation_expr_opt_alias(PostgreSQLParser::Relation_expr_opt_aliasContext *context) = 0;

    virtual std::any visitTablesample_clause(PostgreSQLParser::Tablesample_clauseContext *context) = 0;

    virtual std::any visitRepeatable_clause_(PostgreSQLParser::Repeatable_clause_Context *context) = 0;

    virtual std::any visitFunc_table(PostgreSQLParser::Func_tableContext *context) = 0;

    virtual std::any visitRowsfrom_item(PostgreSQLParser::Rowsfrom_itemContext *context) = 0;

    virtual std::any visitRowsfrom_list(PostgreSQLParser::Rowsfrom_listContext *context) = 0;

    virtual std::any visitCol_def_list_(PostgreSQLParser::Col_def_list_Context *context) = 0;

    virtual std::any visitOrdinality_(PostgreSQLParser::Ordinality_Context *context) = 0;

    virtual std::any visitWhere_clause(PostgreSQLParser::Where_clauseContext *context) = 0;

    virtual std::any visitWhere_or_current_clause(PostgreSQLParser::Where_or_current_clauseContext *context) = 0;

    virtual std::any visitOpttablefuncelementlist(PostgreSQLParser::OpttablefuncelementlistContext *context) = 0;

    virtual std::any visitTablefuncelementlist(PostgreSQLParser::TablefuncelementlistContext *context) = 0;

    virtual std::any visitTablefuncelement(PostgreSQLParser::TablefuncelementContext *context) = 0;

    virtual std::any visitXmltable(PostgreSQLParser::XmltableContext *context) = 0;

    virtual std::any visitXmltable_column_list(PostgreSQLParser::Xmltable_column_listContext *context) = 0;

    virtual std::any visitXmltable_column_el(PostgreSQLParser::Xmltable_column_elContext *context) = 0;

    virtual std::any visitXmltable_column_option_list(PostgreSQLParser::Xmltable_column_option_listContext *context) = 0;

    virtual std::any visitXmltable_column_option_el(PostgreSQLParser::Xmltable_column_option_elContext *context) = 0;

    virtual std::any visitXml_namespace_list(PostgreSQLParser::Xml_namespace_listContext *context) = 0;

    virtual std::any visitXml_namespace_el(PostgreSQLParser::Xml_namespace_elContext *context) = 0;

    virtual std::any visitTypename(PostgreSQLParser::TypenameContext *context) = 0;

    virtual std::any visitOpt_array_bounds(PostgreSQLParser::Opt_array_boundsContext *context) = 0;

    virtual std::any visitSimpletypename(PostgreSQLParser::SimpletypenameContext *context) = 0;

    virtual std::any visitConsttypename(PostgreSQLParser::ConsttypenameContext *context) = 0;

    virtual std::any visitGenerictype(PostgreSQLParser::GenerictypeContext *context) = 0;

    virtual std::any visitType_modifiers_(PostgreSQLParser::Type_modifiers_Context *context) = 0;

    virtual std::any visitNumeric(PostgreSQLParser::NumericContext *context) = 0;

    virtual std::any visitFloat_(PostgreSQLParser::Float_Context *context) = 0;

    virtual std::any visitBit(PostgreSQLParser::BitContext *context) = 0;

    virtual std::any visitConstbit(PostgreSQLParser::ConstbitContext *context) = 0;

    virtual std::any visitBitwithlength(PostgreSQLParser::BitwithlengthContext *context) = 0;

    virtual std::any visitBitwithoutlength(PostgreSQLParser::BitwithoutlengthContext *context) = 0;

    virtual std::any visitCharacter(PostgreSQLParser::CharacterContext *context) = 0;

    virtual std::any visitConstcharacter(PostgreSQLParser::ConstcharacterContext *context) = 0;

    virtual std::any visitCharacter_c(PostgreSQLParser::Character_cContext *context) = 0;

    virtual std::any visitVarying_(PostgreSQLParser::Varying_Context *context) = 0;

    virtual std::any visitConstdatetime(PostgreSQLParser::ConstdatetimeContext *context) = 0;

    virtual std::any visitConstinterval(PostgreSQLParser::ConstintervalContext *context) = 0;

    virtual std::any visitTimezone_(PostgreSQLParser::Timezone_Context *context) = 0;

    virtual std::any visitInterval_(PostgreSQLParser::Interval_Context *context) = 0;

    virtual std::any visitInterval_second(PostgreSQLParser::Interval_secondContext *context) = 0;

    virtual std::any visitJsonType(PostgreSQLParser::JsonTypeContext *context) = 0;

    virtual std::any visitEscape_(PostgreSQLParser::Escape_Context *context) = 0;

    virtual std::any visitA_expr(PostgreSQLParser::A_exprContext *context) = 0;

    virtual std::any visitA_expr_qual(PostgreSQLParser::A_expr_qualContext *context) = 0;

    virtual std::any visitA_expr_lessless(PostgreSQLParser::A_expr_lesslessContext *context) = 0;

    virtual std::any visitA_expr_or(PostgreSQLParser::A_expr_orContext *context) = 0;

    virtual std::any visitA_expr_and(PostgreSQLParser::A_expr_andContext *context) = 0;

    virtual std::any visitA_expr_between(PostgreSQLParser::A_expr_betweenContext *context) = 0;

    virtual std::any visitA_expr_in(PostgreSQLParser::A_expr_inContext *context) = 0;

    virtual std::any visitA_expr_unary_not(PostgreSQLParser::A_expr_unary_notContext *context) = 0;

    virtual std::any visitA_expr_isnull(PostgreSQLParser::A_expr_isnullContext *context) = 0;

    virtual std::any visitA_expr_is_not(PostgreSQLParser::A_expr_is_notContext *context) = 0;

    virtual std::any visitA_expr_compare(PostgreSQLParser::A_expr_compareContext *context) = 0;

    virtual std::any visitA_expr_like(PostgreSQLParser::A_expr_likeContext *context) = 0;

    virtual std::any visitA_expr_qual_op(PostgreSQLParser::A_expr_qual_opContext *context) = 0;

    virtual std::any visitA_expr_unary_qualop(PostgreSQLParser::A_expr_unary_qualopContext *context) = 0;

    virtual std::any visitA_expr_add(PostgreSQLParser::A_expr_addContext *context) = 0;

    virtual std::any visitA_expr_mul(PostgreSQLParser::A_expr_mulContext *context) = 0;

    virtual std::any visitA_expr_caret(PostgreSQLParser::A_expr_caretContext *context) = 0;

    virtual std::any visitA_expr_unary_sign(PostgreSQLParser::A_expr_unary_signContext *context) = 0;

    virtual std::any visitA_expr_at_time_zone(PostgreSQLParser::A_expr_at_time_zoneContext *context) = 0;

    virtual std::any visitA_expr_collate(PostgreSQLParser::A_expr_collateContext *context) = 0;

    virtual std::any visitA_expr_typecast(PostgreSQLParser::A_expr_typecastContext *context) = 0;

    virtual std::any visitB_expr(PostgreSQLParser::B_exprContext *context) = 0;

    virtual std::any visitC_expr_exists(PostgreSQLParser::C_expr_existsContext *context) = 0;

    virtual std::any visitC_expr_expr(PostgreSQLParser::C_expr_exprContext *context) = 0;

    virtual std::any visitC_expr_case(PostgreSQLParser::C_expr_caseContext *context) = 0;

    virtual std::any visitPlsqlvariablename(PostgreSQLParser::PlsqlvariablenameContext *context) = 0;

    virtual std::any visitFunc_application(PostgreSQLParser::Func_applicationContext *context) = 0;

    virtual std::any visitFunc_expr(PostgreSQLParser::Func_exprContext *context) = 0;

    virtual std::any visitFunc_expr_windowless(PostgreSQLParser::Func_expr_windowlessContext *context) = 0;

    virtual std::any visitFunc_expr_common_subexpr(PostgreSQLParser::Func_expr_common_subexprContext *context) = 0;

    virtual std::any visitXml_root_version(PostgreSQLParser::Xml_root_versionContext *context) = 0;

    virtual std::any visitXml_root_standalone_(PostgreSQLParser::Xml_root_standalone_Context *context) = 0;

    virtual std::any visitXml_attributes(PostgreSQLParser::Xml_attributesContext *context) = 0;

    virtual std::any visitXml_attribute_list(PostgreSQLParser::Xml_attribute_listContext *context) = 0;

    virtual std::any visitXml_attribute_el(PostgreSQLParser::Xml_attribute_elContext *context) = 0;

    virtual std::any visitDocument_or_content(PostgreSQLParser::Document_or_contentContext *context) = 0;

    virtual std::any visitXml_whitespace_option(PostgreSQLParser::Xml_whitespace_optionContext *context) = 0;

    virtual std::any visitXmlexists_argument(PostgreSQLParser::Xmlexists_argumentContext *context) = 0;

    virtual std::any visitXml_passing_mech(PostgreSQLParser::Xml_passing_mechContext *context) = 0;

    virtual std::any visitWithin_group_clause(PostgreSQLParser::Within_group_clauseContext *context) = 0;

    virtual std::any visitFilter_clause(PostgreSQLParser::Filter_clauseContext *context) = 0;

    virtual std::any visitWindow_clause(PostgreSQLParser::Window_clauseContext *context) = 0;

    virtual std::any visitWindow_definition_list(PostgreSQLParser::Window_definition_listContext *context) = 0;

    virtual std::any visitWindow_definition(PostgreSQLParser::Window_definitionContext *context) = 0;

    virtual std::any visitOver_clause(PostgreSQLParser::Over_clauseContext *context) = 0;

    virtual std::any visitWindow_specification(PostgreSQLParser::Window_specificationContext *context) = 0;

    virtual std::any visitExisting_window_name_(PostgreSQLParser::Existing_window_name_Context *context) = 0;

    virtual std::any visitPartition_clause_(PostgreSQLParser::Partition_clause_Context *context) = 0;

    virtual std::any visitFrame_clause_(PostgreSQLParser::Frame_clause_Context *context) = 0;

    virtual std::any visitFrame_extent(PostgreSQLParser::Frame_extentContext *context) = 0;

    virtual std::any visitFrame_bound(PostgreSQLParser::Frame_boundContext *context) = 0;

    virtual std::any visitWindow_exclusion_clause_(PostgreSQLParser::Window_exclusion_clause_Context *context) = 0;

    virtual std::any visitRow(PostgreSQLParser::RowContext *context) = 0;

    virtual std::any visitExplicit_row(PostgreSQLParser::Explicit_rowContext *context) = 0;

    virtual std::any visitImplicit_row(PostgreSQLParser::Implicit_rowContext *context) = 0;

    virtual std::any visitSub_type(PostgreSQLParser::Sub_typeContext *context) = 0;

    virtual std::any visitAll_op(PostgreSQLParser::All_opContext *context) = 0;

    virtual std::any visitMathop(PostgreSQLParser::MathopContext *context) = 0;

    virtual std::any visitQual_op(PostgreSQLParser::Qual_opContext *context) = 0;

    virtual std::any visitQual_all_op(PostgreSQLParser::Qual_all_opContext *context) = 0;

    virtual std::any visitSubquery_Op(PostgreSQLParser::Subquery_OpContext *context) = 0;

    virtual std::any visitExpr_list(PostgreSQLParser::Expr_listContext *context) = 0;

    virtual std::any visitFunc_arg_list(PostgreSQLParser::Func_arg_listContext *context) = 0;

    virtual std::any visitFunc_arg_expr(PostgreSQLParser::Func_arg_exprContext *context) = 0;

    virtual std::any visitType_list(PostgreSQLParser::Type_listContext *context) = 0;

    virtual std::any visitArray_expr(PostgreSQLParser::Array_exprContext *context) = 0;

    virtual std::any visitArray_expr_list(PostgreSQLParser::Array_expr_listContext *context) = 0;

    virtual std::any visitExtract_list(PostgreSQLParser::Extract_listContext *context) = 0;

    virtual std::any visitExtract_arg(PostgreSQLParser::Extract_argContext *context) = 0;

    virtual std::any visitUnicode_normal_form(PostgreSQLParser::Unicode_normal_formContext *context) = 0;

    virtual std::any visitOverlay_list(PostgreSQLParser::Overlay_listContext *context) = 0;

    virtual std::any visitPosition_list(PostgreSQLParser::Position_listContext *context) = 0;

    virtual std::any visitSubstr_list(PostgreSQLParser::Substr_listContext *context) = 0;

    virtual std::any visitTrim_list(PostgreSQLParser::Trim_listContext *context) = 0;

    virtual std::any visitIn_expr_select(PostgreSQLParser::In_expr_selectContext *context) = 0;

    virtual std::any visitIn_expr_list(PostgreSQLParser::In_expr_listContext *context) = 0;

    virtual std::any visitCase_expr(PostgreSQLParser::Case_exprContext *context) = 0;

    virtual std::any visitWhen_clause_list(PostgreSQLParser::When_clause_listContext *context) = 0;

    virtual std::any visitWhen_clause(PostgreSQLParser::When_clauseContext *context) = 0;

    virtual std::any visitCase_default(PostgreSQLParser::Case_defaultContext *context) = 0;

    virtual std::any visitCase_arg(PostgreSQLParser::Case_argContext *context) = 0;

    virtual std::any visitColumnref(PostgreSQLParser::ColumnrefContext *context) = 0;

    virtual std::any visitIndirection_el(PostgreSQLParser::Indirection_elContext *context) = 0;

    virtual std::any visitSlice_bound_(PostgreSQLParser::Slice_bound_Context *context) = 0;

    virtual std::any visitIndirection(PostgreSQLParser::IndirectionContext *context) = 0;

    virtual std::any visitOpt_indirection(PostgreSQLParser::Opt_indirectionContext *context) = 0;

    virtual std::any visitJson_passing_clause(PostgreSQLParser::Json_passing_clauseContext *context) = 0;

    virtual std::any visitJson_arguments(PostgreSQLParser::Json_argumentsContext *context) = 0;

    virtual std::any visitJson_argument(PostgreSQLParser::Json_argumentContext *context) = 0;

    virtual std::any visitJson_wrapper_behavior(PostgreSQLParser::Json_wrapper_behaviorContext *context) = 0;

    virtual std::any visitJson_behavior(PostgreSQLParser::Json_behaviorContext *context) = 0;

    virtual std::any visitJson_behavior_type(PostgreSQLParser::Json_behavior_typeContext *context) = 0;

    virtual std::any visitJson_behavior_clause(PostgreSQLParser::Json_behavior_clauseContext *context) = 0;

    virtual std::any visitJson_on_error_clause(PostgreSQLParser::Json_on_error_clauseContext *context) = 0;

    virtual std::any visitJson_value_expr(PostgreSQLParser::Json_value_exprContext *context) = 0;

    virtual std::any visitJson_format_clause(PostgreSQLParser::Json_format_clauseContext *context) = 0;

    virtual std::any visitJson_quotes_clause(PostgreSQLParser::Json_quotes_clauseContext *context) = 0;

    virtual std::any visitJson_returning_clause(PostgreSQLParser::Json_returning_clauseContext *context) = 0;

    virtual std::any visitJson_predicate_type_constraint(PostgreSQLParser::Json_predicate_type_constraintContext *context) = 0;

    virtual std::any visitJson_key_uniqueness_constraint(PostgreSQLParser::Json_key_uniqueness_constraintContext *context) = 0;

    virtual std::any visitJson_name_and_value_list(PostgreSQLParser::Json_name_and_value_listContext *context) = 0;

    virtual std::any visitJson_name_and_value(PostgreSQLParser::Json_name_and_valueContext *context) = 0;

    virtual std::any visitJson_object_constructor_null_clause(PostgreSQLParser::Json_object_constructor_null_clauseContext *context) = 0;

    virtual std::any visitJson_array_constructor_null_clause(PostgreSQLParser::Json_array_constructor_null_clauseContext *context) = 0;

    virtual std::any visitJson_value_expr_list(PostgreSQLParser::Json_value_expr_listContext *context) = 0;

    virtual std::any visitJson_aggregate_func(PostgreSQLParser::Json_aggregate_funcContext *context) = 0;

    virtual std::any visitJson_array_aggregate_order_by_clause(PostgreSQLParser::Json_array_aggregate_order_by_clauseContext *context) = 0;

    virtual std::any visitTarget_list_(PostgreSQLParser::Target_list_Context *context) = 0;

    virtual std::any visitTarget_list(PostgreSQLParser::Target_listContext *context) = 0;

    virtual std::any visitTarget_label(PostgreSQLParser::Target_labelContext *context) = 0;

    virtual std::any visitTarget_star(PostgreSQLParser::Target_starContext *context) = 0;

    virtual std::any visitQualified_name_list(PostgreSQLParser::Qualified_name_listContext *context) = 0;

    virtual std::any visitQualified_name(PostgreSQLParser::Qualified_nameContext *context) = 0;

    virtual std::any visitName_list(PostgreSQLParser::Name_listContext *context) = 0;

    virtual std::any visitName(PostgreSQLParser::NameContext *context) = 0;

    virtual std::any visitAttr_name(PostgreSQLParser::Attr_nameContext *context) = 0;

    virtual std::any visitFile_name(PostgreSQLParser::File_nameContext *context) = 0;

    virtual std::any visitFunc_name(PostgreSQLParser::Func_nameContext *context) = 0;

    virtual std::any visitAexprconst(PostgreSQLParser::AexprconstContext *context) = 0;

    virtual std::any visitXconst(PostgreSQLParser::XconstContext *context) = 0;

    virtual std::any visitBconst(PostgreSQLParser::BconstContext *context) = 0;

    virtual std::any visitFconst(PostgreSQLParser::FconstContext *context) = 0;

    virtual std::any visitIconst(PostgreSQLParser::IconstContext *context) = 0;

    virtual std::any visitSconst(PostgreSQLParser::SconstContext *context) = 0;

    virtual std::any visitAnysconst(PostgreSQLParser::AnysconstContext *context) = 0;

    virtual std::any visitUescape_(PostgreSQLParser::Uescape_Context *context) = 0;

    virtual std::any visitSignediconst(PostgreSQLParser::SignediconstContext *context) = 0;

    virtual std::any visitRoleid(PostgreSQLParser::RoleidContext *context) = 0;

    virtual std::any visitRolespec(PostgreSQLParser::RolespecContext *context) = 0;

    virtual std::any visitRole_list(PostgreSQLParser::Role_listContext *context) = 0;

    virtual std::any visitColid(PostgreSQLParser::ColidContext *context) = 0;

    virtual std::any visitType_function_name(PostgreSQLParser::Type_function_nameContext *context) = 0;

    virtual std::any visitNonreservedword(PostgreSQLParser::NonreservedwordContext *context) = 0;

    virtual std::any visitColLabel(PostgreSQLParser::ColLabelContext *context) = 0;

    virtual std::any visitBareColLabel(PostgreSQLParser::BareColLabelContext *context) = 0;

    virtual std::any visitUnreserved_keyword(PostgreSQLParser::Unreserved_keywordContext *context) = 0;

    virtual std::any visitCol_name_keyword(PostgreSQLParser::Col_name_keywordContext *context) = 0;

    virtual std::any visitType_func_name_keyword(PostgreSQLParser::Type_func_name_keywordContext *context) = 0;

    virtual std::any visitReserved_keyword(PostgreSQLParser::Reserved_keywordContext *context) = 0;

    virtual std::any visitBare_label_keyword(PostgreSQLParser::Bare_label_keywordContext *context) = 0;

    virtual std::any visitAny_identifier(PostgreSQLParser::Any_identifierContext *context) = 0;

    virtual std::any visitIdentifier(PostgreSQLParser::IdentifierContext *context) = 0;


};

