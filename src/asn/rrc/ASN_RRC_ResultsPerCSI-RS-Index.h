/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_ResultsPerCSI_RS_Index_H_
#define	_ASN_RRC_ResultsPerCSI_RS_Index_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_CSI-RS-Index.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_RRC_MeasQuantityResults;

/* ASN_RRC_ResultsPerCSI-RS-Index */
typedef struct ASN_RRC_ResultsPerCSI_RS_Index {
	ASN_RRC_CSI_RS_Index_t	 csi_RS_Index;
	struct ASN_RRC_MeasQuantityResults	*csi_RS_Results;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_ResultsPerCSI_RS_Index_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_ResultsPerCSI_RS_Index;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_ResultsPerCSI_RS_Index_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_ResultsPerCSI_RS_Index_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_ResultsPerCSI_RS_Index_H_ */
#include <asn_internal.h>
