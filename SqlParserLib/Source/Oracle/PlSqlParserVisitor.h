
// Generated from PlSqlParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PlSqlParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PlSqlParser.
 */
class  PlSqlParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PlSqlParser.
   */
    virtual std::any visitSql_script(PlSqlParser::Sql_scriptContext *context) = 0;

    virtual std::any visitUnit_statement(PlSqlParser::Unit_statementContext *context) = 0;

    virtual std::any visitAlter_diskgroup(PlSqlParser::Alter_diskgroupContext *context) = 0;

    virtual std::any visitAdd_disk_clause(PlSqlParser::Add_disk_clauseContext *context) = 0;

    virtual std::any visitDrop_disk_clause(PlSqlParser::Drop_disk_clauseContext *context) = 0;

    virtual std::any visitResize_disk_clause(PlSqlParser::Resize_disk_clauseContext *context) = 0;

    virtual std::any visitReplace_disk_clause(PlSqlParser::Replace_disk_clauseContext *context) = 0;

    virtual std::any visitWait_nowait(PlSqlParser::Wait_nowaitContext *context) = 0;

    virtual std::any visitRename_disk_clause(PlSqlParser::Rename_disk_clauseContext *context) = 0;

    virtual std::any visitDisk_online_clause(PlSqlParser::Disk_online_clauseContext *context) = 0;

    virtual std::any visitDisk_offline_clause(PlSqlParser::Disk_offline_clauseContext *context) = 0;

    virtual std::any visitTimeout_clause(PlSqlParser::Timeout_clauseContext *context) = 0;

    virtual std::any visitRebalance_diskgroup_clause(PlSqlParser::Rebalance_diskgroup_clauseContext *context) = 0;

    virtual std::any visitPhase(PlSqlParser::PhaseContext *context) = 0;

    virtual std::any visitCheck_diskgroup_clause(PlSqlParser::Check_diskgroup_clauseContext *context) = 0;

    virtual std::any visitDiskgroup_template_clauses(PlSqlParser::Diskgroup_template_clausesContext *context) = 0;

    virtual std::any visitQualified_template_clause(PlSqlParser::Qualified_template_clauseContext *context) = 0;

    virtual std::any visitRedundancy_clause(PlSqlParser::Redundancy_clauseContext *context) = 0;

    virtual std::any visitStriping_clause(PlSqlParser::Striping_clauseContext *context) = 0;

    virtual std::any visitForce_noforce(PlSqlParser::Force_noforceContext *context) = 0;

    virtual std::any visitDiskgroup_directory_clauses(PlSqlParser::Diskgroup_directory_clausesContext *context) = 0;

    virtual std::any visitDir_name(PlSqlParser::Dir_nameContext *context) = 0;

    virtual std::any visitDiskgroup_alias_clauses(PlSqlParser::Diskgroup_alias_clausesContext *context) = 0;

    virtual std::any visitDiskgroup_volume_clauses(PlSqlParser::Diskgroup_volume_clausesContext *context) = 0;

    virtual std::any visitAdd_volume_clause(PlSqlParser::Add_volume_clauseContext *context) = 0;

    virtual std::any visitModify_volume_clause(PlSqlParser::Modify_volume_clauseContext *context) = 0;

    virtual std::any visitDiskgroup_attributes(PlSqlParser::Diskgroup_attributesContext *context) = 0;

    virtual std::any visitDrop_diskgroup_file_clause(PlSqlParser::Drop_diskgroup_file_clauseContext *context) = 0;

    virtual std::any visitConvert_redundancy_clause(PlSqlParser::Convert_redundancy_clauseContext *context) = 0;

    virtual std::any visitUsergroup_clauses(PlSqlParser::Usergroup_clausesContext *context) = 0;

    virtual std::any visitUser_clauses(PlSqlParser::User_clausesContext *context) = 0;

    virtual std::any visitFile_permissions_clause(PlSqlParser::File_permissions_clauseContext *context) = 0;

    virtual std::any visitFile_owner_clause(PlSqlParser::File_owner_clauseContext *context) = 0;

    virtual std::any visitScrub_clause(PlSqlParser::Scrub_clauseContext *context) = 0;

    virtual std::any visitQuotagroup_clauses(PlSqlParser::Quotagroup_clausesContext *context) = 0;

    virtual std::any visitProperty_name(PlSqlParser::Property_nameContext *context) = 0;

    virtual std::any visitProperty_value(PlSqlParser::Property_valueContext *context) = 0;

    virtual std::any visitFilegroup_clauses(PlSqlParser::Filegroup_clausesContext *context) = 0;

    virtual std::any visitAdd_filegroup_clause(PlSqlParser::Add_filegroup_clauseContext *context) = 0;

    virtual std::any visitModify_filegroup_clause(PlSqlParser::Modify_filegroup_clauseContext *context) = 0;

    virtual std::any visitMove_to_filegroup_clause(PlSqlParser::Move_to_filegroup_clauseContext *context) = 0;

    virtual std::any visitDrop_filegroup_clause(PlSqlParser::Drop_filegroup_clauseContext *context) = 0;

    virtual std::any visitQuorum_regular(PlSqlParser::Quorum_regularContext *context) = 0;

    virtual std::any visitUndrop_disk_clause(PlSqlParser::Undrop_disk_clauseContext *context) = 0;

    virtual std::any visitDiskgroup_availability(PlSqlParser::Diskgroup_availabilityContext *context) = 0;

    virtual std::any visitEnable_disable_volume(PlSqlParser::Enable_disable_volumeContext *context) = 0;

    virtual std::any visitDrop_function(PlSqlParser::Drop_functionContext *context) = 0;

    virtual std::any visitAlter_flashback_archive(PlSqlParser::Alter_flashback_archiveContext *context) = 0;

    virtual std::any visitAlter_hierarchy(PlSqlParser::Alter_hierarchyContext *context) = 0;

    virtual std::any visitAlter_function(PlSqlParser::Alter_functionContext *context) = 0;

    virtual std::any visitAlter_java(PlSqlParser::Alter_javaContext *context) = 0;

    virtual std::any visitMatch_string(PlSqlParser::Match_stringContext *context) = 0;

    virtual std::any visitCreate_function_body(PlSqlParser::Create_function_bodyContext *context) = 0;

    virtual std::any visitSql_macro_body(PlSqlParser::Sql_macro_bodyContext *context) = 0;

    virtual std::any visitParallel_enable_clause(PlSqlParser::Parallel_enable_clauseContext *context) = 0;

    virtual std::any visitPartition_by_clause(PlSqlParser::Partition_by_clauseContext *context) = 0;

    virtual std::any visitResult_cache_clause(PlSqlParser::Result_cache_clauseContext *context) = 0;

    virtual std::any visitAccessible_by_clause(PlSqlParser::Accessible_by_clauseContext *context) = 0;

    virtual std::any visitDefault_collation_clause(PlSqlParser::Default_collation_clauseContext *context) = 0;

    virtual std::any visitAggregate_clause(PlSqlParser::Aggregate_clauseContext *context) = 0;

    virtual std::any visitPipelined_using_clause(PlSqlParser::Pipelined_using_clauseContext *context) = 0;

    virtual std::any visitAccessor(PlSqlParser::AccessorContext *context) = 0;

    virtual std::any visitRelies_on_part(PlSqlParser::Relies_on_partContext *context) = 0;

    virtual std::any visitStreaming_clause(PlSqlParser::Streaming_clauseContext *context) = 0;

    virtual std::any visitAlter_outline(PlSqlParser::Alter_outlineContext *context) = 0;

    virtual std::any visitOutline_options(PlSqlParser::Outline_optionsContext *context) = 0;

    virtual std::any visitAlter_lockdown_profile(PlSqlParser::Alter_lockdown_profileContext *context) = 0;

    virtual std::any visitLockdown_feature(PlSqlParser::Lockdown_featureContext *context) = 0;

    virtual std::any visitLockdown_options(PlSqlParser::Lockdown_optionsContext *context) = 0;

    virtual std::any visitLockdown_statements(PlSqlParser::Lockdown_statementsContext *context) = 0;

    virtual std::any visitStatement_clauses(PlSqlParser::Statement_clausesContext *context) = 0;

    virtual std::any visitClause_options(PlSqlParser::Clause_optionsContext *context) = 0;

    virtual std::any visitOption_values(PlSqlParser::Option_valuesContext *context) = 0;

    virtual std::any visitString_list(PlSqlParser::String_listContext *context) = 0;

    virtual std::any visitDisable_enable(PlSqlParser::Disable_enableContext *context) = 0;

    virtual std::any visitDrop_lockdown_profile(PlSqlParser::Drop_lockdown_profileContext *context) = 0;

    virtual std::any visitDrop_package(PlSqlParser::Drop_packageContext *context) = 0;

    virtual std::any visitAlter_package(PlSqlParser::Alter_packageContext *context) = 0;

    virtual std::any visitCreate_package(PlSqlParser::Create_packageContext *context) = 0;

    virtual std::any visitCreate_package_body(PlSqlParser::Create_package_bodyContext *context) = 0;

    virtual std::any visitPackage_obj_spec(PlSqlParser::Package_obj_specContext *context) = 0;

    virtual std::any visitProcedure_spec(PlSqlParser::Procedure_specContext *context) = 0;

    virtual std::any visitFunction_spec(PlSqlParser::Function_specContext *context) = 0;

    virtual std::any visitPackage_obj_body(PlSqlParser::Package_obj_bodyContext *context) = 0;

    virtual std::any visitAlter_pmem_filestore(PlSqlParser::Alter_pmem_filestoreContext *context) = 0;

    virtual std::any visitDrop_pmem_filestore(PlSqlParser::Drop_pmem_filestoreContext *context) = 0;

    virtual std::any visitDrop_procedure(PlSqlParser::Drop_procedureContext *context) = 0;

    virtual std::any visitAlter_procedure(PlSqlParser::Alter_procedureContext *context) = 0;

    virtual std::any visitFunction_body(PlSqlParser::Function_bodyContext *context) = 0;

    virtual std::any visitProcedure_body(PlSqlParser::Procedure_bodyContext *context) = 0;

    virtual std::any visitCreate_procedure_body(PlSqlParser::Create_procedure_bodyContext *context) = 0;

    virtual std::any visitAlter_resource_cost(PlSqlParser::Alter_resource_costContext *context) = 0;

    virtual std::any visitDrop_outline(PlSqlParser::Drop_outlineContext *context) = 0;

    virtual std::any visitAlter_rollback_segment(PlSqlParser::Alter_rollback_segmentContext *context) = 0;

    virtual std::any visitDrop_restore_point(PlSqlParser::Drop_restore_pointContext *context) = 0;

    virtual std::any visitDrop_rollback_segment(PlSqlParser::Drop_rollback_segmentContext *context) = 0;

    virtual std::any visitDrop_role(PlSqlParser::Drop_roleContext *context) = 0;

    virtual std::any visitCreate_pmem_filestore(PlSqlParser::Create_pmem_filestoreContext *context) = 0;

    virtual std::any visitPmem_filestore_options(PlSqlParser::Pmem_filestore_optionsContext *context) = 0;

    virtual std::any visitFile_path(PlSqlParser::File_pathContext *context) = 0;

    virtual std::any visitCreate_rollback_segment(PlSqlParser::Create_rollback_segmentContext *context) = 0;

    virtual std::any visitDrop_trigger(PlSqlParser::Drop_triggerContext *context) = 0;

    virtual std::any visitAlter_trigger(PlSqlParser::Alter_triggerContext *context) = 0;

    virtual std::any visitCreate_trigger(PlSqlParser::Create_triggerContext *context) = 0;

    virtual std::any visitTrigger_follows_clause(PlSqlParser::Trigger_follows_clauseContext *context) = 0;

    virtual std::any visitTrigger_when_clause(PlSqlParser::Trigger_when_clauseContext *context) = 0;

    virtual std::any visitSimple_dml_trigger(PlSqlParser::Simple_dml_triggerContext *context) = 0;

    virtual std::any visitFor_each_row(PlSqlParser::For_each_rowContext *context) = 0;

    virtual std::any visitCompound_dml_trigger(PlSqlParser::Compound_dml_triggerContext *context) = 0;

    virtual std::any visitNon_dml_trigger(PlSqlParser::Non_dml_triggerContext *context) = 0;

    virtual std::any visitTrigger_body(PlSqlParser::Trigger_bodyContext *context) = 0;

    virtual std::any visitCompound_trigger_block(PlSqlParser::Compound_trigger_blockContext *context) = 0;

    virtual std::any visitTiming_point_section(PlSqlParser::Timing_point_sectionContext *context) = 0;

    virtual std::any visitNon_dml_event(PlSqlParser::Non_dml_eventContext *context) = 0;

    virtual std::any visitDml_event_clause(PlSqlParser::Dml_event_clauseContext *context) = 0;

    virtual std::any visitDml_event_element(PlSqlParser::Dml_event_elementContext *context) = 0;

    virtual std::any visitDml_event_nested_clause(PlSqlParser::Dml_event_nested_clauseContext *context) = 0;

    virtual std::any visitReferencing_clause(PlSqlParser::Referencing_clauseContext *context) = 0;

    virtual std::any visitReferencing_element(PlSqlParser::Referencing_elementContext *context) = 0;

    virtual std::any visitDrop_type(PlSqlParser::Drop_typeContext *context) = 0;

    virtual std::any visitAlter_type(PlSqlParser::Alter_typeContext *context) = 0;

    virtual std::any visitCompile_type_clause(PlSqlParser::Compile_type_clauseContext *context) = 0;

    virtual std::any visitReplace_type_clause(PlSqlParser::Replace_type_clauseContext *context) = 0;

    virtual std::any visitAlter_method_spec(PlSqlParser::Alter_method_specContext *context) = 0;

    virtual std::any visitAlter_method_element(PlSqlParser::Alter_method_elementContext *context) = 0;

    virtual std::any visitAlter_collection_clauses(PlSqlParser::Alter_collection_clausesContext *context) = 0;

    virtual std::any visitDependent_handling_clause(PlSqlParser::Dependent_handling_clauseContext *context) = 0;

    virtual std::any visitDependent_exceptions_part(PlSqlParser::Dependent_exceptions_partContext *context) = 0;

    virtual std::any visitCreate_type(PlSqlParser::Create_typeContext *context) = 0;

    virtual std::any visitType_definition(PlSqlParser::Type_definitionContext *context) = 0;

    virtual std::any visitObject_type_def(PlSqlParser::Object_type_defContext *context) = 0;

    virtual std::any visitObject_as_part(PlSqlParser::Object_as_partContext *context) = 0;

    virtual std::any visitObject_under_part(PlSqlParser::Object_under_partContext *context) = 0;

    virtual std::any visitNested_table_type_def(PlSqlParser::Nested_table_type_defContext *context) = 0;

    virtual std::any visitSqlj_object_type(PlSqlParser::Sqlj_object_typeContext *context) = 0;

    virtual std::any visitType_body(PlSqlParser::Type_bodyContext *context) = 0;

    virtual std::any visitType_body_elements(PlSqlParser::Type_body_elementsContext *context) = 0;

    virtual std::any visitMap_order_func_declaration(PlSqlParser::Map_order_func_declarationContext *context) = 0;

    virtual std::any visitSubprog_decl_in_type(PlSqlParser::Subprog_decl_in_typeContext *context) = 0;

    virtual std::any visitProc_decl_in_type(PlSqlParser::Proc_decl_in_typeContext *context) = 0;

    virtual std::any visitFunc_decl_in_type(PlSqlParser::Func_decl_in_typeContext *context) = 0;

    virtual std::any visitConstructor_declaration(PlSqlParser::Constructor_declarationContext *context) = 0;

    virtual std::any visitModifier_clause(PlSqlParser::Modifier_clauseContext *context) = 0;

    virtual std::any visitObject_member_spec(PlSqlParser::Object_member_specContext *context) = 0;

    virtual std::any visitSqlj_object_type_attr(PlSqlParser::Sqlj_object_type_attrContext *context) = 0;

    virtual std::any visitElement_spec(PlSqlParser::Element_specContext *context) = 0;

    virtual std::any visitElement_spec_options(PlSqlParser::Element_spec_optionsContext *context) = 0;

    virtual std::any visitSubprogram_spec(PlSqlParser::Subprogram_specContext *context) = 0;

    virtual std::any visitOverriding_subprogram_spec(PlSqlParser::Overriding_subprogram_specContext *context) = 0;

    virtual std::any visitOverriding_function_spec(PlSqlParser::Overriding_function_specContext *context) = 0;

    virtual std::any visitOverriding_procedure_spec(PlSqlParser::Overriding_procedure_specContext *context) = 0;

    virtual std::any visitType_procedure_spec(PlSqlParser::Type_procedure_specContext *context) = 0;

    virtual std::any visitType_function_spec(PlSqlParser::Type_function_specContext *context) = 0;

    virtual std::any visitConstructor_spec(PlSqlParser::Constructor_specContext *context) = 0;

    virtual std::any visitMap_order_function_spec(PlSqlParser::Map_order_function_specContext *context) = 0;

    virtual std::any visitPragma_clause(PlSqlParser::Pragma_clauseContext *context) = 0;

    virtual std::any visitPragma_elements(PlSqlParser::Pragma_elementsContext *context) = 0;

    virtual std::any visitType_elements_parameter(PlSqlParser::Type_elements_parameterContext *context) = 0;

    virtual std::any visitDrop_sequence(PlSqlParser::Drop_sequenceContext *context) = 0;

    virtual std::any visitAlter_sequence(PlSqlParser::Alter_sequenceContext *context) = 0;

    virtual std::any visitAlter_session(PlSqlParser::Alter_sessionContext *context) = 0;

    virtual std::any visitAlter_session_set_clause(PlSqlParser::Alter_session_set_clauseContext *context) = 0;

    virtual std::any visitCreate_sequence(PlSqlParser::Create_sequenceContext *context) = 0;

    virtual std::any visitSequence_spec(PlSqlParser::Sequence_specContext *context) = 0;

    virtual std::any visitSequence_start_clause(PlSqlParser::Sequence_start_clauseContext *context) = 0;

    virtual std::any visitCreate_analytic_view(PlSqlParser::Create_analytic_viewContext *context) = 0;

    virtual std::any visitClassification_clause(PlSqlParser::Classification_clauseContext *context) = 0;

    virtual std::any visitCaption_clause(PlSqlParser::Caption_clauseContext *context) = 0;

    virtual std::any visitDescription_clause(PlSqlParser::Description_clauseContext *context) = 0;

    virtual std::any visitClassification_item(PlSqlParser::Classification_itemContext *context) = 0;

    virtual std::any visitLanguage(PlSqlParser::LanguageContext *context) = 0;

    virtual std::any visitCav_using_clause(PlSqlParser::Cav_using_clauseContext *context) = 0;

    virtual std::any visitDim_by_clause(PlSqlParser::Dim_by_clauseContext *context) = 0;

    virtual std::any visitDim_key(PlSqlParser::Dim_keyContext *context) = 0;

    virtual std::any visitDim_ref(PlSqlParser::Dim_refContext *context) = 0;

    virtual std::any visitHier_ref(PlSqlParser::Hier_refContext *context) = 0;

    virtual std::any visitMeasures_clause(PlSqlParser::Measures_clauseContext *context) = 0;

    virtual std::any visitAv_measure(PlSqlParser::Av_measureContext *context) = 0;

    virtual std::any visitBase_meas_clause(PlSqlParser::Base_meas_clauseContext *context) = 0;

    virtual std::any visitMeas_aggregate_clause(PlSqlParser::Meas_aggregate_clauseContext *context) = 0;

    virtual std::any visitCalc_meas_clause(PlSqlParser::Calc_meas_clauseContext *context) = 0;

    virtual std::any visitDefault_measure_clause(PlSqlParser::Default_measure_clauseContext *context) = 0;

    virtual std::any visitDefault_aggregate_clause(PlSqlParser::Default_aggregate_clauseContext *context) = 0;

    virtual std::any visitCache_clause(PlSqlParser::Cache_clauseContext *context) = 0;

    virtual std::any visitCache_specification(PlSqlParser::Cache_specificationContext *context) = 0;

    virtual std::any visitLevels_clause(PlSqlParser::Levels_clauseContext *context) = 0;

    virtual std::any visitLevel_specification(PlSqlParser::Level_specificationContext *context) = 0;

    virtual std::any visitLevel_group_type(PlSqlParser::Level_group_typeContext *context) = 0;

    virtual std::any visitFact_columns_clause(PlSqlParser::Fact_columns_clauseContext *context) = 0;

    virtual std::any visitQry_transform_clause(PlSqlParser::Qry_transform_clauseContext *context) = 0;

    virtual std::any visitCreate_attribute_dimension(PlSqlParser::Create_attribute_dimensionContext *context) = 0;

    virtual std::any visitAd_using_clause(PlSqlParser::Ad_using_clauseContext *context) = 0;

    virtual std::any visitSource_clause(PlSqlParser::Source_clauseContext *context) = 0;

    virtual std::any visitJoin_path_clause(PlSqlParser::Join_path_clauseContext *context) = 0;

    virtual std::any visitJoin_condition(PlSqlParser::Join_conditionContext *context) = 0;

    virtual std::any visitJoin_condition_item(PlSqlParser::Join_condition_itemContext *context) = 0;

    virtual std::any visitAttributes_clause(PlSqlParser::Attributes_clauseContext *context) = 0;

    virtual std::any visitAd_attributes_clause(PlSqlParser::Ad_attributes_clauseContext *context) = 0;

    virtual std::any visitAd_level_clause(PlSqlParser::Ad_level_clauseContext *context) = 0;

    virtual std::any visitKey_clause(PlSqlParser::Key_clauseContext *context) = 0;

    virtual std::any visitAlternate_key_clause(PlSqlParser::Alternate_key_clauseContext *context) = 0;

    virtual std::any visitDim_order_clause(PlSqlParser::Dim_order_clauseContext *context) = 0;

    virtual std::any visitAll_clause(PlSqlParser::All_clauseContext *context) = 0;

    virtual std::any visitCreate_audit_policy(PlSqlParser::Create_audit_policyContext *context) = 0;

    virtual std::any visitPrivilege_audit_clause(PlSqlParser::Privilege_audit_clauseContext *context) = 0;

    virtual std::any visitAction_audit_clause(PlSqlParser::Action_audit_clauseContext *context) = 0;

    virtual std::any visitSystem_actions(PlSqlParser::System_actionsContext *context) = 0;

    virtual std::any visitStandard_actions(PlSqlParser::Standard_actionsContext *context) = 0;

    virtual std::any visitActions_clause(PlSqlParser::Actions_clauseContext *context) = 0;

    virtual std::any visitObject_action(PlSqlParser::Object_actionContext *context) = 0;

    virtual std::any visitSystem_action(PlSqlParser::System_actionContext *context) = 0;

    virtual std::any visitComponent_actions(PlSqlParser::Component_actionsContext *context) = 0;

    virtual std::any visitComponent_action(PlSqlParser::Component_actionContext *context) = 0;

    virtual std::any visitRole_audit_clause(PlSqlParser::Role_audit_clauseContext *context) = 0;

    virtual std::any visitCreate_controlfile(PlSqlParser::Create_controlfileContext *context) = 0;

    virtual std::any visitControlfile_options(PlSqlParser::Controlfile_optionsContext *context) = 0;

    virtual std::any visitLogfile_clause(PlSqlParser::Logfile_clauseContext *context) = 0;

    virtual std::any visitCharacter_set_clause(PlSqlParser::Character_set_clauseContext *context) = 0;

    virtual std::any visitFile_specification(PlSqlParser::File_specificationContext *context) = 0;

    virtual std::any visitCreate_diskgroup(PlSqlParser::Create_diskgroupContext *context) = 0;

    virtual std::any visitQualified_disk_clause(PlSqlParser::Qualified_disk_clauseContext *context) = 0;

    virtual std::any visitCreate_edition(PlSqlParser::Create_editionContext *context) = 0;

    virtual std::any visitCreate_flashback_archive(PlSqlParser::Create_flashback_archiveContext *context) = 0;

    virtual std::any visitFlashback_archive_quota(PlSqlParser::Flashback_archive_quotaContext *context) = 0;

    virtual std::any visitFlashback_archive_retention(PlSqlParser::Flashback_archive_retentionContext *context) = 0;

    virtual std::any visitCreate_hierarchy(PlSqlParser::Create_hierarchyContext *context) = 0;

    virtual std::any visitHier_using_clause(PlSqlParser::Hier_using_clauseContext *context) = 0;

    virtual std::any visitLevel_hier_clause(PlSqlParser::Level_hier_clauseContext *context) = 0;

    virtual std::any visitHier_attrs_clause(PlSqlParser::Hier_attrs_clauseContext *context) = 0;

    virtual std::any visitHier_attr_clause(PlSqlParser::Hier_attr_clauseContext *context) = 0;

    virtual std::any visitHier_attr_name(PlSqlParser::Hier_attr_nameContext *context) = 0;

    virtual std::any visitCreate_index(PlSqlParser::Create_indexContext *context) = 0;

    virtual std::any visitCluster_index_clause(PlSqlParser::Cluster_index_clauseContext *context) = 0;

    virtual std::any visitCluster_name(PlSqlParser::Cluster_nameContext *context) = 0;

    virtual std::any visitTable_index_clause(PlSqlParser::Table_index_clauseContext *context) = 0;

    virtual std::any visitBitmap_join_index_clause(PlSqlParser::Bitmap_join_index_clauseContext *context) = 0;

    virtual std::any visitIndex_expr(PlSqlParser::Index_exprContext *context) = 0;

    virtual std::any visitIndex_properties(PlSqlParser::Index_propertiesContext *context) = 0;

    virtual std::any visitDomain_index_clause(PlSqlParser::Domain_index_clauseContext *context) = 0;

    virtual std::any visitLocal_domain_index_clause(PlSqlParser::Local_domain_index_clauseContext *context) = 0;

    virtual std::any visitXmlindex_clause(PlSqlParser::Xmlindex_clauseContext *context) = 0;

    virtual std::any visitLocal_xmlindex_clause(PlSqlParser::Local_xmlindex_clauseContext *context) = 0;

    virtual std::any visitGlobal_partitioned_index(PlSqlParser::Global_partitioned_indexContext *context) = 0;

    virtual std::any visitIndex_partitioning_clause(PlSqlParser::Index_partitioning_clauseContext *context) = 0;

    virtual std::any visitIndex_partitioning_values_list(PlSqlParser::Index_partitioning_values_listContext *context) = 0;

    virtual std::any visitLocal_partitioned_index(PlSqlParser::Local_partitioned_indexContext *context) = 0;

    virtual std::any visitOn_range_partitioned_table(PlSqlParser::On_range_partitioned_tableContext *context) = 0;

    virtual std::any visitOn_list_partitioned_table(PlSqlParser::On_list_partitioned_tableContext *context) = 0;

    virtual std::any visitPartitioned_table(PlSqlParser::Partitioned_tableContext *context) = 0;

    virtual std::any visitOn_hash_partitioned_table(PlSqlParser::On_hash_partitioned_tableContext *context) = 0;

    virtual std::any visitOn_hash_partitioned_clause(PlSqlParser::On_hash_partitioned_clauseContext *context) = 0;

    virtual std::any visitOn_comp_partitioned_table(PlSqlParser::On_comp_partitioned_tableContext *context) = 0;

    virtual std::any visitOn_comp_partitioned_clause(PlSqlParser::On_comp_partitioned_clauseContext *context) = 0;

    virtual std::any visitIndex_subpartition_clause(PlSqlParser::Index_subpartition_clauseContext *context) = 0;

    virtual std::any visitIndex_subpartition_subclause(PlSqlParser::Index_subpartition_subclauseContext *context) = 0;

    virtual std::any visitOdci_parameters(PlSqlParser::Odci_parametersContext *context) = 0;

    virtual std::any visitIndextype(PlSqlParser::IndextypeContext *context) = 0;

    virtual std::any visitAlter_index(PlSqlParser::Alter_indexContext *context) = 0;

    virtual std::any visitAlter_index_ops_set1(PlSqlParser::Alter_index_ops_set1Context *context) = 0;

    virtual std::any visitAlter_index_ops_set2(PlSqlParser::Alter_index_ops_set2Context *context) = 0;

    virtual std::any visitVisible_or_invisible(PlSqlParser::Visible_or_invisibleContext *context) = 0;

    virtual std::any visitMonitoring_nomonitoring(PlSqlParser::Monitoring_nomonitoringContext *context) = 0;

    virtual std::any visitRebuild_clause(PlSqlParser::Rebuild_clauseContext *context) = 0;

    virtual std::any visitAlter_index_partitioning(PlSqlParser::Alter_index_partitioningContext *context) = 0;

    virtual std::any visitModify_index_default_attrs(PlSqlParser::Modify_index_default_attrsContext *context) = 0;

    virtual std::any visitAdd_hash_index_partition(PlSqlParser::Add_hash_index_partitionContext *context) = 0;

    virtual std::any visitCoalesce_index_partition(PlSqlParser::Coalesce_index_partitionContext *context) = 0;

    virtual std::any visitModify_index_partition(PlSqlParser::Modify_index_partitionContext *context) = 0;

    virtual std::any visitModify_index_partitions_ops(PlSqlParser::Modify_index_partitions_opsContext *context) = 0;

    virtual std::any visitRename_index_partition(PlSqlParser::Rename_index_partitionContext *context) = 0;

    virtual std::any visitDrop_index_partition(PlSqlParser::Drop_index_partitionContext *context) = 0;

    virtual std::any visitSplit_index_partition(PlSqlParser::Split_index_partitionContext *context) = 0;

    virtual std::any visitIndex_partition_description(PlSqlParser::Index_partition_descriptionContext *context) = 0;

    virtual std::any visitModify_index_subpartition(PlSqlParser::Modify_index_subpartitionContext *context) = 0;

    virtual std::any visitPartition_name_old(PlSqlParser::Partition_name_oldContext *context) = 0;

    virtual std::any visitNew_partition_name(PlSqlParser::New_partition_nameContext *context) = 0;

    virtual std::any visitNew_index_name(PlSqlParser::New_index_nameContext *context) = 0;

    virtual std::any visitAlter_inmemory_join_group(PlSqlParser::Alter_inmemory_join_groupContext *context) = 0;

    virtual std::any visitCreate_user(PlSqlParser::Create_userContext *context) = 0;

    virtual std::any visitAlter_user(PlSqlParser::Alter_userContext *context) = 0;

    virtual std::any visitDrop_user(PlSqlParser::Drop_userContext *context) = 0;

    virtual std::any visitAlter_identified_by(PlSqlParser::Alter_identified_byContext *context) = 0;

    virtual std::any visitIdentified_by(PlSqlParser::Identified_byContext *context) = 0;

    virtual std::any visitIdentified_other_clause(PlSqlParser::Identified_other_clauseContext *context) = 0;

    virtual std::any visitUser_tablespace_clause(PlSqlParser::User_tablespace_clauseContext *context) = 0;

    virtual std::any visitQuota_clause(PlSqlParser::Quota_clauseContext *context) = 0;

    virtual std::any visitProfile_clause(PlSqlParser::Profile_clauseContext *context) = 0;

    virtual std::any visitRole_clause(PlSqlParser::Role_clauseContext *context) = 0;

    virtual std::any visitUser_default_role_clause(PlSqlParser::User_default_role_clauseContext *context) = 0;

    virtual std::any visitPassword_expire_clause(PlSqlParser::Password_expire_clauseContext *context) = 0;

    virtual std::any visitUser_lock_clause(PlSqlParser::User_lock_clauseContext *context) = 0;

    virtual std::any visitUser_editions_clause(PlSqlParser::User_editions_clauseContext *context) = 0;

    virtual std::any visitAlter_user_editions_clause(PlSqlParser::Alter_user_editions_clauseContext *context) = 0;

    virtual std::any visitProxy_clause(PlSqlParser::Proxy_clauseContext *context) = 0;

    virtual std::any visitContainer_names(PlSqlParser::Container_namesContext *context) = 0;

    virtual std::any visitSet_container_data(PlSqlParser::Set_container_dataContext *context) = 0;

    virtual std::any visitAdd_rem_container_data(PlSqlParser::Add_rem_container_dataContext *context) = 0;

    virtual std::any visitContainer_data_clause(PlSqlParser::Container_data_clauseContext *context) = 0;

    virtual std::any visitAdminister_key_management(PlSqlParser::Administer_key_managementContext *context) = 0;

    virtual std::any visitKeystore_management_clauses(PlSqlParser::Keystore_management_clausesContext *context) = 0;

    virtual std::any visitCreate_keystore(PlSqlParser::Create_keystoreContext *context) = 0;

    virtual std::any visitOpen_keystore(PlSqlParser::Open_keystoreContext *context) = 0;

    virtual std::any visitForce_keystore(PlSqlParser::Force_keystoreContext *context) = 0;

    virtual std::any visitClose_keystore(PlSqlParser::Close_keystoreContext *context) = 0;

    virtual std::any visitBackup_keystore(PlSqlParser::Backup_keystoreContext *context) = 0;

    virtual std::any visitAlter_keystore_password(PlSqlParser::Alter_keystore_passwordContext *context) = 0;

    virtual std::any visitMerge_into_new_keystore(PlSqlParser::Merge_into_new_keystoreContext *context) = 0;

    virtual std::any visitMerge_into_existing_keystore(PlSqlParser::Merge_into_existing_keystoreContext *context) = 0;

    virtual std::any visitIsolate_keystore(PlSqlParser::Isolate_keystoreContext *context) = 0;

    virtual std::any visitUnite_keystore(PlSqlParser::Unite_keystoreContext *context) = 0;

    virtual std::any visitKey_management_clauses(PlSqlParser::Key_management_clausesContext *context) = 0;

    virtual std::any visitSet_key(PlSqlParser::Set_keyContext *context) = 0;

    virtual std::any visitCreate_key(PlSqlParser::Create_keyContext *context) = 0;

    virtual std::any visitMkid(PlSqlParser::MkidContext *context) = 0;

    virtual std::any visitMk(PlSqlParser::MkContext *context) = 0;

    virtual std::any visitUse_key(PlSqlParser::Use_keyContext *context) = 0;

    virtual std::any visitSet_key_tag(PlSqlParser::Set_key_tagContext *context) = 0;

    virtual std::any visitExport_keys(PlSqlParser::Export_keysContext *context) = 0;

    virtual std::any visitImport_keys(PlSqlParser::Import_keysContext *context) = 0;

    virtual std::any visitMigrate_keys(PlSqlParser::Migrate_keysContext *context) = 0;

    virtual std::any visitReverse_migrate_keys(PlSqlParser::Reverse_migrate_keysContext *context) = 0;

    virtual std::any visitMove_keys(PlSqlParser::Move_keysContext *context) = 0;

    virtual std::any visitIdentified_by_store(PlSqlParser::Identified_by_storeContext *context) = 0;

    virtual std::any visitUsing_algorithm_clause(PlSqlParser::Using_algorithm_clauseContext *context) = 0;

    virtual std::any visitUsing_tag_clause(PlSqlParser::Using_tag_clauseContext *context) = 0;

    virtual std::any visitSecret_management_clauses(PlSqlParser::Secret_management_clausesContext *context) = 0;

    virtual std::any visitAdd_update_secret(PlSqlParser::Add_update_secretContext *context) = 0;

    virtual std::any visitDelete_secret(PlSqlParser::Delete_secretContext *context) = 0;

    virtual std::any visitAdd_update_secret_seps(PlSqlParser::Add_update_secret_sepsContext *context) = 0;

    virtual std::any visitDelete_secret_seps(PlSqlParser::Delete_secret_sepsContext *context) = 0;

    virtual std::any visitZero_downtime_software_patching_clauses(PlSqlParser::Zero_downtime_software_patching_clausesContext *context) = 0;

    virtual std::any visitWith_backup_clause(PlSqlParser::With_backup_clauseContext *context) = 0;

    virtual std::any visitIdentified_by_password_clause(PlSqlParser::Identified_by_password_clauseContext *context) = 0;

    virtual std::any visitKeystore_password(PlSqlParser::Keystore_passwordContext *context) = 0;

    virtual std::any visitPath(PlSqlParser::PathContext *context) = 0;

    virtual std::any visitSecret(PlSqlParser::SecretContext *context) = 0;

    virtual std::any visitAnalyze(PlSqlParser::AnalyzeContext *context) = 0;

    virtual std::any visitPartition_extention_clause(PlSqlParser::Partition_extention_clauseContext *context) = 0;

    virtual std::any visitValidation_clauses(PlSqlParser::Validation_clausesContext *context) = 0;

    virtual std::any visitCompute_clauses(PlSqlParser::Compute_clausesContext *context) = 0;

    virtual std::any visitFor_clause(PlSqlParser::For_clauseContext *context) = 0;

    virtual std::any visitOnline_or_offline(PlSqlParser::Online_or_offlineContext *context) = 0;

    virtual std::any visitInto_clause1(PlSqlParser::Into_clause1Context *context) = 0;

    virtual std::any visitPartition_key_value(PlSqlParser::Partition_key_valueContext *context) = 0;

    virtual std::any visitSubpartition_key_value(PlSqlParser::Subpartition_key_valueContext *context) = 0;

    virtual std::any visitAssociate_statistics(PlSqlParser::Associate_statisticsContext *context) = 0;

    virtual std::any visitColumn_association(PlSqlParser::Column_associationContext *context) = 0;

    virtual std::any visitFunction_association(PlSqlParser::Function_associationContext *context) = 0;

    virtual std::any visitIndextype_name(PlSqlParser::Indextype_nameContext *context) = 0;

    virtual std::any visitUsing_statistics_type(PlSqlParser::Using_statistics_typeContext *context) = 0;

    virtual std::any visitStatistics_type_name(PlSqlParser::Statistics_type_nameContext *context) = 0;

    virtual std::any visitDefault_cost_clause(PlSqlParser::Default_cost_clauseContext *context) = 0;

    virtual std::any visitCpu_cost(PlSqlParser::Cpu_costContext *context) = 0;

    virtual std::any visitIo_cost(PlSqlParser::Io_costContext *context) = 0;

    virtual std::any visitNetwork_cost(PlSqlParser::Network_costContext *context) = 0;

    virtual std::any visitDefault_selectivity_clause(PlSqlParser::Default_selectivity_clauseContext *context) = 0;

    virtual std::any visitDefault_selectivity(PlSqlParser::Default_selectivityContext *context) = 0;

    virtual std::any visitStorage_table_clause(PlSqlParser::Storage_table_clauseContext *context) = 0;

    virtual std::any visitUnified_auditing(PlSqlParser::Unified_auditingContext *context) = 0;

    virtual std::any visitPolicy_name(PlSqlParser::Policy_nameContext *context) = 0;

    virtual std::any visitAudit_traditional(PlSqlParser::Audit_traditionalContext *context) = 0;

    virtual std::any visitAudit_direct_path(PlSqlParser::Audit_direct_pathContext *context) = 0;

    virtual std::any visitAudit_container_clause(PlSqlParser::Audit_container_clauseContext *context) = 0;

    virtual std::any visitAudit_operation_clause(PlSqlParser::Audit_operation_clauseContext *context) = 0;

    virtual std::any visitAuditing_by_clause(PlSqlParser::Auditing_by_clauseContext *context) = 0;

    virtual std::any visitAudit_user(PlSqlParser::Audit_userContext *context) = 0;

    virtual std::any visitAudit_schema_object_clause(PlSqlParser::Audit_schema_object_clauseContext *context) = 0;

    virtual std::any visitSql_operation(PlSqlParser::Sql_operationContext *context) = 0;

    virtual std::any visitAuditing_on_clause(PlSqlParser::Auditing_on_clauseContext *context) = 0;

    virtual std::any visitModel_name(PlSqlParser::Model_nameContext *context) = 0;

    virtual std::any visitObject_name(PlSqlParser::Object_nameContext *context) = 0;

    virtual std::any visitProfile_name(PlSqlParser::Profile_nameContext *context) = 0;

    virtual std::any visitSql_statement_shortcut(PlSqlParser::Sql_statement_shortcutContext *context) = 0;

    virtual std::any visitDrop_index(PlSqlParser::Drop_indexContext *context) = 0;

    virtual std::any visitDisassociate_statistics(PlSqlParser::Disassociate_statisticsContext *context) = 0;

    virtual std::any visitDrop_indextype(PlSqlParser::Drop_indextypeContext *context) = 0;

    virtual std::any visitDrop_inmemory_join_group(PlSqlParser::Drop_inmemory_join_groupContext *context) = 0;

    virtual std::any visitFlashback_table(PlSqlParser::Flashback_tableContext *context) = 0;

    virtual std::any visitRestore_point(PlSqlParser::Restore_pointContext *context) = 0;

    virtual std::any visitPurge_statement(PlSqlParser::Purge_statementContext *context) = 0;

    virtual std::any visitNoaudit_statement(PlSqlParser::Noaudit_statementContext *context) = 0;

    virtual std::any visitRename_object(PlSqlParser::Rename_objectContext *context) = 0;

    virtual std::any visitGrant_statement(PlSqlParser::Grant_statementContext *context) = 0;

    virtual std::any visitContainer_clause(PlSqlParser::Container_clauseContext *context) = 0;

    virtual std::any visitRevoke_statement(PlSqlParser::Revoke_statementContext *context) = 0;

    virtual std::any visitRevoke_system_privilege(PlSqlParser::Revoke_system_privilegeContext *context) = 0;

    virtual std::any visitRevokee_clause(PlSqlParser::Revokee_clauseContext *context) = 0;

    virtual std::any visitRevoke_object_privileges(PlSqlParser::Revoke_object_privilegesContext *context) = 0;

    virtual std::any visitOn_object_clause(PlSqlParser::On_object_clauseContext *context) = 0;

    virtual std::any visitRevoke_roles_from_programs(PlSqlParser::Revoke_roles_from_programsContext *context) = 0;

    virtual std::any visitProgram_unit(PlSqlParser::Program_unitContext *context) = 0;

    virtual std::any visitCreate_dimension(PlSqlParser::Create_dimensionContext *context) = 0;

    virtual std::any visitCreate_directory(PlSqlParser::Create_directoryContext *context) = 0;

    virtual std::any visitDirectory_name(PlSqlParser::Directory_nameContext *context) = 0;

    virtual std::any visitDirectory_path(PlSqlParser::Directory_pathContext *context) = 0;

    virtual std::any visitCreate_inmemory_join_group(PlSqlParser::Create_inmemory_join_groupContext *context) = 0;

    virtual std::any visitDrop_hierarchy(PlSqlParser::Drop_hierarchyContext *context) = 0;

    virtual std::any visitAlter_library(PlSqlParser::Alter_libraryContext *context) = 0;

    virtual std::any visitDrop_java(PlSqlParser::Drop_javaContext *context) = 0;

    virtual std::any visitDrop_library(PlSqlParser::Drop_libraryContext *context) = 0;

    virtual std::any visitCreate_java(PlSqlParser::Create_javaContext *context) = 0;

    virtual std::any visitCreate_library(PlSqlParser::Create_libraryContext *context) = 0;

    virtual std::any visitPlsql_library_source(PlSqlParser::Plsql_library_sourceContext *context) = 0;

    virtual std::any visitCredential_name(PlSqlParser::Credential_nameContext *context) = 0;

    virtual std::any visitLibrary_editionable(PlSqlParser::Library_editionableContext *context) = 0;

    virtual std::any visitLibrary_debug(PlSqlParser::Library_debugContext *context) = 0;

    virtual std::any visitCompiler_parameters_clause(PlSqlParser::Compiler_parameters_clauseContext *context) = 0;

    virtual std::any visitParameter_value(PlSqlParser::Parameter_valueContext *context) = 0;

    virtual std::any visitLibrary_name(PlSqlParser::Library_nameContext *context) = 0;

    virtual std::any visitAlter_dimension(PlSqlParser::Alter_dimensionContext *context) = 0;

    virtual std::any visitLevel_clause(PlSqlParser::Level_clauseContext *context) = 0;

    virtual std::any visitHierarchy_clause(PlSqlParser::Hierarchy_clauseContext *context) = 0;

    virtual std::any visitDimension_join_clause(PlSqlParser::Dimension_join_clauseContext *context) = 0;

    virtual std::any visitAttribute_clause(PlSqlParser::Attribute_clauseContext *context) = 0;

    virtual std::any visitExtended_attribute_clause(PlSqlParser::Extended_attribute_clauseContext *context) = 0;

    virtual std::any visitColumn_one_or_more_sub_clause(PlSqlParser::Column_one_or_more_sub_clauseContext *context) = 0;

    virtual std::any visitAlter_view(PlSqlParser::Alter_viewContext *context) = 0;

    virtual std::any visitAlter_view_editionable(PlSqlParser::Alter_view_editionableContext *context) = 0;

    virtual std::any visitCreate_view(PlSqlParser::Create_viewContext *context) = 0;

    virtual std::any visitEditioning_clause(PlSqlParser::Editioning_clauseContext *context) = 0;

    virtual std::any visitView_options(PlSqlParser::View_optionsContext *context) = 0;

    virtual std::any visitView_alias_constraint(PlSqlParser::View_alias_constraintContext *context) = 0;

    virtual std::any visitObject_view_clause(PlSqlParser::Object_view_clauseContext *context) = 0;

    virtual std::any visitInline_constraint(PlSqlParser::Inline_constraintContext *context) = 0;

    virtual std::any visitInline_ref_constraint(PlSqlParser::Inline_ref_constraintContext *context) = 0;

    virtual std::any visitOut_of_line_ref_constraint(PlSqlParser::Out_of_line_ref_constraintContext *context) = 0;

    virtual std::any visitOut_of_line_constraint(PlSqlParser::Out_of_line_constraintContext *context) = 0;

    virtual std::any visitConstraint_state(PlSqlParser::Constraint_stateContext *context) = 0;

    virtual std::any visitXmltype_view_clause(PlSqlParser::Xmltype_view_clauseContext *context) = 0;

    virtual std::any visitXml_schema_spec(PlSqlParser::Xml_schema_specContext *context) = 0;

    virtual std::any visitXml_schema_url(PlSqlParser::Xml_schema_urlContext *context) = 0;

    virtual std::any visitElement(PlSqlParser::ElementContext *context) = 0;

    virtual std::any visitAlter_tablespace(PlSqlParser::Alter_tablespaceContext *context) = 0;

    virtual std::any visitDatafile_tempfile_clauses(PlSqlParser::Datafile_tempfile_clausesContext *context) = 0;

    virtual std::any visitTablespace_logging_clauses(PlSqlParser::Tablespace_logging_clausesContext *context) = 0;

    virtual std::any visitTablespace_group_clause(PlSqlParser::Tablespace_group_clauseContext *context) = 0;

    virtual std::any visitTablespace_group_name(PlSqlParser::Tablespace_group_nameContext *context) = 0;

    virtual std::any visitTablespace_state_clauses(PlSqlParser::Tablespace_state_clausesContext *context) = 0;

    virtual std::any visitFlashback_mode_clause(PlSqlParser::Flashback_mode_clauseContext *context) = 0;

    virtual std::any visitNew_tablespace_name(PlSqlParser::New_tablespace_nameContext *context) = 0;

    virtual std::any visitCreate_tablespace(PlSqlParser::Create_tablespaceContext *context) = 0;

    virtual std::any visitPermanent_tablespace_clause(PlSqlParser::Permanent_tablespace_clauseContext *context) = 0;

    virtual std::any visitTablespace_encryption_spec(PlSqlParser::Tablespace_encryption_specContext *context) = 0;

    virtual std::any visitLogging_clause(PlSqlParser::Logging_clauseContext *context) = 0;

    virtual std::any visitExtent_management_clause(PlSqlParser::Extent_management_clauseContext *context) = 0;

    virtual std::any visitSegment_management_clause(PlSqlParser::Segment_management_clauseContext *context) = 0;

    virtual std::any visitTemporary_tablespace_clause(PlSqlParser::Temporary_tablespace_clauseContext *context) = 0;

    virtual std::any visitUndo_tablespace_clause(PlSqlParser::Undo_tablespace_clauseContext *context) = 0;

    virtual std::any visitTablespace_retention_clause(PlSqlParser::Tablespace_retention_clauseContext *context) = 0;

    virtual std::any visitCreate_tablespace_set(PlSqlParser::Create_tablespace_setContext *context) = 0;

    virtual std::any visitPermanent_tablespace_attrs(PlSqlParser::Permanent_tablespace_attrsContext *context) = 0;

    virtual std::any visitTablespace_encryption_clause(PlSqlParser::Tablespace_encryption_clauseContext *context) = 0;

    virtual std::any visitDefault_tablespace_params(PlSqlParser::Default_tablespace_paramsContext *context) = 0;

    virtual std::any visitDefault_table_compression(PlSqlParser::Default_table_compressionContext *context) = 0;

    virtual std::any visitLow_high(PlSqlParser::Low_highContext *context) = 0;

    virtual std::any visitDefault_index_compression(PlSqlParser::Default_index_compressionContext *context) = 0;

    virtual std::any visitInmmemory_clause(PlSqlParser::Inmmemory_clauseContext *context) = 0;

    virtual std::any visitDatafile_specification(PlSqlParser::Datafile_specificationContext *context) = 0;

    virtual std::any visitTempfile_specification(PlSqlParser::Tempfile_specificationContext *context) = 0;

    virtual std::any visitDatafile_tempfile_spec(PlSqlParser::Datafile_tempfile_specContext *context) = 0;

    virtual std::any visitRedo_log_file_spec(PlSqlParser::Redo_log_file_specContext *context) = 0;

    virtual std::any visitAutoextend_clause(PlSqlParser::Autoextend_clauseContext *context) = 0;

    virtual std::any visitMaxsize_clause(PlSqlParser::Maxsize_clauseContext *context) = 0;

    virtual std::any visitBuild_clause(PlSqlParser::Build_clauseContext *context) = 0;

    virtual std::any visitParallel_clause(PlSqlParser::Parallel_clauseContext *context) = 0;

    virtual std::any visitParallel_instances_clause(PlSqlParser::Parallel_instances_clauseContext *context) = 0;

    virtual std::any visitAlter_materialized_view(PlSqlParser::Alter_materialized_viewContext *context) = 0;

    virtual std::any visitAlter_mv_option1(PlSqlParser::Alter_mv_option1Context *context) = 0;

    virtual std::any visitAlter_mv_refresh(PlSqlParser::Alter_mv_refreshContext *context) = 0;

    virtual std::any visitRollback_segment(PlSqlParser::Rollback_segmentContext *context) = 0;

    virtual std::any visitModify_mv_column_clause(PlSqlParser::Modify_mv_column_clauseContext *context) = 0;

    virtual std::any visitAlter_materialized_view_log(PlSqlParser::Alter_materialized_view_logContext *context) = 0;

    virtual std::any visitAdd_mv_log_column_clause(PlSqlParser::Add_mv_log_column_clauseContext *context) = 0;

    virtual std::any visitMove_mv_log_clause(PlSqlParser::Move_mv_log_clauseContext *context) = 0;

    virtual std::any visitMv_log_augmentation(PlSqlParser::Mv_log_augmentationContext *context) = 0;

    virtual std::any visitCreate_materialized_view_log(PlSqlParser::Create_materialized_view_logContext *context) = 0;

    virtual std::any visitNew_values_clause(PlSqlParser::New_values_clauseContext *context) = 0;

    virtual std::any visitMv_log_purge_clause(PlSqlParser::Mv_log_purge_clauseContext *context) = 0;

    virtual std::any visitCreate_materialized_zonemap(PlSqlParser::Create_materialized_zonemapContext *context) = 0;

    virtual std::any visitAlter_materialized_zonemap(PlSqlParser::Alter_materialized_zonemapContext *context) = 0;

    virtual std::any visitDrop_materialized_zonemap(PlSqlParser::Drop_materialized_zonemapContext *context) = 0;

    virtual std::any visitZonemap_refresh_clause(PlSqlParser::Zonemap_refresh_clauseContext *context) = 0;

    virtual std::any visitZonemap_attributes(PlSqlParser::Zonemap_attributesContext *context) = 0;

    virtual std::any visitZonemap_name(PlSqlParser::Zonemap_nameContext *context) = 0;

    virtual std::any visitOperator_name(PlSqlParser::Operator_nameContext *context) = 0;

    virtual std::any visitOperator_function_name(PlSqlParser::Operator_function_nameContext *context) = 0;

    virtual std::any visitCreate_zonemap_on_table(PlSqlParser::Create_zonemap_on_tableContext *context) = 0;

    virtual std::any visitCreate_zonemap_as_subquery(PlSqlParser::Create_zonemap_as_subqueryContext *context) = 0;

    virtual std::any visitAlter_operator(PlSqlParser::Alter_operatorContext *context) = 0;

    virtual std::any visitDrop_operator(PlSqlParser::Drop_operatorContext *context) = 0;

    virtual std::any visitCreate_operator(PlSqlParser::Create_operatorContext *context) = 0;

    virtual std::any visitBinding_clause(PlSqlParser::Binding_clauseContext *context) = 0;

    virtual std::any visitAdd_binding_clause(PlSqlParser::Add_binding_clauseContext *context) = 0;

    virtual std::any visitImplementation_clause(PlSqlParser::Implementation_clauseContext *context) = 0;

    virtual std::any visitPrimary_operator_list(PlSqlParser::Primary_operator_listContext *context) = 0;

    virtual std::any visitPrimary_operator_item(PlSqlParser::Primary_operator_itemContext *context) = 0;

    virtual std::any visitOperator_context_clause(PlSqlParser::Operator_context_clauseContext *context) = 0;

    virtual std::any visitUsing_function_clause(PlSqlParser::Using_function_clauseContext *context) = 0;

    virtual std::any visitDrop_binding_clause(PlSqlParser::Drop_binding_clauseContext *context) = 0;

    virtual std::any visitCreate_materialized_view(PlSqlParser::Create_materialized_viewContext *context) = 0;

    virtual std::any visitScoped_table_ref_constraint(PlSqlParser::Scoped_table_ref_constraintContext *context) = 0;

    virtual std::any visitMv_column_alias(PlSqlParser::Mv_column_aliasContext *context) = 0;

    virtual std::any visitCreate_mv_refresh(PlSqlParser::Create_mv_refreshContext *context) = 0;

    virtual std::any visitDrop_materialized_view(PlSqlParser::Drop_materialized_viewContext *context) = 0;

    virtual std::any visitDrop_materialized_view_log(PlSqlParser::Drop_materialized_view_logContext *context) = 0;

    virtual std::any visitCreate_context(PlSqlParser::Create_contextContext *context) = 0;

    virtual std::any visitOracle_namespace(PlSqlParser::Oracle_namespaceContext *context) = 0;

    virtual std::any visitCreate_cluster(PlSqlParser::Create_clusterContext *context) = 0;

    virtual std::any visitCreate_profile(PlSqlParser::Create_profileContext *context) = 0;

    virtual std::any visitResource_parameters(PlSqlParser::Resource_parametersContext *context) = 0;

    virtual std::any visitPassword_parameters(PlSqlParser::Password_parametersContext *context) = 0;

    virtual std::any visitCreate_lockdown_profile(PlSqlParser::Create_lockdown_profileContext *context) = 0;

    virtual std::any visitStatic_base_profile(PlSqlParser::Static_base_profileContext *context) = 0;

    virtual std::any visitDynamic_base_profile(PlSqlParser::Dynamic_base_profileContext *context) = 0;

    virtual std::any visitCreate_outline(PlSqlParser::Create_outlineContext *context) = 0;

    virtual std::any visitCreate_restore_point(PlSqlParser::Create_restore_pointContext *context) = 0;

    virtual std::any visitCreate_role(PlSqlParser::Create_roleContext *context) = 0;

    virtual std::any visitCreate_table(PlSqlParser::Create_tableContext *context) = 0;

    virtual std::any visitXmltype_table(PlSqlParser::Xmltype_tableContext *context) = 0;

    virtual std::any visitXmltype_virtual_columns(PlSqlParser::Xmltype_virtual_columnsContext *context) = 0;

    virtual std::any visitXmltype_column_properties(PlSqlParser::Xmltype_column_propertiesContext *context) = 0;

    virtual std::any visitXmltype_storage(PlSqlParser::Xmltype_storageContext *context) = 0;

    virtual std::any visitXmlschema_spec(PlSqlParser::Xmlschema_specContext *context) = 0;

    virtual std::any visitObject_table(PlSqlParser::Object_tableContext *context) = 0;

    virtual std::any visitObject_type(PlSqlParser::Object_typeContext *context) = 0;

    virtual std::any visitOid_index_clause(PlSqlParser::Oid_index_clauseContext *context) = 0;

    virtual std::any visitOid_clause(PlSqlParser::Oid_clauseContext *context) = 0;

    virtual std::any visitObject_properties(PlSqlParser::Object_propertiesContext *context) = 0;

    virtual std::any visitObject_table_substitution(PlSqlParser::Object_table_substitutionContext *context) = 0;

    virtual std::any visitRelational_table(PlSqlParser::Relational_tableContext *context) = 0;

    virtual std::any visitRelational_table_properties(PlSqlParser::Relational_table_propertiesContext *context) = 0;

    virtual std::any visitRelational_table_property(PlSqlParser::Relational_table_propertyContext *context) = 0;

    virtual std::any visitImmutable_table_clauses(PlSqlParser::Immutable_table_clausesContext *context) = 0;

    virtual std::any visitImmutable_table_no_drop_clause(PlSqlParser::Immutable_table_no_drop_clauseContext *context) = 0;

    virtual std::any visitImmutable_table_no_delete_clause(PlSqlParser::Immutable_table_no_delete_clauseContext *context) = 0;

    virtual std::any visitBlockchain_table_clauses(PlSqlParser::Blockchain_table_clausesContext *context) = 0;

    virtual std::any visitBlockchain_drop_table_clause(PlSqlParser::Blockchain_drop_table_clauseContext *context) = 0;

    virtual std::any visitBlockchain_row_retention_clause(PlSqlParser::Blockchain_row_retention_clauseContext *context) = 0;

    virtual std::any visitBlockchain_hash_and_data_format_clause(PlSqlParser::Blockchain_hash_and_data_format_clauseContext *context) = 0;

    virtual std::any visitCollation_name(PlSqlParser::Collation_nameContext *context) = 0;

    virtual std::any visitTable_properties(PlSqlParser::Table_propertiesContext *context) = 0;

    virtual std::any visitRead_only_clause(PlSqlParser::Read_only_clauseContext *context) = 0;

    virtual std::any visitIndexing_clause(PlSqlParser::Indexing_clauseContext *context) = 0;

    virtual std::any visitAttribute_clustering_clause(PlSqlParser::Attribute_clustering_clauseContext *context) = 0;

    virtual std::any visitClustering_join(PlSqlParser::Clustering_joinContext *context) = 0;

    virtual std::any visitClustering_join_item(PlSqlParser::Clustering_join_itemContext *context) = 0;

    virtual std::any visitEquijoin_condition(PlSqlParser::Equijoin_conditionContext *context) = 0;

    virtual std::any visitCluster_clause(PlSqlParser::Cluster_clauseContext *context) = 0;

    virtual std::any visitClustering_columns(PlSqlParser::Clustering_columnsContext *context) = 0;

    virtual std::any visitClustering_column_group(PlSqlParser::Clustering_column_groupContext *context) = 0;

    virtual std::any visitYes_no(PlSqlParser::Yes_noContext *context) = 0;

    virtual std::any visitZonemap_clause(PlSqlParser::Zonemap_clauseContext *context) = 0;

    virtual std::any visitLogical_replication_clause(PlSqlParser::Logical_replication_clauseContext *context) = 0;

    virtual std::any visitTable_name(PlSqlParser::Table_nameContext *context) = 0;

    virtual std::any visitRelational_property(PlSqlParser::Relational_propertyContext *context) = 0;

    virtual std::any visitTable_partitioning_clauses(PlSqlParser::Table_partitioning_clausesContext *context) = 0;

    virtual std::any visitRange_partitions(PlSqlParser::Range_partitionsContext *context) = 0;

    virtual std::any visitList_partitions(PlSqlParser::List_partitionsContext *context) = 0;

    virtual std::any visitHash_partitions(PlSqlParser::Hash_partitionsContext *context) = 0;

    virtual std::any visitIndividual_hash_partitions(PlSqlParser::Individual_hash_partitionsContext *context) = 0;

    virtual std::any visitHash_partitions_by_quantity(PlSqlParser::Hash_partitions_by_quantityContext *context) = 0;

    virtual std::any visitHash_partition_quantity(PlSqlParser::Hash_partition_quantityContext *context) = 0;

    virtual std::any visitComposite_range_partitions(PlSqlParser::Composite_range_partitionsContext *context) = 0;

    virtual std::any visitComposite_list_partitions(PlSqlParser::Composite_list_partitionsContext *context) = 0;

    virtual std::any visitComposite_hash_partitions(PlSqlParser::Composite_hash_partitionsContext *context) = 0;

    virtual std::any visitReference_partitioning(PlSqlParser::Reference_partitioningContext *context) = 0;

    virtual std::any visitReference_partition_desc(PlSqlParser::Reference_partition_descContext *context) = 0;

    virtual std::any visitSystem_partitioning(PlSqlParser::System_partitioningContext *context) = 0;

    virtual std::any visitRange_partition_desc(PlSqlParser::Range_partition_descContext *context) = 0;

    virtual std::any visitList_partition_desc(PlSqlParser::List_partition_descContext *context) = 0;

    virtual std::any visitSubpartition_template(PlSqlParser::Subpartition_templateContext *context) = 0;

    virtual std::any visitHash_subpartition_quantity(PlSqlParser::Hash_subpartition_quantityContext *context) = 0;

    virtual std::any visitSubpartition_by_range(PlSqlParser::Subpartition_by_rangeContext *context) = 0;

    virtual std::any visitSubpartition_by_list(PlSqlParser::Subpartition_by_listContext *context) = 0;

    virtual std::any visitSubpartition_by_hash(PlSqlParser::Subpartition_by_hashContext *context) = 0;

    virtual std::any visitSubpartition_name(PlSqlParser::Subpartition_nameContext *context) = 0;

    virtual std::any visitRange_subpartition_desc(PlSqlParser::Range_subpartition_descContext *context) = 0;

    virtual std::any visitList_subpartition_desc(PlSqlParser::List_subpartition_descContext *context) = 0;

    virtual std::any visitIndividual_hash_subparts(PlSqlParser::Individual_hash_subpartsContext *context) = 0;

    virtual std::any visitHash_subparts_by_quantity(PlSqlParser::Hash_subparts_by_quantityContext *context) = 0;

    virtual std::any visitRange_values_clause(PlSqlParser::Range_values_clauseContext *context) = 0;

    virtual std::any visitRange_values_list(PlSqlParser::Range_values_listContext *context) = 0;

    virtual std::any visitList_values_clause(PlSqlParser::List_values_clauseContext *context) = 0;

    virtual std::any visitTable_partition_description(PlSqlParser::Table_partition_descriptionContext *context) = 0;

    virtual std::any visitPartitioning_storage_clause(PlSqlParser::Partitioning_storage_clauseContext *context) = 0;

    virtual std::any visitLob_partitioning_storage(PlSqlParser::Lob_partitioning_storageContext *context) = 0;

    virtual std::any visitSize_clause(PlSqlParser::Size_clauseContext *context) = 0;

    virtual std::any visitTable_compression(PlSqlParser::Table_compressionContext *context) = 0;

    virtual std::any visitInmemory_table_clause(PlSqlParser::Inmemory_table_clauseContext *context) = 0;

    virtual std::any visitInmemory_attributes(PlSqlParser::Inmemory_attributesContext *context) = 0;

    virtual std::any visitInmemory_memcompress(PlSqlParser::Inmemory_memcompressContext *context) = 0;

    virtual std::any visitInmemory_priority(PlSqlParser::Inmemory_priorityContext *context) = 0;

    virtual std::any visitInmemory_distribute(PlSqlParser::Inmemory_distributeContext *context) = 0;

    virtual std::any visitInmemory_duplicate(PlSqlParser::Inmemory_duplicateContext *context) = 0;

    virtual std::any visitInmemory_column_clause(PlSqlParser::Inmemory_column_clauseContext *context) = 0;

    virtual std::any visitPhysical_attributes_clause(PlSqlParser::Physical_attributes_clauseContext *context) = 0;

    virtual std::any visitStorage_clause(PlSqlParser::Storage_clauseContext *context) = 0;

    virtual std::any visitDeferred_segment_creation(PlSqlParser::Deferred_segment_creationContext *context) = 0;

    virtual std::any visitSegment_attributes_clause(PlSqlParser::Segment_attributes_clauseContext *context) = 0;

    virtual std::any visitPhysical_properties(PlSqlParser::Physical_propertiesContext *context) = 0;

    virtual std::any visitIlm_clause(PlSqlParser::Ilm_clauseContext *context) = 0;

    virtual std::any visitIlm_policy_clause(PlSqlParser::Ilm_policy_clauseContext *context) = 0;

    virtual std::any visitIlm_compression_policy(PlSqlParser::Ilm_compression_policyContext *context) = 0;

    virtual std::any visitIlm_tiering_policy(PlSqlParser::Ilm_tiering_policyContext *context) = 0;

    virtual std::any visitIlm_after_on(PlSqlParser::Ilm_after_onContext *context) = 0;

    virtual std::any visitSegment_group(PlSqlParser::Segment_groupContext *context) = 0;

    virtual std::any visitIlm_inmemory_policy(PlSqlParser::Ilm_inmemory_policyContext *context) = 0;

    virtual std::any visitIlm_time_period(PlSqlParser::Ilm_time_periodContext *context) = 0;

    virtual std::any visitHeap_org_table_clause(PlSqlParser::Heap_org_table_clauseContext *context) = 0;

    virtual std::any visitExternal_table_clause(PlSqlParser::External_table_clauseContext *context) = 0;

    virtual std::any visitAccess_driver_type(PlSqlParser::Access_driver_typeContext *context) = 0;

    virtual std::any visitExternal_table_data_props(PlSqlParser::External_table_data_propsContext *context) = 0;

    virtual std::any visitExternal_table_data_format(PlSqlParser::External_table_data_formatContext *context) = 0;

    virtual std::any visitExternal_table_transform(PlSqlParser::External_table_transformContext *context) = 0;

    virtual std::any visitExternal_table_field(PlSqlParser::External_table_fieldContext *context) = 0;

    virtual std::any visitExternal_table_field_list(PlSqlParser::External_table_field_listContext *context) = 0;

    virtual std::any visitExternal_table_fields_clause(PlSqlParser::External_table_fields_clauseContext *context) = 0;

    virtual std::any visitExternal_table_position_clause(PlSqlParser::External_table_position_clauseContext *context) = 0;

    virtual std::any visitExternal_table_datatype_clause(PlSqlParser::External_table_datatype_clauseContext *context) = 0;

    virtual std::any visitExternal_table_delimit_clause(PlSqlParser::External_table_delimit_clauseContext *context) = 0;

    virtual std::any visitExternal_table_trim_clause(PlSqlParser::External_table_trim_clauseContext *context) = 0;

    virtual std::any visitExternal_table_date_format_clause(PlSqlParser::External_table_date_format_clauseContext *context) = 0;

    virtual std::any visitExternal_table_init_clause(PlSqlParser::External_table_init_clauseContext *context) = 0;

    virtual std::any visitExternal_table_condition_clause(PlSqlParser::External_table_condition_clauseContext *context) = 0;

    virtual std::any visitExternal_table_lls_clause(PlSqlParser::External_table_lls_clauseContext *context) = 0;

    virtual std::any visitExternal_table_records(PlSqlParser::External_table_recordsContext *context) = 0;

    virtual std::any visitExternal_table_record_options_clause(PlSqlParser::External_table_record_options_clauseContext *context) = 0;

    virtual std::any visitExternal_table_output_files(PlSqlParser::External_table_output_filesContext *context) = 0;

    virtual std::any visitExternal_table_fields(PlSqlParser::External_table_fieldsContext *context) = 0;

    virtual std::any visitExternal_table_datapump(PlSqlParser::External_table_datapumpContext *context) = 0;

    virtual std::any visitExternal_table_hive(PlSqlParser::External_table_hiveContext *context) = 0;

    virtual std::any visitExternal_table_hive_parameter_map(PlSqlParser::External_table_hive_parameter_mapContext *context) = 0;

    virtual std::any visitExternal_table_hive_parameter_map_entry(PlSqlParser::External_table_hive_parameter_map_entryContext *context) = 0;

    virtual std::any visitExternal_table_directory(PlSqlParser::External_table_directoryContext *context) = 0;

    virtual std::any visitRow_movement_clause(PlSqlParser::Row_movement_clauseContext *context) = 0;

    virtual std::any visitFlashback_archive_clause(PlSqlParser::Flashback_archive_clauseContext *context) = 0;

    virtual std::any visitLog_grp(PlSqlParser::Log_grpContext *context) = 0;

    virtual std::any visitSupplemental_table_logging(PlSqlParser::Supplemental_table_loggingContext *context) = 0;

    virtual std::any visitSupplemental_log_grp_clause(PlSqlParser::Supplemental_log_grp_clauseContext *context) = 0;

    virtual std::any visitSupplemental_id_key_clause(PlSqlParser::Supplemental_id_key_clauseContext *context) = 0;

    virtual std::any visitAllocate_extent_clause(PlSqlParser::Allocate_extent_clauseContext *context) = 0;

    virtual std::any visitDeallocate_unused_clause(PlSqlParser::Deallocate_unused_clauseContext *context) = 0;

    virtual std::any visitShrink_clause(PlSqlParser::Shrink_clauseContext *context) = 0;

    virtual std::any visitRecords_per_block_clause(PlSqlParser::Records_per_block_clauseContext *context) = 0;

    virtual std::any visitUpgrade_table_clause(PlSqlParser::Upgrade_table_clauseContext *context) = 0;

    virtual std::any visitTruncate_table(PlSqlParser::Truncate_tableContext *context) = 0;

    virtual std::any visitDrop_table(PlSqlParser::Drop_tableContext *context) = 0;

    virtual std::any visitDrop_tablespace(PlSqlParser::Drop_tablespaceContext *context) = 0;

    virtual std::any visitDrop_tablespace_set(PlSqlParser::Drop_tablespace_setContext *context) = 0;

    virtual std::any visitIncluding_contents_clause(PlSqlParser::Including_contents_clauseContext *context) = 0;

    virtual std::any visitDrop_view(PlSqlParser::Drop_viewContext *context) = 0;

    virtual std::any visitComment_on_column(PlSqlParser::Comment_on_columnContext *context) = 0;

    virtual std::any visitEnable_or_disable(PlSqlParser::Enable_or_disableContext *context) = 0;

    virtual std::any visitAllow_or_disallow(PlSqlParser::Allow_or_disallowContext *context) = 0;

    virtual std::any visitAlter_synonym(PlSqlParser::Alter_synonymContext *context) = 0;

    virtual std::any visitCreate_synonym(PlSqlParser::Create_synonymContext *context) = 0;

    virtual std::any visitDrop_synonym(PlSqlParser::Drop_synonymContext *context) = 0;

    virtual std::any visitCreate_spfile(PlSqlParser::Create_spfileContext *context) = 0;

    virtual std::any visitSpfile_name(PlSqlParser::Spfile_nameContext *context) = 0;

    virtual std::any visitPfile_name(PlSqlParser::Pfile_nameContext *context) = 0;

    virtual std::any visitComment_on_table(PlSqlParser::Comment_on_tableContext *context) = 0;

    virtual std::any visitComment_on_materialized(PlSqlParser::Comment_on_materializedContext *context) = 0;

    virtual std::any visitAlter_analytic_view(PlSqlParser::Alter_analytic_viewContext *context) = 0;

    virtual std::any visitAlter_add_cache_clause(PlSqlParser::Alter_add_cache_clauseContext *context) = 0;

    virtual std::any visitLevels_item(PlSqlParser::Levels_itemContext *context) = 0;

    virtual std::any visitMeasure_list(PlSqlParser::Measure_listContext *context) = 0;

    virtual std::any visitAlter_drop_cache_clause(PlSqlParser::Alter_drop_cache_clauseContext *context) = 0;

    virtual std::any visitAlter_attribute_dimension(PlSqlParser::Alter_attribute_dimensionContext *context) = 0;

    virtual std::any visitAlter_audit_policy(PlSqlParser::Alter_audit_policyContext *context) = 0;

    virtual std::any visitAlter_cluster(PlSqlParser::Alter_clusterContext *context) = 0;

    virtual std::any visitDrop_analytic_view(PlSqlParser::Drop_analytic_viewContext *context) = 0;

    virtual std::any visitDrop_attribute_dimension(PlSqlParser::Drop_attribute_dimensionContext *context) = 0;

    virtual std::any visitDrop_audit_policy(PlSqlParser::Drop_audit_policyContext *context) = 0;

    virtual std::any visitDrop_flashback_archive(PlSqlParser::Drop_flashback_archiveContext *context) = 0;

    virtual std::any visitDrop_cluster(PlSqlParser::Drop_clusterContext *context) = 0;

    virtual std::any visitDrop_context(PlSqlParser::Drop_contextContext *context) = 0;

    virtual std::any visitDrop_directory(PlSqlParser::Drop_directoryContext *context) = 0;

    virtual std::any visitDrop_diskgroup(PlSqlParser::Drop_diskgroupContext *context) = 0;

    virtual std::any visitDrop_edition(PlSqlParser::Drop_editionContext *context) = 0;

    virtual std::any visitTruncate_cluster(PlSqlParser::Truncate_clusterContext *context) = 0;

    virtual std::any visitCache_or_nocache(PlSqlParser::Cache_or_nocacheContext *context) = 0;

    virtual std::any visitDatabase_name(PlSqlParser::Database_nameContext *context) = 0;

    virtual std::any visitAlter_database(PlSqlParser::Alter_databaseContext *context) = 0;

    virtual std::any visitDatabase_clause(PlSqlParser::Database_clauseContext *context) = 0;

    virtual std::any visitStartup_clauses(PlSqlParser::Startup_clausesContext *context) = 0;

    virtual std::any visitResetlogs_or_noresetlogs(PlSqlParser::Resetlogs_or_noresetlogsContext *context) = 0;

    virtual std::any visitUpgrade_or_downgrade(PlSqlParser::Upgrade_or_downgradeContext *context) = 0;

    virtual std::any visitRecovery_clauses(PlSqlParser::Recovery_clausesContext *context) = 0;

    virtual std::any visitBegin_or_end(PlSqlParser::Begin_or_endContext *context) = 0;

    virtual std::any visitGeneral_recovery(PlSqlParser::General_recoveryContext *context) = 0;

    virtual std::any visitFull_database_recovery(PlSqlParser::Full_database_recoveryContext *context) = 0;

    virtual std::any visitPartial_database_recovery(PlSqlParser::Partial_database_recoveryContext *context) = 0;

    virtual std::any visitPartial_database_recovery_10g(PlSqlParser::Partial_database_recovery_10gContext *context) = 0;

    virtual std::any visitManaged_standby_recovery(PlSqlParser::Managed_standby_recoveryContext *context) = 0;

    virtual std::any visitDb_name(PlSqlParser::Db_nameContext *context) = 0;

    virtual std::any visitDatabase_file_clauses(PlSqlParser::Database_file_clausesContext *context) = 0;

    virtual std::any visitCreate_datafile_clause(PlSqlParser::Create_datafile_clauseContext *context) = 0;

    virtual std::any visitAlter_datafile_clause(PlSqlParser::Alter_datafile_clauseContext *context) = 0;

    virtual std::any visitAlter_tempfile_clause(PlSqlParser::Alter_tempfile_clauseContext *context) = 0;

    virtual std::any visitMove_datafile_clause(PlSqlParser::Move_datafile_clauseContext *context) = 0;

    virtual std::any visitLogfile_clauses(PlSqlParser::Logfile_clausesContext *context) = 0;

    virtual std::any visitAdd_logfile_clauses(PlSqlParser::Add_logfile_clausesContext *context) = 0;

    virtual std::any visitGroup_redo_logfile(PlSqlParser::Group_redo_logfileContext *context) = 0;

    virtual std::any visitDrop_logfile_clauses(PlSqlParser::Drop_logfile_clausesContext *context) = 0;

    virtual std::any visitSwitch_logfile_clause(PlSqlParser::Switch_logfile_clauseContext *context) = 0;

    virtual std::any visitSupplemental_db_logging(PlSqlParser::Supplemental_db_loggingContext *context) = 0;

    virtual std::any visitAdd_or_drop(PlSqlParser::Add_or_dropContext *context) = 0;

    virtual std::any visitSupplemental_plsql_clause(PlSqlParser::Supplemental_plsql_clauseContext *context) = 0;

    virtual std::any visitLogfile_descriptor(PlSqlParser::Logfile_descriptorContext *context) = 0;

    virtual std::any visitControlfile_clauses(PlSqlParser::Controlfile_clausesContext *context) = 0;

    virtual std::any visitTrace_file_clause(PlSqlParser::Trace_file_clauseContext *context) = 0;

    virtual std::any visitStandby_database_clauses(PlSqlParser::Standby_database_clausesContext *context) = 0;

    virtual std::any visitActivate_standby_db_clause(PlSqlParser::Activate_standby_db_clauseContext *context) = 0;

    virtual std::any visitMaximize_standby_db_clause(PlSqlParser::Maximize_standby_db_clauseContext *context) = 0;

    virtual std::any visitRegister_logfile_clause(PlSqlParser::Register_logfile_clauseContext *context) = 0;

    virtual std::any visitCommit_switchover_clause(PlSqlParser::Commit_switchover_clauseContext *context) = 0;

    virtual std::any visitStart_standby_clause(PlSqlParser::Start_standby_clauseContext *context) = 0;

    virtual std::any visitStop_standby_clause(PlSqlParser::Stop_standby_clauseContext *context) = 0;

    virtual std::any visitConvert_database_clause(PlSqlParser::Convert_database_clauseContext *context) = 0;

    virtual std::any visitDefault_settings_clause(PlSqlParser::Default_settings_clauseContext *context) = 0;

    virtual std::any visitSet_time_zone_clause(PlSqlParser::Set_time_zone_clauseContext *context) = 0;

    virtual std::any visitInstance_clauses(PlSqlParser::Instance_clausesContext *context) = 0;

    virtual std::any visitSecurity_clause(PlSqlParser::Security_clauseContext *context) = 0;

    virtual std::any visitDomain(PlSqlParser::DomainContext *context) = 0;

    virtual std::any visitDatabase(PlSqlParser::DatabaseContext *context) = 0;

    virtual std::any visitEdition_name(PlSqlParser::Edition_nameContext *context) = 0;

    virtual std::any visitFilenumber(PlSqlParser::FilenumberContext *context) = 0;

    virtual std::any visitFilename(PlSqlParser::FilenameContext *context) = 0;

    virtual std::any visitPrepare_clause(PlSqlParser::Prepare_clauseContext *context) = 0;

    virtual std::any visitDrop_mirror_clause(PlSqlParser::Drop_mirror_clauseContext *context) = 0;

    virtual std::any visitLost_write_protection(PlSqlParser::Lost_write_protectionContext *context) = 0;

    virtual std::any visitCdb_fleet_clauses(PlSqlParser::Cdb_fleet_clausesContext *context) = 0;

    virtual std::any visitLead_cdb_clause(PlSqlParser::Lead_cdb_clauseContext *context) = 0;

    virtual std::any visitLead_cdb_uri_clause(PlSqlParser::Lead_cdb_uri_clauseContext *context) = 0;

    virtual std::any visitProperty_clauses(PlSqlParser::Property_clausesContext *context) = 0;

    virtual std::any visitReplay_upgrade_clauses(PlSqlParser::Replay_upgrade_clausesContext *context) = 0;

    virtual std::any visitAlter_database_link(PlSqlParser::Alter_database_linkContext *context) = 0;

    virtual std::any visitPassword_value(PlSqlParser::Password_valueContext *context) = 0;

    virtual std::any visitLink_authentication(PlSqlParser::Link_authenticationContext *context) = 0;

    virtual std::any visitCreate_schema(PlSqlParser::Create_schemaContext *context) = 0;

    virtual std::any visitCreate_database(PlSqlParser::Create_databaseContext *context) = 0;

    virtual std::any visitDatabase_logging_clauses(PlSqlParser::Database_logging_clausesContext *context) = 0;

    virtual std::any visitDatabase_logging_sub_clause(PlSqlParser::Database_logging_sub_clauseContext *context) = 0;

    virtual std::any visitTablespace_clauses(PlSqlParser::Tablespace_clausesContext *context) = 0;

    virtual std::any visitEnable_pluggable_database(PlSqlParser::Enable_pluggable_databaseContext *context) = 0;

    virtual std::any visitFile_name_convert(PlSqlParser::File_name_convertContext *context) = 0;

    virtual std::any visitFilename_convert_sub_clause(PlSqlParser::Filename_convert_sub_clauseContext *context) = 0;

    virtual std::any visitTablespace_datafile_clauses(PlSqlParser::Tablespace_datafile_clausesContext *context) = 0;

    virtual std::any visitUndo_mode_clause(PlSqlParser::Undo_mode_clauseContext *context) = 0;

    virtual std::any visitDefault_tablespace(PlSqlParser::Default_tablespaceContext *context) = 0;

    virtual std::any visitDefault_temp_tablespace(PlSqlParser::Default_temp_tablespaceContext *context) = 0;

    virtual std::any visitUndo_tablespace(PlSqlParser::Undo_tablespaceContext *context) = 0;

    virtual std::any visitDrop_database(PlSqlParser::Drop_databaseContext *context) = 0;

    virtual std::any visitCreate_database_link(PlSqlParser::Create_database_linkContext *context) = 0;

    virtual std::any visitDrop_database_link(PlSqlParser::Drop_database_linkContext *context) = 0;

    virtual std::any visitAlter_tablespace_set(PlSqlParser::Alter_tablespace_setContext *context) = 0;

    virtual std::any visitAlter_tablespace_attrs(PlSqlParser::Alter_tablespace_attrsContext *context) = 0;

    virtual std::any visitAlter_tablespace_encryption(PlSqlParser::Alter_tablespace_encryptionContext *context) = 0;

    virtual std::any visitTs_file_name_convert(PlSqlParser::Ts_file_name_convertContext *context) = 0;

    virtual std::any visitAlter_role(PlSqlParser::Alter_roleContext *context) = 0;

    virtual std::any visitRole_identified_clause(PlSqlParser::Role_identified_clauseContext *context) = 0;

    virtual std::any visitAlter_table(PlSqlParser::Alter_tableContext *context) = 0;

    virtual std::any visitMemoptimize_read_write_clause(PlSqlParser::Memoptimize_read_write_clauseContext *context) = 0;

    virtual std::any visitAlter_table_properties(PlSqlParser::Alter_table_propertiesContext *context) = 0;

    virtual std::any visitAlter_table_partitioning(PlSqlParser::Alter_table_partitioningContext *context) = 0;

    virtual std::any visitAdd_table_partition(PlSqlParser::Add_table_partitionContext *context) = 0;

    virtual std::any visitDrop_table_partition(PlSqlParser::Drop_table_partitionContext *context) = 0;

    virtual std::any visitMerge_table_partition(PlSqlParser::Merge_table_partitionContext *context) = 0;

    virtual std::any visitModify_table_partition(PlSqlParser::Modify_table_partitionContext *context) = 0;

    virtual std::any visitSplit_table_partition(PlSqlParser::Split_table_partitionContext *context) = 0;

    virtual std::any visitTruncate_table_partition(PlSqlParser::Truncate_table_partitionContext *context) = 0;

    virtual std::any visitExchange_table_partition(PlSqlParser::Exchange_table_partitionContext *context) = 0;

    virtual std::any visitCoalesce_table_partition(PlSqlParser::Coalesce_table_partitionContext *context) = 0;

    virtual std::any visitAlter_interval_partition(PlSqlParser::Alter_interval_partitionContext *context) = 0;

    virtual std::any visitMove_table_partition(PlSqlParser::Move_table_partitionContext *context) = 0;

    virtual std::any visitFilter_condition(PlSqlParser::Filter_conditionContext *context) = 0;

    virtual std::any visitRename_table_partition(PlSqlParser::Rename_table_partitionContext *context) = 0;

    virtual std::any visitPartition_extended_names(PlSqlParser::Partition_extended_namesContext *context) = 0;

    virtual std::any visitSubpartition_extended_names(PlSqlParser::Subpartition_extended_namesContext *context) = 0;

    virtual std::any visitAlter_table_properties_1(PlSqlParser::Alter_table_properties_1Context *context) = 0;

    virtual std::any visitAlter_iot_clauses(PlSqlParser::Alter_iot_clausesContext *context) = 0;

    virtual std::any visitAlter_mapping_table_clause(PlSqlParser::Alter_mapping_table_clauseContext *context) = 0;

    virtual std::any visitAlter_overflow_clause(PlSqlParser::Alter_overflow_clauseContext *context) = 0;

    virtual std::any visitAdd_overflow_clause(PlSqlParser::Add_overflow_clauseContext *context) = 0;

    virtual std::any visitUpdate_index_clauses(PlSqlParser::Update_index_clausesContext *context) = 0;

    virtual std::any visitUpdate_global_index_clause(PlSqlParser::Update_global_index_clauseContext *context) = 0;

    virtual std::any visitUpdate_all_indexes_clause(PlSqlParser::Update_all_indexes_clauseContext *context) = 0;

    virtual std::any visitUpdate_all_indexes_index_clause(PlSqlParser::Update_all_indexes_index_clauseContext *context) = 0;

    virtual std::any visitUpdate_index_partition(PlSqlParser::Update_index_partitionContext *context) = 0;

    virtual std::any visitUpdate_index_subpartition(PlSqlParser::Update_index_subpartitionContext *context) = 0;

    virtual std::any visitEnable_disable_clause(PlSqlParser::Enable_disable_clauseContext *context) = 0;

    virtual std::any visitUsing_index_clause(PlSqlParser::Using_index_clauseContext *context) = 0;

    virtual std::any visitIndex_attributes(PlSqlParser::Index_attributesContext *context) = 0;

    virtual std::any visitSort_or_nosort(PlSqlParser::Sort_or_nosortContext *context) = 0;

    virtual std::any visitExceptions_clause(PlSqlParser::Exceptions_clauseContext *context) = 0;

    virtual std::any visitMove_table_clause(PlSqlParser::Move_table_clauseContext *context) = 0;

    virtual std::any visitIndex_org_table_clause(PlSqlParser::Index_org_table_clauseContext *context) = 0;

    virtual std::any visitMapping_table_clause(PlSqlParser::Mapping_table_clauseContext *context) = 0;

    virtual std::any visitKey_compression(PlSqlParser::Key_compressionContext *context) = 0;

    virtual std::any visitIndex_org_overflow_clause(PlSqlParser::Index_org_overflow_clauseContext *context) = 0;

    virtual std::any visitColumn_clauses(PlSqlParser::Column_clausesContext *context) = 0;

    virtual std::any visitModify_collection_retrieval(PlSqlParser::Modify_collection_retrievalContext *context) = 0;

    virtual std::any visitCollection_item(PlSqlParser::Collection_itemContext *context) = 0;

    virtual std::any visitRename_column_clause(PlSqlParser::Rename_column_clauseContext *context) = 0;

    virtual std::any visitOld_column_name(PlSqlParser::Old_column_nameContext *context) = 0;

    virtual std::any visitNew_column_name(PlSqlParser::New_column_nameContext *context) = 0;

    virtual std::any visitAdd_modify_drop_column_clauses(PlSqlParser::Add_modify_drop_column_clausesContext *context) = 0;

    virtual std::any visitDrop_column_clause(PlSqlParser::Drop_column_clauseContext *context) = 0;

    virtual std::any visitModify_column_clauses(PlSqlParser::Modify_column_clausesContext *context) = 0;

    virtual std::any visitModify_col_properties(PlSqlParser::Modify_col_propertiesContext *context) = 0;

    virtual std::any visitModify_col_visibility(PlSqlParser::Modify_col_visibilityContext *context) = 0;

    virtual std::any visitModify_col_substitutable(PlSqlParser::Modify_col_substitutableContext *context) = 0;

    virtual std::any visitAdd_column_clause(PlSqlParser::Add_column_clauseContext *context) = 0;

    virtual std::any visitVarray_col_properties(PlSqlParser::Varray_col_propertiesContext *context) = 0;

    virtual std::any visitVarray_storage_clause(PlSqlParser::Varray_storage_clauseContext *context) = 0;

    virtual std::any visitLob_segname(PlSqlParser::Lob_segnameContext *context) = 0;

    virtual std::any visitLob_item(PlSqlParser::Lob_itemContext *context) = 0;

    virtual std::any visitLob_storage_parameters(PlSqlParser::Lob_storage_parametersContext *context) = 0;

    virtual std::any visitLob_storage_clause(PlSqlParser::Lob_storage_clauseContext *context) = 0;

    virtual std::any visitModify_lob_storage_clause(PlSqlParser::Modify_lob_storage_clauseContext *context) = 0;

    virtual std::any visitModify_lob_parameters(PlSqlParser::Modify_lob_parametersContext *context) = 0;

    virtual std::any visitLob_parameters(PlSqlParser::Lob_parametersContext *context) = 0;

    virtual std::any visitLob_deduplicate_clause(PlSqlParser::Lob_deduplicate_clauseContext *context) = 0;

    virtual std::any visitLob_compression_clause(PlSqlParser::Lob_compression_clauseContext *context) = 0;

    virtual std::any visitLob_retention_clause(PlSqlParser::Lob_retention_clauseContext *context) = 0;

    virtual std::any visitEncryption_spec(PlSqlParser::Encryption_specContext *context) = 0;

    virtual std::any visitTablespace(PlSqlParser::TablespaceContext *context) = 0;

    virtual std::any visitVarray_item(PlSqlParser::Varray_itemContext *context) = 0;

    virtual std::any visitColumn_properties(PlSqlParser::Column_propertiesContext *context) = 0;

    virtual std::any visitLob_partition_storage(PlSqlParser::Lob_partition_storageContext *context) = 0;

    virtual std::any visitPeriod_definition(PlSqlParser::Period_definitionContext *context) = 0;

    virtual std::any visitStart_time_column(PlSqlParser::Start_time_columnContext *context) = 0;

    virtual std::any visitEnd_time_column(PlSqlParser::End_time_columnContext *context) = 0;

    virtual std::any visitColumn_definition(PlSqlParser::Column_definitionContext *context) = 0;

    virtual std::any visitColumn_collation_name(PlSqlParser::Column_collation_nameContext *context) = 0;

    virtual std::any visitIdentity_clause(PlSqlParser::Identity_clauseContext *context) = 0;

    virtual std::any visitIdentity_options_parentheses(PlSqlParser::Identity_options_parenthesesContext *context) = 0;

    virtual std::any visitIdentity_options(PlSqlParser::Identity_optionsContext *context) = 0;

    virtual std::any visitVirtual_column_definition(PlSqlParser::Virtual_column_definitionContext *context) = 0;

    virtual std::any visitVirtual_column_expression(PlSqlParser::Virtual_column_expressionContext *context) = 0;

    virtual std::any visitAutogenerated_sequence_definition(PlSqlParser::Autogenerated_sequence_definitionContext *context) = 0;

    virtual std::any visitBy_user_for_statistics_clause(PlSqlParser::By_user_for_statistics_clauseContext *context) = 0;

    virtual std::any visitEvaluation_edition_clause(PlSqlParser::Evaluation_edition_clauseContext *context) = 0;

    virtual std::any visitNested_table_col_properties(PlSqlParser::Nested_table_col_propertiesContext *context) = 0;

    virtual std::any visitNested_item(PlSqlParser::Nested_itemContext *context) = 0;

    virtual std::any visitSubstitutable_column_clause(PlSqlParser::Substitutable_column_clauseContext *context) = 0;

    virtual std::any visitPartition_name(PlSqlParser::Partition_nameContext *context) = 0;

    virtual std::any visitSupplemental_logging_props(PlSqlParser::Supplemental_logging_propsContext *context) = 0;

    virtual std::any visitObject_type_col_properties(PlSqlParser::Object_type_col_propertiesContext *context) = 0;

    virtual std::any visitConstraint_clauses(PlSqlParser::Constraint_clausesContext *context) = 0;

    virtual std::any visitOld_constraint_name(PlSqlParser::Old_constraint_nameContext *context) = 0;

    virtual std::any visitNew_constraint_name(PlSqlParser::New_constraint_nameContext *context) = 0;

    virtual std::any visitDrop_constraint_clause(PlSqlParser::Drop_constraint_clauseContext *context) = 0;

    virtual std::any visitCheck_constraint(PlSqlParser::Check_constraintContext *context) = 0;

    virtual std::any visitForeign_key_clause(PlSqlParser::Foreign_key_clauseContext *context) = 0;

    virtual std::any visitReferences_clause(PlSqlParser::References_clauseContext *context) = 0;

    virtual std::any visitOn_delete_clause(PlSqlParser::On_delete_clauseContext *context) = 0;

    virtual std::any visitAnonymous_block(PlSqlParser::Anonymous_blockContext *context) = 0;

    virtual std::any visitInvoker_rights_clause(PlSqlParser::Invoker_rights_clauseContext *context) = 0;

    virtual std::any visitCall_spec(PlSqlParser::Call_specContext *context) = 0;

    virtual std::any visitJava_spec(PlSqlParser::Java_specContext *context) = 0;

    virtual std::any visitC_spec(PlSqlParser::C_specContext *context) = 0;

    virtual std::any visitC_agent_in_clause(PlSqlParser::C_agent_in_clauseContext *context) = 0;

    virtual std::any visitC_parameters_clause(PlSqlParser::C_parameters_clauseContext *context) = 0;

    virtual std::any visitC_external_parameter(PlSqlParser::C_external_parameterContext *context) = 0;

    virtual std::any visitC_property(PlSqlParser::C_propertyContext *context) = 0;

    virtual std::any visitParameter(PlSqlParser::ParameterContext *context) = 0;

    virtual std::any visitDefault_value_part(PlSqlParser::Default_value_partContext *context) = 0;

    virtual std::any visitSeq_of_declare_specs(PlSqlParser::Seq_of_declare_specsContext *context) = 0;

    virtual std::any visitDeclare_spec(PlSqlParser::Declare_specContext *context) = 0;

    virtual std::any visitVariable_declaration(PlSqlParser::Variable_declarationContext *context) = 0;

    virtual std::any visitSubtype_declaration(PlSqlParser::Subtype_declarationContext *context) = 0;

    virtual std::any visitCursor_declaration(PlSqlParser::Cursor_declarationContext *context) = 0;

    virtual std::any visitParameter_spec(PlSqlParser::Parameter_specContext *context) = 0;

    virtual std::any visitException_declaration(PlSqlParser::Exception_declarationContext *context) = 0;

    virtual std::any visitPragma_declaration(PlSqlParser::Pragma_declarationContext *context) = 0;

    virtual std::any visitRecord_type_def(PlSqlParser::Record_type_defContext *context) = 0;

    virtual std::any visitField_spec(PlSqlParser::Field_specContext *context) = 0;

    virtual std::any visitRef_cursor_type_def(PlSqlParser::Ref_cursor_type_defContext *context) = 0;

    virtual std::any visitType_declaration(PlSqlParser::Type_declarationContext *context) = 0;

    virtual std::any visitTable_type_def(PlSqlParser::Table_type_defContext *context) = 0;

    virtual std::any visitTable_indexed_by_part(PlSqlParser::Table_indexed_by_partContext *context) = 0;

    virtual std::any visitVarray_type_def(PlSqlParser::Varray_type_defContext *context) = 0;

    virtual std::any visitSeq_of_statements(PlSqlParser::Seq_of_statementsContext *context) = 0;

    virtual std::any visitLabel_declaration(PlSqlParser::Label_declarationContext *context) = 0;

    virtual std::any visitStatement(PlSqlParser::StatementContext *context) = 0;

    virtual std::any visitAssignment_statement(PlSqlParser::Assignment_statementContext *context) = 0;

    virtual std::any visitContinue_statement(PlSqlParser::Continue_statementContext *context) = 0;

    virtual std::any visitExit_statement(PlSqlParser::Exit_statementContext *context) = 0;

    virtual std::any visitGoto_statement(PlSqlParser::Goto_statementContext *context) = 0;

    virtual std::any visitIf_statement(PlSqlParser::If_statementContext *context) = 0;

    virtual std::any visitElsif_part(PlSqlParser::Elsif_partContext *context) = 0;

    virtual std::any visitElse_part(PlSqlParser::Else_partContext *context) = 0;

    virtual std::any visitLoop_statement(PlSqlParser::Loop_statementContext *context) = 0;

    virtual std::any visitCursor_loop_param(PlSqlParser::Cursor_loop_paramContext *context) = 0;

    virtual std::any visitForall_statement(PlSqlParser::Forall_statementContext *context) = 0;

    virtual std::any visitBounds_clause(PlSqlParser::Bounds_clauseContext *context) = 0;

    virtual std::any visitBetween_bound(PlSqlParser::Between_boundContext *context) = 0;

    virtual std::any visitLower_bound(PlSqlParser::Lower_boundContext *context) = 0;

    virtual std::any visitUpper_bound(PlSqlParser::Upper_boundContext *context) = 0;

    virtual std::any visitNull_statement(PlSqlParser::Null_statementContext *context) = 0;

    virtual std::any visitRaise_statement(PlSqlParser::Raise_statementContext *context) = 0;

    virtual std::any visitReturn_statement(PlSqlParser::Return_statementContext *context) = 0;

    virtual std::any visitCall_statement(PlSqlParser::Call_statementContext *context) = 0;

    virtual std::any visitPipe_row_statement(PlSqlParser::Pipe_row_statementContext *context) = 0;

    virtual std::any visitSelection_directive(PlSqlParser::Selection_directiveContext *context) = 0;

    virtual std::any visitError_directive(PlSqlParser::Error_directiveContext *context) = 0;

    virtual std::any visitSelection_directive_body(PlSqlParser::Selection_directive_bodyContext *context) = 0;

    virtual std::any visitBody(PlSqlParser::BodyContext *context) = 0;

    virtual std::any visitException_handler(PlSqlParser::Exception_handlerContext *context) = 0;

    virtual std::any visitTrigger_block(PlSqlParser::Trigger_blockContext *context) = 0;

    virtual std::any visitTps_block(PlSqlParser::Tps_blockContext *context) = 0;

    virtual std::any visitBlock(PlSqlParser::BlockContext *context) = 0;

    virtual std::any visitSql_statement(PlSqlParser::Sql_statementContext *context) = 0;

    virtual std::any visitExecute_immediate(PlSqlParser::Execute_immediateContext *context) = 0;

    virtual std::any visitDynamic_returning_clause(PlSqlParser::Dynamic_returning_clauseContext *context) = 0;

    virtual std::any visitData_manipulation_language_statements(PlSqlParser::Data_manipulation_language_statementsContext *context) = 0;

    virtual std::any visitCursor_manipulation_statements(PlSqlParser::Cursor_manipulation_statementsContext *context) = 0;

    virtual std::any visitClose_statement(PlSqlParser::Close_statementContext *context) = 0;

    virtual std::any visitOpen_statement(PlSqlParser::Open_statementContext *context) = 0;

    virtual std::any visitFetch_statement(PlSqlParser::Fetch_statementContext *context) = 0;

    virtual std::any visitVariable_or_collection(PlSqlParser::Variable_or_collectionContext *context) = 0;

    virtual std::any visitOpen_for_statement(PlSqlParser::Open_for_statementContext *context) = 0;

    virtual std::any visitTransaction_control_statements(PlSqlParser::Transaction_control_statementsContext *context) = 0;

    virtual std::any visitSet_transaction_command(PlSqlParser::Set_transaction_commandContext *context) = 0;

    virtual std::any visitSet_constraint_command(PlSqlParser::Set_constraint_commandContext *context) = 0;

    virtual std::any visitCommit_statement(PlSqlParser::Commit_statementContext *context) = 0;

    virtual std::any visitWrite_clause(PlSqlParser::Write_clauseContext *context) = 0;

    virtual std::any visitRollback_statement(PlSqlParser::Rollback_statementContext *context) = 0;

    virtual std::any visitSavepoint_statement(PlSqlParser::Savepoint_statementContext *context) = 0;

    virtual std::any visitCollection_method_call(PlSqlParser::Collection_method_callContext *context) = 0;

    virtual std::any visitExplain_statement(PlSqlParser::Explain_statementContext *context) = 0;

    virtual std::any visitSelect_only_statement(PlSqlParser::Select_only_statementContext *context) = 0;

    virtual std::any visitSelect_statement(PlSqlParser::Select_statementContext *context) = 0;

    virtual std::any visitWith_clause(PlSqlParser::With_clauseContext *context) = 0;

    virtual std::any visitWith_factoring_clause(PlSqlParser::With_factoring_clauseContext *context) = 0;

    virtual std::any visitSubquery_factoring_clause(PlSqlParser::Subquery_factoring_clauseContext *context) = 0;

    virtual std::any visitSearch_clause(PlSqlParser::Search_clauseContext *context) = 0;

    virtual std::any visitCycle_clause(PlSqlParser::Cycle_clauseContext *context) = 0;

    virtual std::any visitSubav_factoring_clause(PlSqlParser::Subav_factoring_clauseContext *context) = 0;

    virtual std::any visitSubav_clause(PlSqlParser::Subav_clauseContext *context) = 0;

    virtual std::any visitHierarchies_clause(PlSqlParser::Hierarchies_clauseContext *context) = 0;

    virtual std::any visitFilter_clauses(PlSqlParser::Filter_clausesContext *context) = 0;

    virtual std::any visitFilter_clause(PlSqlParser::Filter_clauseContext *context) = 0;

    virtual std::any visitAdd_calcs_clause(PlSqlParser::Add_calcs_clauseContext *context) = 0;

    virtual std::any visitAdd_calc_meas_clause(PlSqlParser::Add_calc_meas_clauseContext *context) = 0;

    virtual std::any visitSubquery(PlSqlParser::SubqueryContext *context) = 0;

    virtual std::any visitSubquery_basic_elements(PlSqlParser::Subquery_basic_elementsContext *context) = 0;

    virtual std::any visitSubquery_operation_part(PlSqlParser::Subquery_operation_partContext *context) = 0;

    virtual std::any visitQuery_block(PlSqlParser::Query_blockContext *context) = 0;

    virtual std::any visitSelected_list(PlSqlParser::Selected_listContext *context) = 0;

    virtual std::any visitFrom_clause(PlSqlParser::From_clauseContext *context) = 0;

    virtual std::any visitSelect_list_elements(PlSqlParser::Select_list_elementsContext *context) = 0;

    virtual std::any visitTable_ref_list(PlSqlParser::Table_ref_listContext *context) = 0;

    virtual std::any visitTable_ref(PlSqlParser::Table_refContext *context) = 0;

    virtual std::any visitTable_ref_aux(PlSqlParser::Table_ref_auxContext *context) = 0;

    virtual std::any visitTable_ref_aux_internal_one(PlSqlParser::Table_ref_aux_internal_oneContext *context) = 0;

    virtual std::any visitTable_ref_aux_internal_two(PlSqlParser::Table_ref_aux_internal_twoContext *context) = 0;

    virtual std::any visitTable_ref_aux_internal_thre(PlSqlParser::Table_ref_aux_internal_threContext *context) = 0;

    virtual std::any visitJoin_clause(PlSqlParser::Join_clauseContext *context) = 0;

    virtual std::any visitJoin_on_part(PlSqlParser::Join_on_partContext *context) = 0;

    virtual std::any visitJoin_using_part(PlSqlParser::Join_using_partContext *context) = 0;

    virtual std::any visitOuter_join_type(PlSqlParser::Outer_join_typeContext *context) = 0;

    virtual std::any visitQuery_partition_clause(PlSqlParser::Query_partition_clauseContext *context) = 0;

    virtual std::any visitFlashback_query_clause(PlSqlParser::Flashback_query_clauseContext *context) = 0;

    virtual std::any visitPivot_clause(PlSqlParser::Pivot_clauseContext *context) = 0;

    virtual std::any visitPivot_element(PlSqlParser::Pivot_elementContext *context) = 0;

    virtual std::any visitPivot_for_clause(PlSqlParser::Pivot_for_clauseContext *context) = 0;

    virtual std::any visitPivot_in_clause(PlSqlParser::Pivot_in_clauseContext *context) = 0;

    virtual std::any visitPivot_in_clause_element(PlSqlParser::Pivot_in_clause_elementContext *context) = 0;

    virtual std::any visitPivot_in_clause_elements(PlSqlParser::Pivot_in_clause_elementsContext *context) = 0;

    virtual std::any visitUnpivot_clause(PlSqlParser::Unpivot_clauseContext *context) = 0;

    virtual std::any visitUnpivot_in_clause(PlSqlParser::Unpivot_in_clauseContext *context) = 0;

    virtual std::any visitUnpivot_in_elements(PlSqlParser::Unpivot_in_elementsContext *context) = 0;

    virtual std::any visitHierarchical_query_clause(PlSqlParser::Hierarchical_query_clauseContext *context) = 0;

    virtual std::any visitStart_part(PlSqlParser::Start_partContext *context) = 0;

    virtual std::any visitGroup_by_clause(PlSqlParser::Group_by_clauseContext *context) = 0;

    virtual std::any visitGroup_by_elements(PlSqlParser::Group_by_elementsContext *context) = 0;

    virtual std::any visitRollup_cube_clause(PlSqlParser::Rollup_cube_clauseContext *context) = 0;

    virtual std::any visitGrouping_sets_clause(PlSqlParser::Grouping_sets_clauseContext *context) = 0;

    virtual std::any visitGrouping_sets_elements(PlSqlParser::Grouping_sets_elementsContext *context) = 0;

    virtual std::any visitHaving_clause(PlSqlParser::Having_clauseContext *context) = 0;

    virtual std::any visitModel_clause(PlSqlParser::Model_clauseContext *context) = 0;

    virtual std::any visitCell_reference_options(PlSqlParser::Cell_reference_optionsContext *context) = 0;

    virtual std::any visitReturn_rows_clause(PlSqlParser::Return_rows_clauseContext *context) = 0;

    virtual std::any visitReference_model(PlSqlParser::Reference_modelContext *context) = 0;

    virtual std::any visitMain_model(PlSqlParser::Main_modelContext *context) = 0;

    virtual std::any visitModel_column_clauses(PlSqlParser::Model_column_clausesContext *context) = 0;

    virtual std::any visitModel_column_partition_part(PlSqlParser::Model_column_partition_partContext *context) = 0;

    virtual std::any visitModel_column_list(PlSqlParser::Model_column_listContext *context) = 0;

    virtual std::any visitModel_column(PlSqlParser::Model_columnContext *context) = 0;

    virtual std::any visitModel_rules_clause(PlSqlParser::Model_rules_clauseContext *context) = 0;

    virtual std::any visitModel_rules_part(PlSqlParser::Model_rules_partContext *context) = 0;

    virtual std::any visitModel_rules_element(PlSqlParser::Model_rules_elementContext *context) = 0;

    virtual std::any visitCell_assignment(PlSqlParser::Cell_assignmentContext *context) = 0;

    virtual std::any visitModel_iterate_clause(PlSqlParser::Model_iterate_clauseContext *context) = 0;

    virtual std::any visitUntil_part(PlSqlParser::Until_partContext *context) = 0;

    virtual std::any visitOrder_by_clause(PlSqlParser::Order_by_clauseContext *context) = 0;

    virtual std::any visitOrder_by_elements(PlSqlParser::Order_by_elementsContext *context) = 0;

    virtual std::any visitOffset_clause(PlSqlParser::Offset_clauseContext *context) = 0;

    virtual std::any visitFetch_clause(PlSqlParser::Fetch_clauseContext *context) = 0;

    virtual std::any visitFor_update_clause(PlSqlParser::For_update_clauseContext *context) = 0;

    virtual std::any visitFor_update_of_part(PlSqlParser::For_update_of_partContext *context) = 0;

    virtual std::any visitFor_update_options(PlSqlParser::For_update_optionsContext *context) = 0;

    virtual std::any visitUpdate_statement(PlSqlParser::Update_statementContext *context) = 0;

    virtual std::any visitUpdate_set_clause(PlSqlParser::Update_set_clauseContext *context) = 0;

    virtual std::any visitColumn_based_update_set_clause(PlSqlParser::Column_based_update_set_clauseContext *context) = 0;

    virtual std::any visitDelete_statement(PlSqlParser::Delete_statementContext *context) = 0;

    virtual std::any visitInsert_statement(PlSqlParser::Insert_statementContext *context) = 0;

    virtual std::any visitSingle_table_insert(PlSqlParser::Single_table_insertContext *context) = 0;

    virtual std::any visitMulti_table_insert(PlSqlParser::Multi_table_insertContext *context) = 0;

    virtual std::any visitMulti_table_element(PlSqlParser::Multi_table_elementContext *context) = 0;

    virtual std::any visitConditional_insert_clause(PlSqlParser::Conditional_insert_clauseContext *context) = 0;

    virtual std::any visitConditional_insert_when_part(PlSqlParser::Conditional_insert_when_partContext *context) = 0;

    virtual std::any visitConditional_insert_else_part(PlSqlParser::Conditional_insert_else_partContext *context) = 0;

    virtual std::any visitInsert_into_clause(PlSqlParser::Insert_into_clauseContext *context) = 0;

    virtual std::any visitValues_clause(PlSqlParser::Values_clauseContext *context) = 0;

    virtual std::any visitMerge_statement(PlSqlParser::Merge_statementContext *context) = 0;

    virtual std::any visitMerge_update_clause(PlSqlParser::Merge_update_clauseContext *context) = 0;

    virtual std::any visitMerge_element(PlSqlParser::Merge_elementContext *context) = 0;

    virtual std::any visitMerge_update_delete_part(PlSqlParser::Merge_update_delete_partContext *context) = 0;

    virtual std::any visitMerge_insert_clause(PlSqlParser::Merge_insert_clauseContext *context) = 0;

    virtual std::any visitSelected_tableview(PlSqlParser::Selected_tableviewContext *context) = 0;

    virtual std::any visitLock_table_statement(PlSqlParser::Lock_table_statementContext *context) = 0;

    virtual std::any visitWait_nowait_part(PlSqlParser::Wait_nowait_partContext *context) = 0;

    virtual std::any visitLock_table_element(PlSqlParser::Lock_table_elementContext *context) = 0;

    virtual std::any visitLock_mode(PlSqlParser::Lock_modeContext *context) = 0;

    virtual std::any visitGeneral_table_ref(PlSqlParser::General_table_refContext *context) = 0;

    virtual std::any visitStatic_returning_clause(PlSqlParser::Static_returning_clauseContext *context) = 0;

    virtual std::any visitError_logging_clause(PlSqlParser::Error_logging_clauseContext *context) = 0;

    virtual std::any visitError_logging_into_part(PlSqlParser::Error_logging_into_partContext *context) = 0;

    virtual std::any visitError_logging_reject_part(PlSqlParser::Error_logging_reject_partContext *context) = 0;

    virtual std::any visitDml_table_expression_clause(PlSqlParser::Dml_table_expression_clauseContext *context) = 0;

    virtual std::any visitTable_collection_expression(PlSqlParser::Table_collection_expressionContext *context) = 0;

    virtual std::any visitSubquery_restriction_clause(PlSqlParser::Subquery_restriction_clauseContext *context) = 0;

    virtual std::any visitSample_clause(PlSqlParser::Sample_clauseContext *context) = 0;

    virtual std::any visitSeed_part(PlSqlParser::Seed_partContext *context) = 0;

    virtual std::any visitCondition(PlSqlParser::ConditionContext *context) = 0;

    virtual std::any visitExpressions_(PlSqlParser::Expressions_Context *context) = 0;

    virtual std::any visitExpression(PlSqlParser::ExpressionContext *context) = 0;

    virtual std::any visitCursor_expression(PlSqlParser::Cursor_expressionContext *context) = 0;

    virtual std::any visitLogical_expression(PlSqlParser::Logical_expressionContext *context) = 0;

    virtual std::any visitUnary_logical_expression(PlSqlParser::Unary_logical_expressionContext *context) = 0;

    virtual std::any visitUnary_logical_operation(PlSqlParser::Unary_logical_operationContext *context) = 0;

    virtual std::any visitLogical_operation(PlSqlParser::Logical_operationContext *context) = 0;

    virtual std::any visitMultiset_expression(PlSqlParser::Multiset_expressionContext *context) = 0;

    virtual std::any visitRelational_expression(PlSqlParser::Relational_expressionContext *context) = 0;

    virtual std::any visitCompound_expression(PlSqlParser::Compound_expressionContext *context) = 0;

    virtual std::any visitRelational_operator(PlSqlParser::Relational_operatorContext *context) = 0;

    virtual std::any visitIn_elements(PlSqlParser::In_elementsContext *context) = 0;

    virtual std::any visitBetween_elements(PlSqlParser::Between_elementsContext *context) = 0;

    virtual std::any visitConcatenation(PlSqlParser::ConcatenationContext *context) = 0;

    virtual std::any visitInterval_expression(PlSqlParser::Interval_expressionContext *context) = 0;

    virtual std::any visitModel_expression(PlSqlParser::Model_expressionContext *context) = 0;

    virtual std::any visitModel_expression_element(PlSqlParser::Model_expression_elementContext *context) = 0;

    virtual std::any visitSingle_column_for_loop(PlSqlParser::Single_column_for_loopContext *context) = 0;

    virtual std::any visitMulti_column_for_loop(PlSqlParser::Multi_column_for_loopContext *context) = 0;

    virtual std::any visitUnary_expression(PlSqlParser::Unary_expressionContext *context) = 0;

    virtual std::any visitImplicit_cursor_expression(PlSqlParser::Implicit_cursor_expressionContext *context) = 0;

    virtual std::any visitCollection_expression(PlSqlParser::Collection_expressionContext *context) = 0;

    virtual std::any visitCase_statement(PlSqlParser::Case_statementContext *context) = 0;

    virtual std::any visitSimple_case_statement(PlSqlParser::Simple_case_statementContext *context) = 0;

    virtual std::any visitSearched_case_statement(PlSqlParser::Searched_case_statementContext *context) = 0;

    virtual std::any visitCase_when_part_statement(PlSqlParser::Case_when_part_statementContext *context) = 0;

    virtual std::any visitCase_else_part_statement(PlSqlParser::Case_else_part_statementContext *context) = 0;

    virtual std::any visitCase_expression(PlSqlParser::Case_expressionContext *context) = 0;

    virtual std::any visitSimple_case_expression(PlSqlParser::Simple_case_expressionContext *context) = 0;

    virtual std::any visitSearched_case_expression(PlSqlParser::Searched_case_expressionContext *context) = 0;

    virtual std::any visitCase_when_part_expression(PlSqlParser::Case_when_part_expressionContext *context) = 0;

    virtual std::any visitCase_else_part_expression(PlSqlParser::Case_else_part_expressionContext *context) = 0;

    virtual std::any visitAtom(PlSqlParser::AtomContext *context) = 0;

    virtual std::any visitQuantified_expression(PlSqlParser::Quantified_expressionContext *context) = 0;

    virtual std::any visitString_function(PlSqlParser::String_functionContext *context) = 0;

    virtual std::any visitStandard_function(PlSqlParser::Standard_functionContext *context) = 0;

    virtual std::any visitJson_function(PlSqlParser::Json_functionContext *context) = 0;

    virtual std::any visitJson_object_content(PlSqlParser::Json_object_contentContext *context) = 0;

    virtual std::any visitJson_object_entry(PlSqlParser::Json_object_entryContext *context) = 0;

    virtual std::any visitJson_table_clause(PlSqlParser::Json_table_clauseContext *context) = 0;

    virtual std::any visitJson_array_element(PlSqlParser::Json_array_elementContext *context) = 0;

    virtual std::any visitJson_on_null_clause(PlSqlParser::Json_on_null_clauseContext *context) = 0;

    virtual std::any visitJson_return_clause(PlSqlParser::Json_return_clauseContext *context) = 0;

    virtual std::any visitJson_transform_op(PlSqlParser::Json_transform_opContext *context) = 0;

    virtual std::any visitJson_column_clause(PlSqlParser::Json_column_clauseContext *context) = 0;

    virtual std::any visitJson_column_definition(PlSqlParser::Json_column_definitionContext *context) = 0;

    virtual std::any visitJson_query_returning_clause(PlSqlParser::Json_query_returning_clauseContext *context) = 0;

    virtual std::any visitJson_query_return_type(PlSqlParser::Json_query_return_typeContext *context) = 0;

    virtual std::any visitJson_query_wrapper_clause(PlSqlParser::Json_query_wrapper_clauseContext *context) = 0;

    virtual std::any visitJson_query_on_error_clause(PlSqlParser::Json_query_on_error_clauseContext *context) = 0;

    virtual std::any visitJson_query_on_empty_clause(PlSqlParser::Json_query_on_empty_clauseContext *context) = 0;

    virtual std::any visitJson_value_return_clause(PlSqlParser::Json_value_return_clauseContext *context) = 0;

    virtual std::any visitJson_value_return_type(PlSqlParser::Json_value_return_typeContext *context) = 0;

    virtual std::any visitJson_value_on_mismatch_clause(PlSqlParser::Json_value_on_mismatch_clauseContext *context) = 0;

    virtual std::any visitLiteral(PlSqlParser::LiteralContext *context) = 0;

    virtual std::any visitNumeric_function_wrapper(PlSqlParser::Numeric_function_wrapperContext *context) = 0;

    virtual std::any visitNumeric_function(PlSqlParser::Numeric_functionContext *context) = 0;

    virtual std::any visitListagg_overflow_clause(PlSqlParser::Listagg_overflow_clauseContext *context) = 0;

    virtual std::any visitOther_function(PlSqlParser::Other_functionContext *context) = 0;

    virtual std::any visitOver_clause_keyword(PlSqlParser::Over_clause_keywordContext *context) = 0;

    virtual std::any visitWithin_or_over_clause_keyword(PlSqlParser::Within_or_over_clause_keywordContext *context) = 0;

    virtual std::any visitStandard_prediction_function_keyword(PlSqlParser::Standard_prediction_function_keywordContext *context) = 0;

    virtual std::any visitOver_clause(PlSqlParser::Over_clauseContext *context) = 0;

    virtual std::any visitWindowing_clause(PlSqlParser::Windowing_clauseContext *context) = 0;

    virtual std::any visitWindowing_type(PlSqlParser::Windowing_typeContext *context) = 0;

    virtual std::any visitWindowing_elements(PlSqlParser::Windowing_elementsContext *context) = 0;

    virtual std::any visitUsing_clause(PlSqlParser::Using_clauseContext *context) = 0;

    virtual std::any visitUsing_element(PlSqlParser::Using_elementContext *context) = 0;

    virtual std::any visitAssignable_element(PlSqlParser::Assignable_elementContext *context) = 0;

    virtual std::any visitCollect_order_by_part(PlSqlParser::Collect_order_by_partContext *context) = 0;

    virtual std::any visitWithin_or_over_part(PlSqlParser::Within_or_over_partContext *context) = 0;

    virtual std::any visitString_delimiter(PlSqlParser::String_delimiterContext *context) = 0;

    virtual std::any visitCost_matrix_clause(PlSqlParser::Cost_matrix_clauseContext *context) = 0;

    virtual std::any visitXml_passing_clause(PlSqlParser::Xml_passing_clauseContext *context) = 0;

    virtual std::any visitXml_attributes_clause(PlSqlParser::Xml_attributes_clauseContext *context) = 0;

    virtual std::any visitXml_namespaces_clause(PlSqlParser::Xml_namespaces_clauseContext *context) = 0;

    virtual std::any visitXml_table_column(PlSqlParser::Xml_table_columnContext *context) = 0;

    virtual std::any visitXml_general_default_part(PlSqlParser::Xml_general_default_partContext *context) = 0;

    virtual std::any visitXml_multiuse_expression_element(PlSqlParser::Xml_multiuse_expression_elementContext *context) = 0;

    virtual std::any visitXmlroot_param_version_part(PlSqlParser::Xmlroot_param_version_partContext *context) = 0;

    virtual std::any visitXmlroot_param_standalone_part(PlSqlParser::Xmlroot_param_standalone_partContext *context) = 0;

    virtual std::any visitXmlserialize_param_enconding_part(PlSqlParser::Xmlserialize_param_enconding_partContext *context) = 0;

    virtual std::any visitXmlserialize_param_version_part(PlSqlParser::Xmlserialize_param_version_partContext *context) = 0;

    virtual std::any visitXmlserialize_param_ident_part(PlSqlParser::Xmlserialize_param_ident_partContext *context) = 0;

    virtual std::any visitAnnotations_clause(PlSqlParser::Annotations_clauseContext *context) = 0;

    virtual std::any visitAnnotations_list(PlSqlParser::Annotations_listContext *context) = 0;

    virtual std::any visitAnnotation(PlSqlParser::AnnotationContext *context) = 0;

    virtual std::any visitSql_plus_command_no_semicolon(PlSqlParser::Sql_plus_command_no_semicolonContext *context) = 0;

    virtual std::any visitSql_plus_command(PlSqlParser::Sql_plus_commandContext *context) = 0;

    virtual std::any visitStart_command(PlSqlParser::Start_commandContext *context) = 0;

    virtual std::any visitWhenever_command(PlSqlParser::Whenever_commandContext *context) = 0;

    virtual std::any visitSet_command(PlSqlParser::Set_commandContext *context) = 0;

    virtual std::any visitTiming_command(PlSqlParser::Timing_commandContext *context) = 0;

    virtual std::any visitClear_command(PlSqlParser::Clear_commandContext *context) = 0;

    virtual std::any visitPartition_extension_clause(PlSqlParser::Partition_extension_clauseContext *context) = 0;

    virtual std::any visitColumn_alias(PlSqlParser::Column_aliasContext *context) = 0;

    virtual std::any visitTable_alias(PlSqlParser::Table_aliasContext *context) = 0;

    virtual std::any visitWhere_clause(PlSqlParser::Where_clauseContext *context) = 0;

    virtual std::any visitInto_clause(PlSqlParser::Into_clauseContext *context) = 0;

    virtual std::any visitXml_column_name(PlSqlParser::Xml_column_nameContext *context) = 0;

    virtual std::any visitCost_class_name(PlSqlParser::Cost_class_nameContext *context) = 0;

    virtual std::any visitAttribute_name(PlSqlParser::Attribute_nameContext *context) = 0;

    virtual std::any visitSavepoint_name(PlSqlParser::Savepoint_nameContext *context) = 0;

    virtual std::any visitRollback_segment_name(PlSqlParser::Rollback_segment_nameContext *context) = 0;

    virtual std::any visitSchema_name(PlSqlParser::Schema_nameContext *context) = 0;

    virtual std::any visitRoutine_name(PlSqlParser::Routine_nameContext *context) = 0;

    virtual std::any visitPackage_name(PlSqlParser::Package_nameContext *context) = 0;

    virtual std::any visitImplementation_type_name(PlSqlParser::Implementation_type_nameContext *context) = 0;

    virtual std::any visitParameter_name(PlSqlParser::Parameter_nameContext *context) = 0;

    virtual std::any visitReference_model_name(PlSqlParser::Reference_model_nameContext *context) = 0;

    virtual std::any visitMain_model_name(PlSqlParser::Main_model_nameContext *context) = 0;

    virtual std::any visitContainer_tableview_name(PlSqlParser::Container_tableview_nameContext *context) = 0;

    virtual std::any visitAggregate_function_name(PlSqlParser::Aggregate_function_nameContext *context) = 0;

    virtual std::any visitQuery_name(PlSqlParser::Query_nameContext *context) = 0;

    virtual std::any visitGrantee_name(PlSqlParser::Grantee_nameContext *context) = 0;

    virtual std::any visitRole_name(PlSqlParser::Role_nameContext *context) = 0;

    virtual std::any visitConstraint_name(PlSqlParser::Constraint_nameContext *context) = 0;

    virtual std::any visitLabel_name(PlSqlParser::Label_nameContext *context) = 0;

    virtual std::any visitType_name(PlSqlParser::Type_nameContext *context) = 0;

    virtual std::any visitSequence_name(PlSqlParser::Sequence_nameContext *context) = 0;

    virtual std::any visitException_name(PlSqlParser::Exception_nameContext *context) = 0;

    virtual std::any visitFunction_name(PlSqlParser::Function_nameContext *context) = 0;

    virtual std::any visitProcedure_name(PlSqlParser::Procedure_nameContext *context) = 0;

    virtual std::any visitTrigger_name(PlSqlParser::Trigger_nameContext *context) = 0;

    virtual std::any visitVariable_name(PlSqlParser::Variable_nameContext *context) = 0;

    virtual std::any visitIndex_name(PlSqlParser::Index_nameContext *context) = 0;

    virtual std::any visitCursor_name(PlSqlParser::Cursor_nameContext *context) = 0;

    virtual std::any visitRecord_name(PlSqlParser::Record_nameContext *context) = 0;

    virtual std::any visitLink_name(PlSqlParser::Link_nameContext *context) = 0;

    virtual std::any visitLocal_link_name(PlSqlParser::Local_link_nameContext *context) = 0;

    virtual std::any visitConnection_qualifier(PlSqlParser::Connection_qualifierContext *context) = 0;

    virtual std::any visitColumn_name(PlSqlParser::Column_nameContext *context) = 0;

    virtual std::any visitTableview_name(PlSqlParser::Tableview_nameContext *context) = 0;

    virtual std::any visitXmltable(PlSqlParser::XmltableContext *context) = 0;

    virtual std::any visitChar_set_name(PlSqlParser::Char_set_nameContext *context) = 0;

    virtual std::any visitSynonym_name(PlSqlParser::Synonym_nameContext *context) = 0;

    virtual std::any visitSchema_object_name(PlSqlParser::Schema_object_nameContext *context) = 0;

    virtual std::any visitDir_object_name(PlSqlParser::Dir_object_nameContext *context) = 0;

    virtual std::any visitUser_object_name(PlSqlParser::User_object_nameContext *context) = 0;

    virtual std::any visitGrant_object_name(PlSqlParser::Grant_object_nameContext *context) = 0;

    virtual std::any visitColumn_list(PlSqlParser::Column_listContext *context) = 0;

    virtual std::any visitParen_column_list(PlSqlParser::Paren_column_listContext *context) = 0;

    virtual std::any visitKeep_clause(PlSqlParser::Keep_clauseContext *context) = 0;

    virtual std::any visitFunction_argument(PlSqlParser::Function_argumentContext *context) = 0;

    virtual std::any visitFunction_argument_analytic(PlSqlParser::Function_argument_analyticContext *context) = 0;

    virtual std::any visitFunction_argument_modeling(PlSqlParser::Function_argument_modelingContext *context) = 0;

    virtual std::any visitRespect_or_ignore_nulls(PlSqlParser::Respect_or_ignore_nullsContext *context) = 0;

    virtual std::any visitArgument(PlSqlParser::ArgumentContext *context) = 0;

    virtual std::any visitType_spec(PlSqlParser::Type_specContext *context) = 0;

    virtual std::any visitDatatype(PlSqlParser::DatatypeContext *context) = 0;

    virtual std::any visitPrecision_part(PlSqlParser::Precision_partContext *context) = 0;

    virtual std::any visitNative_datatype_element(PlSqlParser::Native_datatype_elementContext *context) = 0;

    virtual std::any visitBind_variable(PlSqlParser::Bind_variableContext *context) = 0;

    virtual std::any visitGeneral_element(PlSqlParser::General_elementContext *context) = 0;

    virtual std::any visitGeneral_element_part(PlSqlParser::General_element_partContext *context) = 0;

    virtual std::any visitTable_element(PlSqlParser::Table_elementContext *context) = 0;

    virtual std::any visitObject_privilege(PlSqlParser::Object_privilegeContext *context) = 0;

    virtual std::any visitSystem_privilege(PlSqlParser::System_privilegeContext *context) = 0;

    virtual std::any visitConstant(PlSqlParser::ConstantContext *context) = 0;

    virtual std::any visitNumeric(PlSqlParser::NumericContext *context) = 0;

    virtual std::any visitNumeric_negative(PlSqlParser::Numeric_negativeContext *context) = 0;

    virtual std::any visitQuoted_string(PlSqlParser::Quoted_stringContext *context) = 0;

    virtual std::any visitIdentifier(PlSqlParser::IdentifierContext *context) = 0;

    virtual std::any visitId_expression(PlSqlParser::Id_expressionContext *context) = 0;

    virtual std::any visitInquiry_directive(PlSqlParser::Inquiry_directiveContext *context) = 0;

    virtual std::any visitOuter_join_sign(PlSqlParser::Outer_join_signContext *context) = 0;

    virtual std::any visitRegular_id(PlSqlParser::Regular_idContext *context) = 0;

    virtual std::any visitNon_reserved_keywords_in_18c(PlSqlParser::Non_reserved_keywords_in_18cContext *context) = 0;

    virtual std::any visitNon_reserved_keywords_in_12c(PlSqlParser::Non_reserved_keywords_in_12cContext *context) = 0;

    virtual std::any visitNon_reserved_keywords_pre12c(PlSqlParser::Non_reserved_keywords_pre12cContext *context) = 0;


};

}  // namespace antlrcpptest
