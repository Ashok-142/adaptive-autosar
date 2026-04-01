#pragma once

#include <cstdint>

// ── SOME/IP Service Identity ────────────────────────────────────
// In Classic AUTOSAR: these would live in your system description
// ARXML as PDU IDs, signal groups, and COM configuration.
// In Adaptive AUTOSAR: these are SOME/IP wire-level identifiers,
// equivalent to what goes in your vsomeip JSON manifest.

namespace SpeedService {

    // Service ID: identifies *which service* on the network.
    // Think of it like a CAN message cluster ID — but for Ethernet.
    constexpr uint16_t SERVICE_ID    = 0x1234;

    // Instance ID: distinguishes multiple instances of the same service.
    // If you had two SpeedProviders on the network, they'd share the
    // SERVICE_ID but have different INSTANCE_IDs.
    constexpr uint16_t INSTANCE_ID   = 0x0001;

    // Event ID: identifies which specific event within the service.
    // Analogous to a signal inside a PDU in Classic COM.
    // Range 0x8000–0x8FFF is reserved for events in SOME/IP.
    constexpr uint16_t EVENT_ID      = 0x8001;

    // EventGroup ID: events are grouped for subscription purposes.
    // A consumer subscribes to a group, not individual events.
    // Analogous to subscribing to an I-PDU in Classic COM.
    constexpr uint16_t EVENTGROUP_ID = 0x0001;

    // The data payload: speed in km/h as a 32-bit float.
    // In Classic AUTOSAR this would be a System Signal with
    // a defined data type in the ARXML.
    using SpeedKmh = float;

}  // namespace SpeedService
