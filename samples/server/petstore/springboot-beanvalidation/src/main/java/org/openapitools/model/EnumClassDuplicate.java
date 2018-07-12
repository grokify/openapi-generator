package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonValue;
import javax.validation.Valid;
import javax.validation.constraints.*;

import com.fasterxml.jackson.annotation.JsonCreator;

/**
 * Gets or Sets EnumClassDuplicate
 */
public enum EnumClassDuplicate {
  
  _ABC("_abc"),
  
  _EFG("-efg"),
  
  _XYZ_("(xyz)");

  private String value;

  EnumClassDuplicate(String value) {
    this.value = value;
  }

  @Override
  @JsonValue
  public String toString() {
    return String.valueOf(value);
  }

  @JsonCreator
  public static EnumClassDuplicate fromValue(String text) {
    for (EnumClassDuplicate b : EnumClassDuplicate.values()) {
      if (String.valueOf(b.value).equals(text)) {
        return b;
      }
    }
    return null;
  }
}

