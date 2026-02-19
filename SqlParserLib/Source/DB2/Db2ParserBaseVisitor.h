
// Generated from Db2Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Db2ParserVisitor.h"


namespace antlrcpp_db2 {

/**
 * This class provides an empty implementation of Db2ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Db2ParserBaseVisitor : public Db2ParserVisitor {
public:

  virtual std::any visitDb2_file(Db2Parser::Db2_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBatch(Db2Parser::BatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_statement(Db2Parser::Sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_schema_statement(Db2Parser::Sql_schema_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_data_change_statement(Db2Parser::Sql_data_change_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_data_statement(Db2Parser::Sql_data_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_transaction_statement(Db2Parser::Sql_transaction_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_connection_statement(Db2Parser::Sql_connection_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_dynamic_statement(Db2Parser::Sql_dynamic_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_session_statement(Db2Parser::Sql_session_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_embedded_host_language_statement(Db2Parser::Sql_embedded_host_language_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_constrol_statement(Db2Parser::Sql_constrol_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_statement(Db2Parser::Select_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRead_only_clause(Db2Parser::Read_only_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_clause(Db2Parser::Update_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptimize_for_clause(Db2Parser::Optimize_for_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConcurrent_access_resolution_clause(Db2Parser::Concurrent_access_resolution_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement(Db2Parser::Delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement_searched_delete(Db2Parser::Delete_statement_searched_deleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_or_view_name(Db2Parser::Table_or_view_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_statement_positioned_delete(Db2Parser::Delete_statement_positioned_deleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_deltalake_statement(Db2Parser::Delete_deltalake_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_statement(Db2Parser::Insert_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_datalake_statement(Db2Parser::Insert_datalake_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValues_item(Db2Parser::Values_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMerge_statement(Db2Parser::Merge_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_view_fullselect(Db2Parser::Table_view_fullselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommon_table_expression_list(Db2Parser::Common_table_expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatching_condition(Db2Parser::Matching_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModification_operation(Db2Parser::Modification_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_operation(Db2Parser::Update_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_operation(Db2Parser::Delete_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInsert_operation(Db2Parser::Insert_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_null_default_list(Db2Parser::Expr_null_default_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsolation_level(Db2Parser::Isolation_levelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTruncate_statement(Db2Parser::Truncate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statement(Db2Parser::Update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statement_searched_update(Db2Parser::Update_statement_searched_updateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSkip_wait(Db2Parser::Skip_waitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_statement_positioned_update(Db2Parser::Update_statement_positioned_updateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude_columns(Db2Parser::Include_columnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_clause(Db2Parser::Assignment_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_item(Db2Parser::Assignment_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod_clause(Db2Parser::Period_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTime_sec(Db2Parser::Time_secContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUpdate_datalake_statement(Db2Parser::Update_datalake_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_database_authorities_statement(Db2Parser::Grant_database_authorities_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_privilege_list(Db2Parser::Db_privilege_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_privilege(Db2Parser::Db_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee(Db2Parser::GranteeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee_user_group(Db2Parser::Grantee_user_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_group(Db2Parser::User_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee_list(Db2Parser::Grantee_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee_list_public(Db2Parser::Grantee_list_publicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrantee_list_user_group(Db2Parser::Grantee_list_user_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_exemption_statement(Db2Parser::Grant_exemption_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExemption_privilege(Db2Parser::Exemption_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_global_variable_privileges_statement(Db2Parser::Grant_global_variable_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_privilege(Db2Parser::Variable_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRead_write(Db2Parser::Read_writeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_grant_option(Db2Parser::With_grant_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_index_privileges_statement(Db2Parser::Grant_index_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_module_privileges_statement(Db2Parser::Grant_module_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_package_privileges_statement(Db2Parser::Grant_package_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackage_privilege_list(Db2Parser::Package_privilege_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackage_privilege(Db2Parser::Package_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_role_statement(Db2Parser::Grant_role_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRole_list(Db2Parser::Role_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_routine_privileges_statement(Db2Parser::Grant_routine_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_schema_privileges_statement(Db2Parser::Grant_schema_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_privilege_list(Db2Parser::Schema_privilege_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_privilege(Db2Parser::Schema_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_security_label_statement(Db2Parser::Grant_security_label_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_sequence_privileges_statement(Db2Parser::Grant_sequence_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_privilege_list(Db2Parser::Sequence_privilege_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_privilege(Db2Parser::Sequence_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_server_privileges_statement(Db2Parser::Grant_server_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_setsessionuser_privilege_statement(Db2Parser::Grant_setsessionuser_privilege_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_list(Db2Parser::User_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_auth(Db2Parser::User_authContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_table_space_privileges_statement(Db2Parser::Grant_table_space_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_table_view_or_nickname_privileges_statement(Db2Parser::Grant_table_view_or_nickname_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTvn_privilege_list(Db2Parser::Tvn_privilege_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTvn_privilege(Db2Parser::Tvn_privilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name_list_paren(Db2Parser::Column_name_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name_list(Db2Parser::Column_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_workload_privileges_statement(Db2Parser::Grant_workload_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_xsr_object_privileges_statement(Db2Parser::Grant_xsr_object_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_database_authorities_statement(Db2Parser::Revoke_database_authorities_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBy_all(Db2Parser::By_allContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_exemption_statement(Db2Parser::Revoke_exemption_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_global_variable_privileges_statement(Db2Parser::Revoke_global_variable_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_index_privileges_statement(Db2Parser::Revoke_index_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_module_privileges_statement(Db2Parser::Revoke_module_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_package_privileges_statement(Db2Parser::Revoke_package_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_role_statement(Db2Parser::Revoke_role_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_routine_privileges_statement(Db2Parser::Revoke_routine_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_schema_privileges_statement(Db2Parser::Revoke_schema_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_security_label_statement(Db2Parser::Revoke_security_label_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_sequence_privileges_statement(Db2Parser::Revoke_sequence_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_server_privileges_statement(Db2Parser::Revoke_server_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_setsessionuser_privilege_statement(Db2Parser::Revoke_setsessionuser_privilege_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_table_space_privileges_statement(Db2Parser::Revoke_table_space_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_table_view_or_nickname_privileges_statement(Db2Parser::Revoke_table_view_or_nickname_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_workload_privileges_statement(Db2Parser::Revoke_workload_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRevoke_xsr_object_privileges_statement(Db2Parser::Revoke_xsr_object_privileges_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_group_role(Db2Parser::User_group_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollback_statement(Db2Parser::Rollback_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavepoint_statement(Db2Parser::Savepoint_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelease_savepoint_statement(Db2Parser::Release_savepoint_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllocate_cursor_statement(Db2Parser::Allocate_cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_audit_policy_statement(Db2Parser::Alter_audit_policy_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatus_spec(Db2Parser::Status_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormal_audit(Db2Parser::Normal_auditContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_bufferpool_statement(Db2Parser::Alter_bufferpool_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImmediate_deferred(Db2Parser::Immediate_deferredContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_database_partition_group_statement(Db2Parser::Alter_database_partition_group_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_group_list_item(Db2Parser::Db_partition_group_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_num_nums(Db2Parser::Db_partition_num_numsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partitions_clause(Db2Parser::Db_partitions_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_options(Db2Parser::Db_partition_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_database_statement(Db2Parser::Alter_database_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_database_opts(Db2Parser::Alter_database_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_event_monitor_statement(Db2Parser::Alter_event_monitor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_event_monitor_opts(Db2Parser::Alter_event_monitor_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_function_statement(Db2Parser::Alter_function_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_function_opts(Db2Parser::Alter_function_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_designator(Db2Parser::Function_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_list(Db2Parser::Data_type_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_list_paren(Db2Parser::Data_type_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_histogram_template_statement(Db2Parser::Alter_histogram_template_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_index_statement(Db2Parser::Alter_index_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitYes_no(Db2Parser::Yes_noContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_mask_statement(Db2Parser::Alter_mask_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnable_disable(Db2Parser::Enable_disableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_method_statement(Db2Parser::Alter_method_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_designator(Db2Parser::Method_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_model_statement(Db2Parser::Alter_model_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_module_statement(Db2Parser::Alter_module_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_module_opts(Db2Parser::Alter_module_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_function_definition(Db2Parser::Module_function_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_procedure_definition(Db2Parser::Module_procedure_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_type_definition(Db2Parser::Module_type_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_variable_definition(Db2Parser::Module_variable_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_condition_definition(Db2Parser::Module_condition_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_object_identification(Db2Parser::Module_object_identificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_function_designator(Db2Parser::Module_function_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_procedure_designator(Db2Parser::Module_procedure_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_nickname_statement(Db2Parser::Alter_nickname_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_nickname_opts_1(Db2Parser::Alter_nickname_opts_1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_nickname_opts_1_item(Db2Parser::Alter_nickname_opts_1_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_nickname_opts_2(Db2Parser::Alter_nickname_opts_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_nickname_opts_2_item(Db2Parser::Alter_nickname_opts_2_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraint_alteration(Db2Parser::Constraint_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_package_statement(Db2Parser::Alter_package_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_package_opts(Db2Parser::Alter_package_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_permission_statement(Db2Parser::Alter_permission_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_procedure_external_statement(Db2Parser::Alter_procedure_external_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_procedure_external_opts(Db2Parser::Alter_procedure_external_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_designator(Db2Parser::Procedure_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_procedure_sourced_statement(Db2Parser::Alter_procedure_sourced_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_alteration(Db2Parser::Parameter_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_procedure_sql_statement(Db2Parser::Alter_procedure_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_schema_statement(Db2Parser::Alter_schema_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNone_changes(Db2Parser::None_changesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_security_label_component_statement(Db2Parser::Alter_security_label_component_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_element_clause(Db2Parser::Add_element_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_element_clause(Db2Parser::Array_element_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTree_element_clause(Db2Parser::Tree_element_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_security_policy_statement(Db2Parser::Alter_security_policy_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_security_policy_opts(Db2Parser::Alter_security_policy_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_sequence_statement(Db2Parser::Alter_sequence_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_sequence_opts(Db2Parser::Alter_sequence_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_statement(Db2Parser::Alter_server_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_server_opts(Db2Parser::Alter_server_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_service_class_statement(Db2Parser::Alter_service_class_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_service_class_opts(Db2Parser::Alter_service_class_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_on_off(Db2Parser::Default_on_offContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_high_medium_low(Db2Parser::Default_high_medium_lowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_stogroup_statement(Db2Parser::Alter_stogroup_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_stogroup_opts(Db2Parser::Alter_stogroup_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table_statement(Db2Parser::Alter_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_table_opts(Db2Parser::Alter_table_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull_on_off(Db2Parser::Null_on_offContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCascade_restrict(Db2Parser::Cascade_restrictContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaterialized_query_definition(Db2Parser::Materialized_query_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefreshable_table_options(Db2Parser::Refreshable_table_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_alteration(Db2Parser::Column_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneration_alteration(Db2Parser::Generation_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentity_alteration(Db2Parser::Identity_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneration_attribute(Db2Parser::Generation_attributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_identity_clause(Db2Parser::As_identity_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_identity_clause_opts(Db2Parser::As_identity_clause_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod_definition_alter(Db2Parser::Period_definition_alterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_partition(Db2Parser::Add_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoundary_spec_alter(Db2Parser::Boundary_spec_alterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttach_partition(Db2Parser::Attach_partitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActivate_deactivate(Db2Parser::Activate_deactivateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_tablespace_statement(Db2Parser::Alter_tablespace_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_tablespace_opts(Db2Parser::Alter_tablespace_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_clause(Db2Parser::Add_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_container_clause(Db2Parser::Db_container_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_container_clause_opts(Db2Parser::Db_container_clause_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_container_clause(Db2Parser::Drop_container_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_device(Db2Parser::File_deviceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_containers_clause(Db2Parser::All_containers_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSystem_container_clause(Db2Parser::System_container_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStripeset(Db2Parser::StripesetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKm(Db2Parser::KmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKmg_percent(Db2Parser::Kmg_percentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_threshold_statement(Db2Parser::Alter_threshold_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_threshold_opts(Db2Parser::Alter_threshold_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_threshold_predicate(Db2Parser::Alter_threshold_predicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_threshold_exceeded_actions(Db2Parser::Alter_threshold_exceeded_actionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDt_units(Db2Parser::Dt_unitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDt_units_with_seconds(Db2Parser::Dt_units_with_secondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_trigger_statement(Db2Parser::Alter_trigger_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_trusted_context_statement(Db2Parser::Alter_trusted_context_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_trusted_context_opts(Db2Parser::Alter_trusted_context_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_trusted_context_opts_alter_opts(Db2Parser::Alter_trusted_context_opts_alter_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddr_clause_encryption_val(Db2Parser::Addr_clause_encryption_valContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddress_clause(Db2Parser::Address_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_clause(Db2Parser::User_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUse_for_opts(Db2Parser::Use_for_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUse_for_opts_2(Db2Parser::Use_for_opts_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_type_statement(Db2Parser::Alter_type_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_type_opts(Db2Parser::Alter_type_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_identifier(Db2Parser::Method_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_options(Db2Parser::Method_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_usage_list_statement(Db2Parser::Alter_usage_list_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_usage_list_opts_item(Db2Parser::Alter_usage_list_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_user_mapping_statement(Db2Parser::Alter_user_mapping_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_user_mapping_opts_item(Db2Parser::Alter_user_mapping_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_set(Db2Parser::Add_setContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_view_statement(Db2Parser::Alter_view_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_view_opts(Db2Parser::Alter_view_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_work_action_set_statement(Db2Parser::Alter_work_action_set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_work_action_set_opts(Db2Parser::Alter_work_action_set_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_alteration(Db2Parser::Work_action_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_alteration_opts(Db2Parser::Work_action_alteration_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_action_types_clause(Db2Parser::Alter_action_types_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_predicate_clause(Db2Parser::Threshold_predicate_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_work_class_set_statement(Db2Parser::Alter_work_class_set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_work_class_set_opts(Db2Parser::Alter_work_class_set_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_alteration(Db2Parser::Work_class_alterationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_alteration_opts(Db2Parser::Work_class_alteration_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_from_to_alter_clause(Db2Parser::For_from_to_alter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_alter_clause(Db2Parser::Schema_alter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_tag_alter_clause(Db2Parser::Data_tag_alter_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_workload_statement(Db2Parser::Alter_workload_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_workload_opts_item(Db2Parser::Alter_workload_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackage_executable(Db2Parser::Package_executableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBase_none(Db2Parser::Base_noneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtended_base_none(Db2Parser::Extended_base_noneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_collect_activity_data_clause(Db2Parser::Alter_collect_activity_data_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_opts(Db2Parser::With_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_collect_history_clause(Db2Parser::Alter_collect_history_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_collect_lock_wait_data_clause(Db2Parser::Alter_collect_lock_wait_data_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_wrapper_statement(Db2Parser::Alter_wrapper_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_wrapper_opts_item(Db2Parser::Alter_wrapper_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlter_xsrobject_statement(Db2Parser::Alter_xsrobject_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(Db2Parser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_constant(Db2Parser::String_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumeric_constant(Db2Parser::Numeric_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type(Db2Parser::Data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnchored_data_type(Db2Parser::Anchored_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnchored_non_row_data_type(Db2Parser::Anchored_non_row_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnchored_row_data_type(Db2Parser::Anchored_row_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_data_type(Db2Parser::Source_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_constrainst(Db2Parser::Data_type_constrainstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheck_condition(Db2Parser::Check_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_2(Db2Parser::Data_type_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuilt_in_type(Db2Parser::Built_in_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_paren(Db2Parser::Integer_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_kmg_paren(Db2Parser::Integer_kmg_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChar_character(Db2Parser::Char_characterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOctets_codeunits(Db2Parser::Octets_codeunitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCodeunits(Db2Parser::CodeunitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKmg(Db2Parser::KmgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRs_locator_variable(Db2Parser::Rs_locator_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_constant_list(Db2Parser::Integer_constant_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_constant(Db2Parser::Integer_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_value(Db2Parser::Integer_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositive_integer(Db2Parser::Positive_integerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigint_value(Db2Parser::Bigint_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBigint_constant(Db2Parser::Bigint_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMember_number(Db2Parser::Member_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersion_id(Db2Parser::Version_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDrop_statement(Db2Parser::Drop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlias_designator(Db2Parser::Alias_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_class_designator(Db2Parser::Service_class_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablespace_name_list(Db2Parser::Tablespace_name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssociate_locators_statement(Db2Parser::Associate_locators_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_statement(Db2Parser::Audit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBegin_declare_section_statement(Db2Parser::Begin_declare_section_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_statement(Db2Parser::Call_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_list_paren(Db2Parser::Arg_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_list(Db2Parser::Arg_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgument(Db2Parser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_statement(Db2Parser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearched_case_statement_when_clause(Db2Parser::Searched_case_statement_when_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_case_statement_when_clause(Db2Parser::Simple_case_statement_when_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClose_statement(Db2Parser::Close_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment_statement(Db2Parser::Comment_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_comment(Db2Parser::Column_commentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComment_objects(Db2Parser::Comment_objectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommit_statement(Db2Parser::Commit_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConnect_type_1_statement(Db2Parser::Connect_type_1_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuthorization(Db2Parser::AuthorizationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPasswords(Db2Parser::PasswordsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLock_block(Db2Parser::Lock_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccesstoken(Db2Parser::AccesstokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitToken(Db2Parser::TokenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitApi_key(Db2Parser::Api_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitToken_type(Db2Parser::Token_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_cursor_statement(Db2Parser::Declare_cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclare_global_temporary_table_statement(Db2Parser::Declare_global_temporary_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribe_statement(Db2Parser::Describe_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXquery_statement(Db2Parser::Xquery_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribe_input_statement(Db2Parser::Describe_input_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescribe_output_statement(Db2Parser::Describe_output_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDisconnect_statement(Db2Parser::Disconnect_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd_declare_section_statement(Db2Parser::End_declare_section_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_statement(Db2Parser::Execute_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost_variable_expression(Db2Parser::Host_variable_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_target(Db2Parser::Assignment_targetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecute_immediate_statement(Db2Parser::Execute_immediate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplain_statement(Db2Parser::Explain_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainable_sql_statement(Db2Parser::Explainable_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_statement(Db2Parser::Fetch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlush_bufferpools_statement(Db2Parser::Flush_bufferpools_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlush_event_monitor_statement(Db2Parser::Flush_event_monitor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlush_federated_cache_statement(Db2Parser::Flush_federated_cache_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlush_optimization_profile_cache_statement(Db2Parser::Flush_optimization_profile_cache_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlush_package_cache_statement(Db2Parser::Flush_package_cache_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlush_authentication_cache_statement(Db2Parser::Flush_authentication_cache_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFree_locator_statement(Db2Parser::Free_locator_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGet_diagnostics_statement(Db2Parser::Get_diagnostics_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_information(Db2Parser::Statement_informationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition_information(Db2Parser::Condition_informationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition_var_assignment(Db2Parser::Condition_var_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLock_table_statement(Db2Parser::Lock_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPipe_statement(Db2Parser::Pipe_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefresh_table_statement(Db2Parser::Refresh_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelease_connection_statement(Db2Parser::Release_connection_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRename_statement(Db2Parser::Rename_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRename_stogroup_statement(Db2Parser::Rename_stogroup_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRename_tablespace_statement(Db2Parser::Rename_tablespace_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_statement(Db2Parser::Set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccess_mode_clause(Db2Parser::Access_mode_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCascade_clause(Db2Parser::Cascade_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTo_descendent_types(Db2Parser::To_descendent_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_type_list(Db2Parser::Table_type_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_type(Db2Parser::Table_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_checked_options_list(Db2Parser::Table_checked_options_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_checked_options(Db2Parser::Table_checked_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnline_options(Db2Parser::Online_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery_optimization_options(Db2Parser::Query_optimization_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheck_options(Db2Parser::Check_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncremental_options(Db2Parser::Incremental_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitException_clause(Db2Parser::Exception_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIn_table_use_clause(Db2Parser::In_table_use_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_unchecked_options(Db2Parser::Table_unchecked_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFull_access(Db2Parser::Full_accessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegrity_options(Db2Parser::Integrity_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegrity_options_item(Db2Parser::Integrity_options_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_def_list(Db2Parser::Var_def_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_def(Db2Parser::Var_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_null(Db2Parser::Expr_nullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_null_default(Db2Parser::Expr_null_defaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_index(Db2Parser::Array_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_fullselect(Db2Parser::Row_fullselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_variable(Db2Parser::Target_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_cursor_variable(Db2Parser::Target_cursor_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_row_variable(Db2Parser::Target_row_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_array_element_specification(Db2Parser::Row_array_element_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_field_reference(Db2Parser::Row_field_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_reference(Db2Parser::Field_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_condition(Db2Parser::Search_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicate(Db2Parser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccording_to_clause(Db2Parser::According_to_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_schema_identification_list(Db2Parser::Xml_schema_identification_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_schema_identification(Db2Parser::Xml_schema_identificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFullselect_in_parentheses(Db2Parser::Fullselect_in_parenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSome_any_all(Db2Parser::Some_any_allContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_value_expression(Db2Parser::Row_value_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_operator(Db2Parser::Comparison_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_expression(Db2Parser::Row_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPath_opt_list(Db2Parser::Path_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPath_opt(Db2Parser::Path_optContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPkg_opt_list(Db2Parser::Pkg_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPkg_opt(Db2Parser::Pkg_optContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaintain_opt_list(Db2Parser::Maintain_opt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaintain_opt(Db2Parser::Maintain_optContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(Db2Parser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost_variable(Db2Parser::Host_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_integrity_statement(Db2Parser::Set_integrity_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransfer_ownership_statement(Db2Parser::Transfer_ownership_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjects(Db2Parser::ObjectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenever_statement(Db2Parser::Whenever_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_statement(Db2Parser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoto_statement(Db2Parser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(Db2Parser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude_statement(Db2Parser::Include_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResignal_statement(Db2Parser::Resignal_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignal_information(Db2Parser::Signal_informationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiagnostic_string_constant(Db2Parser::Diagnostic_string_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignal_statement(Db2Parser::Signal_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSqlstate_string_constant(Db2Parser::Sqlstate_string_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSqlstate_string_variable(Db2Parser::Sqlstate_string_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSignal_information_2(Db2Parser::Signal_information_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiagnostic_string_expression(Db2Parser::Diagnostic_string_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterate_statement(Db2Parser::Iterate_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeave_statement(Db2Parser::Leave_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop_statement(Db2Parser::Loop_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpen_statement(Db2Parser::Open_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_or_expression(Db2Parser::Variable_or_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_into_statement(Db2Parser::Select_into_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValues_into_statement(Db2Parser::Values_into_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrepare_statement(Db2Parser::Prepare_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeat_statement(Db2Parser::Repeat_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_statement(Db2Parser::Return_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(Db2Parser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_routine_statement(Db2Parser::Sql_routine_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommon_table_expression(Db2Parser::Common_table_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_alias_statement(Db2Parser::Create_alias_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_alias(Db2Parser::Table_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_alias(Db2Parser::Module_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_alias(Db2Parser::Sequence_aliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr_replace(Db2Parser::Or_replaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_audit_policy_statement(Db2Parser::Create_audit_policy_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_policy_opts(Db2Parser::Audit_policy_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAudit_policy_categories_opts(Db2Parser::Audit_policy_categories_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_bufferpool_statement(Db2Parser::Create_bufferpool_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBufferpool_opts(Db2Parser::Bufferpool_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExcept_clause(Db2Parser::Except_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMember_list(Db2Parser::Member_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMember_list_item(Db2Parser::Member_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_database_partition_group_statement(Db2Parser::Create_database_partition_group_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_statement(Db2Parser::Create_event_monitor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_activities_statement(Db2Parser::Create_event_monitor_activities_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatted_event_table_info_3(Db2Parser::Formatted_event_table_info_3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_change_history_statement(Db2Parser::Create_event_monitor_change_history_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_control_list(Db2Parser::Event_control_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_control(Db2Parser::Event_controlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_locking_statement(Db2Parser::Create_event_monitor_locking_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_package_cache_statement(Db2Parser::Create_event_monitor_package_cache_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter_and_collection_options(Db2Parser::Filter_and_collection_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_condition(Db2Parser::Event_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_condition_item(Db2Parser::Event_condition_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_statistics_statement(Db2Parser::Create_event_monitor_statistics_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_monitor_statistics_opts(Db2Parser::Event_monitor_statistics_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_threshold_violations_statement(Db2Parser::Create_event_monitor_threshold_violations_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatted_event_table_info_2(Db2Parser::Formatted_event_table_info_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_options(Db2Parser::File_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_monitor_threshold_opts(Db2Parser::Event_monitor_threshold_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPages(Db2Parser::PagesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_event_monitor_unit_of_work(Db2Parser::Create_event_monitor_unit_of_workContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormatted_event_table_info(Db2Parser::Formatted_event_table_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAutostart_manualstart(Db2Parser::Autostart_manualstartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvm_group(Db2Parser::Evm_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_table_options(Db2Parser::Target_table_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_external_table_statement(Db2Parser::Create_external_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_table_option(Db2Parser::Ext_table_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_table_option_value(Db2Parser::Ext_table_option_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_statement(Db2Parser::Create_function_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_aggregate_interface_statement(Db2Parser::Create_function_aggregate_interface_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAgg_fn_param_decl(Db2Parser::Agg_fn_param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAgg_fn_option_list(Db2Parser::Agg_fn_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitState_variable_declaration(Db2Parser::State_variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_external_scalar_statement(Db2Parser::Create_function_external_scalar_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_scalar_param_decl(Db2Parser::Ext_scalar_param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_scalar_option_list(Db2Parser::Ext_scalar_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_scalar_option_list_item(Db2Parser::Ext_scalar_option_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicate_specification(Db2Parser::Predicate_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_filter(Db2Parser::Data_filterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_exploitation(Db2Parser::Index_exploitationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExploitation_rule(Db2Parser::Exploitation_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_external_table_statement(Db2Parser::Create_function_external_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_table_param_decl_list(Db2Parser::Ext_table_param_decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_table_param_decl(Db2Parser::Ext_table_param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_table_option_list(Db2Parser::Ext_table_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExt_table_option_list_item(Db2Parser::Ext_table_option_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_old_db_external_function_statement(Db2Parser::Create_function_old_db_external_function_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOledb_option_list(Db2Parser::Oledb_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOledb_option_list_item(Db2Parser::Oledb_option_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_sourced_or_template_statement(Db2Parser::Create_function_sourced_or_template_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFn_return_opts(Db2Parser::Fn_return_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFn_return_opts_item(Db2Parser::Fn_return_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplate_opts(Db2Parser::Template_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplate_opts_item(Db2Parser::Template_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAscii_unicode(Db2Parser::Ascii_unicodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl_list_3(Db2Parser::Param_decl_list_3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl_3(Db2Parser::Param_decl_3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_sql_scalar_table_or_row_statement(Db2Parser::Create_function_sql_scalar_table_or_row_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl_list_2(Db2Parser::Param_decl_list_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl_2(Db2Parser::Param_decl_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_function_body(Db2Parser::Sql_function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_function_mapping_statement(Db2Parser::Create_function_mapping_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_options(Db2Parser::Function_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_option_name(Db2Parser::Function_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_global_temporary_table_statement(Db2Parser::Create_global_temporary_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_global_temporary_table_opts(Db2Parser::Create_global_temporary_table_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_global_temporary_table_item(Db2Parser::Create_global_temporary_table_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelete_preserve(Db2Parser::Delete_preserveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_histogram_template_statement(Db2Parser::Create_histogram_template_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_index_statement(Db2Parser::Create_index_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_col_opts(Db2Parser::Index_col_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_col_opts_item(Db2Parser::Index_col_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKey_expression(Db2Parser::Key_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_index_extension_statement(Db2Parser::Create_index_extension_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_list(Db2Parser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_maintenance(Db2Parser::Index_maintenanceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_function_invocation(Db2Parser::Table_function_invocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_search(Db2Parser::Index_searchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_method_definition(Db2Parser::Search_method_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_mask_statement(Db2Parser::Create_mask_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_expression(Db2Parser::Case_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRange_producing_funciton_invocation(Db2Parser::Range_producing_funciton_invocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_filtering_function_invocation(Db2Parser::Index_filtering_function_invocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_method_statement(Db2Parser::Create_method_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_opts(Db2Parser::Method_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_opts_item(Db2Parser::Method_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_signature(Db2Parser::Method_signatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_param_list(Db2Parser::Method_param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_3(Db2Parser::Data_type_3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_4(Db2Parser::Data_type_4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_method_body(Db2Parser::Sql_method_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompound_sql_inlined(Db2Parser::Compound_sql_inlinedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_statement_inlined(Db2Parser::Sql_statement_inlinedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompound_sql_compiled(Db2Parser::Compound_sql_compiledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_statement_compiled(Db2Parser::Sql_statement_compiledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_module_statement(Db2Parser::Create_module_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_nickname_statement(Db2Parser::Create_nickname_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNick_name_option_name(Db2Parser::Nick_name_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRemote_object_name(Db2Parser::Remote_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNon_relational_data_definition(Db2Parser::Non_relational_data_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNick_name_column_list(Db2Parser::Nick_name_column_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNick_name_column_list_item(Db2Parser::Nick_name_column_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNick_name_column_definition(Db2Parser::Nick_name_column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNick_name_column_options(Db2Parser::Nick_name_column_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFederated_column_options(Db2Parser::Federated_column_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_option_name(Db2Parser::Column_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_permission_statement(Db2Parser::Create_permission_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_procedure_statement(Db2Parser::Create_procedure_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_procedure_external_statement(Db2Parser::Create_procedure_external_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProc_ext_param_list(Db2Parser::Proc_ext_param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProc_ext_param(Db2Parser::Proc_ext_paramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_list_2(Db2Parser::Option_list_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_list_2_item(Db2Parser::Option_list_2_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_procedure_sourced_statement(Db2Parser::Create_procedure_sourced_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_procedure_clause(Db2Parser::Source_procedure_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_object_name(Db2Parser::Source_object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_list_1(Db2Parser::Option_list_1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_list_1_item(Db2Parser::Option_list_1_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResult_set_element_number(Db2Parser::Result_set_element_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnique_id(Db2Parser::Unique_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_procedure_sql_statement(Db2Parser::Create_procedure_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProc_parameter_list(Db2Parser::Proc_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProc_parameter_list_item(Db2Parser::Proc_parameter_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIn_out_inout(Db2Parser::In_out_inoutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_list(Db2Parser::Option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOption_list_item(Db2Parser::Option_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_procedure_body(Db2Parser::Sql_procedure_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_role_statement(Db2Parser::Create_role_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_schema_statement(Db2Parser::Create_schema_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_sql_statement(Db2Parser::Schema_sql_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_security_label_component_statement(Db2Parser::Create_security_label_component_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_clause(Db2Parser::Array_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_clause(Db2Parser::Set_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTree_clause(Db2Parser::Tree_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTree_clause_item(Db2Parser::Tree_clause_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_security_label_statement(Db2Parser::Create_security_label_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_security_label_item(Db2Parser::Create_security_label_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_security_policy_statement(Db2Parser::Create_security_policy_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_sequence_statement(Db2Parser::Create_sequence_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_sequence_opts(Db2Parser::Create_sequence_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_sequence_opts_item(Db2Parser::Create_sequence_opts_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_service_class_statement(Db2Parser::Create_service_class_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHigh_medium_low(Db2Parser::High_medium_lowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_off(Db2Parser::On_offContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSoft_hard(Db2Parser::Soft_hardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_server_statement(Db2Parser::Create_server_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPassword_(Db2Parser::Password_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_stogroup_statement(Db2Parser::Create_stogroup_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_stogroup_opts(Db2Parser::Create_stogroup_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_synonym_statement(Db2Parser::Create_synonym_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_table_statement(Db2Parser::Create_table_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_table_opts(Db2Parser::Create_table_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_option_list(Db2Parser::Table_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_option_list_item(Db2Parser::Table_option_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_option_name(Db2Parser::Table_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElement_list(Db2Parser::Element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElement_list_item(Db2Parser::Element_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_definition(Db2Parser::Column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod_definition(Db2Parser::Period_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnique_constraint(Db2Parser::Unique_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferential_constraint(Db2Parser::Referential_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCheck_constraint(Db2Parser::Check_constraintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_options(Db2Parser::Column_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_options_item(Db2Parser::Column_options_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferences_clause(Db2Parser::References_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRule_clause(Db2Parser::Rule_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraint_attributes(Db2Parser::Constraint_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_clause(Db2Parser::Default_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault_values(Db2Parser::Default_valuesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenerated_clause(Db2Parser::Generated_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatetime_special_register(Db2Parser::Datetime_special_registerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_special_register(Db2Parser::User_special_registerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast_function(Db2Parser::Cast_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentity_options(Db2Parser::Identity_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentity_options_item(Db2Parser::Identity_options_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_row_change_timestamp_clause(Db2Parser::As_row_change_timestamp_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_generated_expression_clause(Db2Parser::As_generated_expression_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneration_expression(Db2Parser::Generation_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_row_transaction_timestamp_clause(Db2Parser::As_row_transaction_timestamp_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_row_transaction_start_id_clause(Db2Parser::As_row_transaction_start_id_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOid_column_definition(Db2Parser::Oid_column_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRange_partition_spec(Db2Parser::Range_partition_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_expression_list(Db2Parser::Partition_expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_expression(Db2Parser::Partition_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_element_list(Db2Parser::Partition_element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_element(Db2Parser::Partition_elementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoundary_spec(Db2Parser::Boundary_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_tablespace_options(Db2Parser::Partition_tablespace_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDuration_label(Db2Parser::Duration_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStarting_clause(Db2Parser::Starting_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_min_max_list(Db2Parser::Const_min_max_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_min_max(Db2Parser::Const_min_maxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnding_clause(Db2Parser::Ending_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTyped_table_options(Db2Parser::Typed_table_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTyped_element_list(Db2Parser::Typed_element_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTyped_element_list_item(Db2Parser::Typed_element_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_result_table(Db2Parser::As_result_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCopy_options(Db2Parser::Copy_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMaterialized_query_options(Db2Parser::Materialized_query_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStaging_table_definition(Db2Parser::Staging_table_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDimensions_clause(Db2Parser::Dimensions_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCol_names(Db2Parser::Col_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_key_spec(Db2Parser::Sequence_key_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_key_spec_list(Db2Parser::Sequence_key_spec_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_key_spec_list_item(Db2Parser::Sequence_key_spec_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablespace_clauses(Db2Parser::Tablespace_clausesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDistribution_clause(Db2Parser::Distribution_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartitioning_clause(Db2Parser::Partitioning_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_not_exists(Db2Parser::If_not_existsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_tablespace_statement(Db2Parser::Create_tablespace_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStorage_group(Db2Parser::Storage_groupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSize_attributes(Db2Parser::Size_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSystem_containers(Db2Parser::System_containersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainer_string_list(Db2Parser::Container_string_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_containers(Db2Parser::Database_containersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainer_clause(Db2Parser::Container_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainer_clause_list(Db2Parser::Container_clause_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContainer_clause_list_item(Db2Parser::Container_clause_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOn_db_partitions_clause(Db2Parser::On_db_partitions_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_number_list(Db2Parser::Db_partition_number_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_number_list_item(Db2Parser::Db_partition_number_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_number(Db2Parser::Db_partition_numberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber_of_pages(Db2Parser::Number_of_pagesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber_of_files(Db2Parser::Number_of_filesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber_of_milliseconds(Db2Parser::Number_of_millisecondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber_megabytes_per_second(Db2Parser::Number_megabytes_per_secondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_threshold_statement(Db2Parser::Create_threshold_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_domain(Db2Parser::Threshold_domainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_text(Db2Parser::Statement_textContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExecutable_id(Db2Parser::Executable_idContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnforcement_scope(Db2Parser::Enforcement_scopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_predicate(Db2Parser::Threshold_predicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChecking_every(Db2Parser::Checking_everyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHour_to_seconds(Db2Parser::Hour_to_secondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDay_to_minutes(Db2Parser::Day_to_minutesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDay_to_seconds(Db2Parser::Day_to_secondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_exceeded_actions_2(Db2Parser::Threshold_exceeded_actions_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDetails_section(Db2Parser::Details_sectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRemap_activity_action(Db2Parser::Remap_activity_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_transform_statement(Db2Parser::Create_transform_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTranform_list(Db2Parser::Tranform_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTranform_list_item(Db2Parser::Tranform_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransform_group_list(Db2Parser::Transform_group_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransform_group_list_item(Db2Parser::Transform_group_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_trigger_statement(Db2Parser::Create_trigger_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRef_list(Db2Parser::Ref_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRef_list_item(Db2Parser::Ref_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOld_new(Db2Parser::Old_newContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCorrelation_name(Db2Parser::Correlation_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(Db2Parser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrigger_event(Db2Parser::Trigger_eventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTriggered_action(Db2Parser::Triggered_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_procedure_statement(Db2Parser::Sql_procedure_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_function_statement(Db2Parser::Sql_function_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_trusted_context_statement(Db2Parser::Create_trusted_context_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttr_list(Db2Parser::Attr_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttr_list_item(Db2Parser::Attr_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuth_list(Db2Parser::Auth_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuth_list_item(Db2Parser::Auth_list_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddress_value(Db2Parser::Address_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEncryption_value(Db2Parser::Encryption_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_statement(Db2Parser::Create_type_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_array_statement(Db2Parser::Create_type_array_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_cursor_statement(Db2Parser::Create_type_cursor_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_distinct_statement(Db2Parser::Create_type_distinct_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_row_statement(Db2Parser::Create_type_row_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_definition_list_paren(Db2Parser::Field_definition_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_definition_list(Db2Parser::Field_definition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_definition(Db2Parser::Field_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_structured_statement(Db2Parser::Create_type_structured_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructured_type_seq(Db2Parser::Structured_type_seqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_definition_list_paren(Db2Parser::Attribute_definition_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_definition_list(Db2Parser::Attribute_definition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_definition(Db2Parser::Attribute_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_specification_list(Db2Parser::Method_specification_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_specification(Db2Parser::Method_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_specification_seq(Db2Parser::Method_specification_seqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAs_locator(Db2Parser::As_locatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl_list_paren(Db2Parser::Param_decl_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl_list(Db2Parser::Param_decl_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_decl(Db2Parser::Param_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_routine_characteristics(Db2Parser::Sql_routine_characteristicsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternal_routine_characteristics(Db2Parser::External_routine_characteristicsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLength(Db2Parser::LengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRep_type(Db2Parser::Rep_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarchars(Db2Parser::VarcharsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarbinaries(Db2Parser::VarbinariesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_bit_data(Db2Parser::For_bit_dataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLob_options(Db2Parser::Lob_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_type_mapping_statement(Db2Parser::Create_type_mapping_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_bit_data_precision(Db2Parser::For_bit_data_precisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecision(Db2Parser::PrecisionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScale(Db2Parser::ScaleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrecision_scale_comp(Db2Parser::Precision_scale_compContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_to(Db2Parser::From_toContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_source_data_type(Db2Parser::Data_source_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocal_data_type(Db2Parser::Local_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRemote_server(Db2Parser::Remote_serverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitServer_version(Db2Parser::Server_versionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitServer_type(Db2Parser::Server_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersion(Db2Parser::VersionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelease(Db2Parser::ReleaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMod(Db2Parser::ModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_usage_list_statement(Db2Parser::Create_usage_list_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_user_mapping_statement(Db2Parser::Create_user_mapping_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_mapping_options_paren(Db2Parser::User_mapping_options_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_mapping_options(Db2Parser::User_mapping_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_variable_statement(Db2Parser::Create_variable_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant_(Db2Parser::Constant_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecial_register(Db2Parser::Special_registerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobal_variable(Db2Parser::Global_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_type_1(Db2Parser::Data_type_1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_value_constructor(Db2Parser::Cursor_value_constructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnchored_variable_data_type(Db2Parser::Anchored_variable_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHoldability(Db2Parser::HoldabilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnability(Db2Parser::ReturnabilityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_view_statement(Db2Parser::Create_view_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_view_seq(Db2Parser::Create_view_seqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFullselect(Db2Parser::FullselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubselect(Db2Parser::SubselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_clause(Db2Parser::Select_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelect_clause_item(Db2Parser::Select_clause_itemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_clause(Db2Parser::From_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_reference(Db2Parser::Table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_reference_list(Db2Parser::Table_reference_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingles_table_reference(Db2Parser::Singles_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod_specification(Db2Parser::Period_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(Db2Parser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCorrelation_clause(Db2Parser::Correlation_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablesample_clause(Db2Parser::Tablesample_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumeric_expression(Db2Parser::Numeric_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingle_view_reference(Db2Parser::Single_view_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingle_nickname_reference(Db2Parser::Single_nickname_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnly_table_reference(Db2Parser::Only_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOuter_table_reference(Db2Parser::Outer_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnalyze_table_reference(Db2Parser::Analyze_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplementation_clause(Db2Parser::Implementation_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNested_table_reference(Db2Parser::Nested_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue_handler(Db2Parser::Continue_handlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecific_condition_value(Db2Parser::Specific_condition_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_change_table_reference(Db2Parser::Data_change_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearched_update_statement(Db2Parser::Searched_update_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearched_delete_statement(Db2Parser::Searched_delete_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFinal_new(Db2Parser::Final_newContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFinal_new_old(Db2Parser::Final_new_oldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_function_reference(Db2Parser::Table_function_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_udf_cardinality_clause(Db2Parser::Table_udf_cardinality_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTyped_correlation_clause(Db2Parser::Typed_correlation_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name_data_type(Db2Parser::Column_name_data_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollection_derived_table(Db2Parser::Collection_derived_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_function(Db2Parser::Table_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable_expression(Db2Parser::Xmltable_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmltable_function(Db2Parser::Xmltable_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoined_table(Db2Parser::Joined_tableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoin_condition(Db2Parser::Join_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOuter(Db2Parser::OuterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternal_table_reference(Db2Parser::External_table_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_definition_2(Db2Parser::Column_definition_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_name(Db2Parser::File_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhere_clause(Db2Parser::Where_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_clause(Db2Parser::Group_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_by_clause_opts(Db2Parser::Group_by_clause_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrouping_expression(Db2Parser::Grouping_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrouping_sets(Db2Parser::Grouping_setsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuper_groups(Db2Parser::Super_groupsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrant_total(Db2Parser::Grant_totalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHaving_clause(Db2Parser::Having_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrder_by_clause(Db2Parser::Order_by_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrder_by_clause_opts(Db2Parser::Order_by_clause_optsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_designator(Db2Parser::Table_designatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAsc_desc(Db2Parser::Asc_descContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst_last(Db2Parser::First_lastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSort_key(Db2Parser::Sort_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_column_name(Db2Parser::Simple_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimple_integer(Db2Parser::Simple_integerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSork_key_expression(Db2Parser::Sork_key_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOffset_clause(Db2Parser::Offset_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOffset_row_count(Db2Parser::Offset_row_countContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_clause(Db2Parser::Fetch_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFetch_row_count(Db2Parser::Fetch_row_countContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_rows(Db2Parser::Row_rowsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsolation_clause(Db2Parser::Isolation_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLock_request_clause(Db2Parser::Lock_request_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValues_clause(Db2Parser::Values_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValues_row(Db2Parser::Values_rowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRoot_view_definition(Db2Parser::Root_view_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubview_definition(Db2Parser::Subview_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOid_column(Db2Parser::Oid_columnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_options(Db2Parser::With_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_option_def(Db2Parser::With_option_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_option_scope_def(Db2Parser::With_option_scope_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnder_clause(Db2Parser::Under_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_work_action_set_statement(Db2Parser::Create_work_action_set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_definition_list_paren(Db2Parser::Work_action_definition_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_definition_list(Db2Parser::Work_action_definition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_definition(Db2Parser::Work_action_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAction_types_clause(Db2Parser::Action_types_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_types_clause(Db2Parser::Threshold_types_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecond_seconds(Db2Parser::Second_secondsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHours_minutes(Db2Parser::Hours_minutesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_exceeded_actions(Db2Parser::Threshold_exceeded_actionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollect_activity_data_clause(Db2Parser::Collect_activity_data_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith_without(Db2Parser::With_withoutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHistogram_templace_clause(Db2Parser::Histogram_templace_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_work_class_set_statement(Db2Parser::Create_work_class_set_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_definition_list_paren(Db2Parser::Work_class_definition_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_definition_list(Db2Parser::Work_class_definition_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_definition(Db2Parser::Work_class_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_attributes(Db2Parser::Work_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition_clause(Db2Parser::Position_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition_(Db2Parser::Position_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_from_to_clause(Db2Parser::For_from_to_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_value(Db2Parser::From_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTo_value(Db2Parser::To_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_tag_clause(Db2Parser::Data_tag_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_clause(Db2Parser::Schema_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_workload_statement(Db2Parser::Create_workload_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPkg_exec_seq(Db2Parser::Pkg_exec_seqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition_clause_2(Db2Parser::Position_clause_2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConnection_attributes(Db2Parser::Connection_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_list(Db2Parser::String_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_list_paren(Db2Parser::String_list_parenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWorkload_attributes(Db2Parser::Workload_attributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDegree(Db2Parser::DegreeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAllow_disallow(Db2Parser::Allow_disallowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollect_on_clause(Db2Parser::Collect_on_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollect_details_clause(Db2Parser::Collect_details_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollect_lock_wait_options(Db2Parser::Collect_lock_wait_optionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWait_time(Db2Parser::Wait_timeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreate_wrapper_statement(Db2Parser::Create_wrapper_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrapper_option_list(Db2Parser::Wrapper_option_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrapper_option(Db2Parser::Wrapper_optionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(Db2Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_invocation(Db2Parser::Function_invocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAll_distinct(Db2Parser::All_distinctContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalar_fullselect(Db2Parser::Scalar_fullselectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast_specification(Db2Parser::Cast_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_cast_specification(Db2Parser::Cursor_cast_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_cast_specification(Db2Parser::Row_cast_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval_cast_specification(Db2Parser::Interval_cast_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXmlcast_specification(Db2Parser::Xmlcast_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_element_specification(Db2Parser::Array_element_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_constructor(Db2Parser::Array_constructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_invocation(Db2Parser::Method_invocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOlap_specification(Db2Parser::Olap_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrdered_olap_specification(Db2Parser::Ordered_olap_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_partition_clause(Db2Parser::Window_partition_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_order_clause(Db2Parser::Window_order_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumbering_specification(Db2Parser::Numbering_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAggregation_specification(Db2Parser::Aggregation_specificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOlap_aggregate_function(Db2Parser::Olap_aggregate_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst_value_function(Db2Parser::First_value_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLast_value_function(Db2Parser::Last_value_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNth_value_function(Db2Parser::Nth_value_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRatio_to_report_function(Db2Parser::Ratio_to_report_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIgnore_respect_nulls(Db2Parser::Ignore_respect_nullsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFrom_first_last(Db2Parser::From_first_lastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindow_aggregation_group_clause(Db2Parser::Window_aggregation_group_clauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_start(Db2Parser::Group_startContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_between(Db2Parser::Group_betweenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_bound1(Db2Parser::Group_bound1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_bound2(Db2Parser::Group_bound2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_end(Db2Parser::Group_endContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_change_expression(Db2Parser::Row_change_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_reference(Db2Parser::Sequence_referenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtype_treatment(Db2Parser::Subtype_treatmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_list(Db2Parser::Expression_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_list_in_parentheses(Db2Parser::Expression_list_in_parenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_(Db2Parser::Id_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExposed_name(Db2Parser::Exposed_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(Db2Parser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(Db2Parser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost_label(Db2Parser::Host_labelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLibrary_name(Db2Parser::Library_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_type_name(Db2Parser::Array_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_name(Db2Parser::Attribute_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_type_name(Db2Parser::Row_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAuthorization_name(Db2Parser::Authorization_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean_variable_name(Db2Parser::Boolean_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_variable_name(Db2Parser::Array_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumn_name(Db2Parser::Column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraint_name(Db2Parser::Constraint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDescriptor_name(Db2Parser::Descriptor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDistinct_type_name(Db2Parser::Distinct_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_name(Db2Parser::Cursor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_type_name(Db2Parser::Cursor_type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition_name(Db2Parser::Condition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitData_source_name(Db2Parser::Data_source_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_name(Db2Parser::Expression_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroup_name(Db2Parser::Group_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPolicy_name(Db2Parser::Policy_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBufferpool_name(Db2Parser::Bufferpool_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_name(Db2Parser::Db_partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDatabase_name(Db2Parser::Database_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent_monitor_name(Db2Parser::Event_monitor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField_name(Db2Parser::Field_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_loop_name(Db2Parser::For_loop_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_name(Db2Parser::Function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_mapping_name(Db2Parser::Function_mapping_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobal_variable_name(Db2Parser::Global_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHierarchy_name(Db2Parser::Hierarchy_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHost_variable_name(Db2Parser::Host_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_marker(Db2Parser::Parameter_markerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplate_name(Db2Parser::Template_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_name(Db2Parser::Index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_extension_name(Db2Parser::Index_extension_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput_descriptor_name(Db2Parser::Input_descriptor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMask_name(Db2Parser::Mask_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod_name(Db2Parser::Method_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModel_name(Db2Parser::Model_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModule_name(Db2Parser::Module_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNew_owner(Db2Parser::New_ownerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNick_name(Db2Parser::Nick_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject_name(Db2Parser::Object_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOid_column_name(Db2Parser::Oid_column_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptimization_profile_name(Db2Parser::Optimization_profile_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackage_name(Db2Parser::Package_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPartition_name(Db2Parser::Partition_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPath_name(Db2Parser::Path_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPermission_name(Db2Parser::Permission_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPipe_name(Db2Parser::Pipe_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProcedure_name(Db2Parser::Procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResult_descriptor_name(Db2Parser::Result_descriptor_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRole_name(Db2Parser::Role_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRoot_table_name(Db2Parser::Root_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRoot_view_name(Db2Parser::Root_view_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow_variable_name(Db2Parser::Row_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_schema_name(Db2Parser::Source_schema_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_package_name(Db2Parser::Source_package_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_procedure_name(Db2Parser::Source_procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_parameter_name(Db2Parser::Sql_parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSql_variable_name(Db2Parser::Sql_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransition_variable_name(Db2Parser::Transition_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSavepoint_name(Db2Parser::Savepoint_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecific_name(Db2Parser::Specific_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema(Db2Parser::SchemaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSchema_name(Db2Parser::Schema_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearch_method_name(Db2Parser::Search_method_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitServer_name(Db2Parser::Server_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitServer_option_name(Db2Parser::Server_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSession_authorization_name(Db2Parser::Session_authorization_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComponent_name(Db2Parser::Component_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSec_label_comp_name(Db2Parser::Sec_label_comp_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecurity_policy_name(Db2Parser::Security_policy_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecurity_label_name(Db2Parser::Security_label_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSequence_name(Db2Parser::Sequence_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_class_name(Db2Parser::Service_class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_superclass_name(Db2Parser::Service_superclass_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStoragegroup_name(Db2Parser::Storagegroup_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSupertype_name(Db2Parser::Supertype_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuperview_name(Db2Parser::Superview_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitService_subclass_name(Db2Parser::Service_subclass_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_name(Db2Parser::Statement_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable_name(Db2Parser::Table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTablespace_name(Db2Parser::Tablespace_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_identifier(Db2Parser::Target_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreshold_name(Db2Parser::Threshold_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrigger_name(Db2Parser::Trigger_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContext_name(Db2Parser::Context_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUsage_list_name(Db2Parser::Usage_list_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_name(Db2Parser::Type_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_mapping_name(Db2Parser::Type_mapping_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTyped_table_name(Db2Parser::Typed_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTyped_view_name(Db2Parser::Typed_view_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUser_mapping_option_name(Db2Parser::User_mapping_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitView_name(Db2Parser::View_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_name(Db2Parser::Variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_set_name(Db2Parser::Work_action_set_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_set_name(Db2Parser::Work_class_set_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWorkload_name(Db2Parser::Workload_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_action_name(Db2Parser::Work_action_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWork_class_name(Db2Parser::Work_class_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrapper_name(Db2Parser::Wrapper_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrapper_option_name(Db2Parser::Wrapper_option_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXsrobject_name(Db2Parser::Xsrobject_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_name(Db2Parser::Parameter_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCursor_variable_name(Db2Parser::Cursor_variable_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAlias_name(Db2Parser::Alias_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDb_partition_group_name(Db2Parser::Db_partition_group_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_index_name(Db2Parser::Source_index_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_table_name(Db2Parser::Source_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_storagegroup_name(Db2Parser::Source_storagegroup_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_storagegroup_name(Db2Parser::Target_storagegroup_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource_tablespace_name(Db2Parser::Source_tablespace_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTarget_tablespace_name(Db2Parser::Target_tablespace_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualified_function_name(Db2Parser::Unqualified_function_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualified_procedure_name(Db2Parser::Unqualified_procedure_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualified_specific_name(Db2Parser::Unqualified_specific_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeriod_name(Db2Parser::Period_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHistory_table_name(Db2Parser::History_table_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXml_schema_name(Db2Parser::Xml_schema_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTodo(Db2Parser::TodoContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpp_db2
