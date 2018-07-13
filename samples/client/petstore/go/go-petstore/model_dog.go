/*
 * OpenAPI Petstore
 *
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * API version: 1.0.0
 */

// Code generated by OpenAPI Generator (https://openapi-generator.tech) DO NOT EDIT.

package petstore

type Dog struct {
	ClassName string `json:"className"`
	Color string `json:"color,omitempty"`
	Breed string `json:"breed,omitempty"`
}
