use time::{PrimitiveDateTime as DateTime, Duration, Date, OffsetDateTime};

// Returns a DateTime one billion seconds after start.
pub fn after(start: DateTime) -> DateTime {
    return start + Duration::seconds(1000000000);
}
