/*
 * OpenAPI Petstore
 *
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * API version: 1.0.0
 */

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package petstore

type User struct {
	Id int64 `json:"id,omitempty"`
	Username string `json:"username,omitempty"`
	FirstName string `json:"firstName,omitempty"`
	LastName string `json:"lastName,omitempty"`
	Email string `json:"email,omitempty"`
	Password string `json:"password,omitempty"`
	Phone string `json:"phone,omitempty"`
	// User Status
	UserStatus int32 `json:"userStatus,omitempty"`
}
