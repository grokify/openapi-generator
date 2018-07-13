/*
 * OpenAPI Petstore
 *
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * API version: 1.0.0
 */

// Code generated by OpenAPI Generator (https://openapi-generator.tech) DO NOT EDIT.

package petstore

type EnumTest struct {
	EnumString string `json:"enum_string,omitempty"`
	EnumStringRequired string `json:"enum_string_required"`
	EnumInteger int32 `json:"enum_integer,omitempty"`
	EnumNumber float64 `json:"enum_number,omitempty"`
	OuterEnum OuterEnum `json:"outerEnum,omitempty"`
}
