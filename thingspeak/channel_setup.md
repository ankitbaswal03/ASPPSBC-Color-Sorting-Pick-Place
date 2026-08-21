# ThingSpeak Channel Setup

## Channel Information
- **Channel ID**: 1707830
- **Channel Name**: ASPPSBC Color Detection
- **Description**: Real-time color detection data from TCS3200 sensor

## Field Configuration

| Field | Name | Description | Data Type |
|-------|------|-------------|-----------|
| Field 1 | Red Color Data | Intensity reading for Red objects | Integer |
| Field 2 | Blue Color Data | Intensity reading for Blue objects | Integer |
| Field 3 | Green Color Data | Intensity reading for Green objects | Integer |

## API Keys
- **Write API Key**: PTOS9YM3CK1UR95U
- **Read API Key**: Generate from dashboard

## Dashboard Widgets

### 1. Numeric Display (3 widgets)
- Field 1: Red Intensity
- Field 2: Blue Intensity
- Field 3: Green Intensity

### 2. Line Chart (1 widget)
- Display all three fields on one chart
- Time range: Last 5 minutes
- Auto-refresh: Every 15 seconds

### 3. Status Indicators
- Red detected when value < 50
- Green detected when value < 52 & red > 79
- Blue detected when value < 30

## API Endpoints

### Write Data
