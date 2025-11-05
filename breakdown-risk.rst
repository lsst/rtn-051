.. Review the README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Risk-Tool-User-Guide-Breakdown-Risk:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. This RST file is used in a higher level RST file (/index.rst). See higher level RST file for instructions to contribute and context of use.
.. This file does not contain a title, and a title is not provided because it is used in a technote.

*****
Risks
*****

.. This section should provide a brief, top-level description of the page.

This section explains and defines the fields associated with :ref:`risks <Risk-Tool-User-Guide-Breakdown-Risk>`.

The tables which define the categories to analyze risks and plans are provided in the :ref:`Risk-Tool-User-Guide-Risk-Tool-Tables`.
The formulas calculated by the Risk Tool are provided in this document.
The source of this information is within the Risk Tool.

The following sections and figures break down an example risk into:

* :ref:`Breakdown-Risk-Identification` (:numref:`Risk-Example-Risk-Identification`)
* :ref:`Breakdown-Risk-Initial-Impact` (:numref:`Risk-Example-Analyze-Risk-Impacts`)
* :ref:`Breakdown-Risk-Score-Quantitative` (:numref:`Risk-Example-Analyze-Risk-Score-and-Quantitative`)
* :ref:`Breakdown-Risk-Residual-Impact` (:numref:`Risk-Example-Plans-Actions-Residual-Risk`)
* :ref:`Breakdown-Risk-Comments-History` (:numref:`Risk-Example-Comments-History`).


.. _Breakdown-Risk-Identification:

Risk identification
===================

The first section of a risk is used to identify and categorize the risk and those responsible for its management.
A text field is available to include additional comments on the status.

.. figure:: /_static/Risk-Example-Risk-Identification.png
    :name: Risk-Example-Risk-Identification

    Risk Identification section using an example risk.

Program/Service
	``Rubin Operations``.

Risk ID
	Automatically generated unique identifier.

Risk Type
	``Threats`` or ``Opportunities``.

Status
	``Candidate``, ``Active``, ``Retire``, ``Realized``, or ``Depreciated``.

Project
	Rubin Observatory Department which owns the risk and responsible for its management.

Risk Category; Sub Category
	Categorizes the risk using the information in :ref:`Risk-Category-Table`.
	Click the information button next to the field to display the information within the Risk Tool webapp.

Risk Owner
	Owner of the risk, responsible for changes and notifications to AD and/or Rubin Observatory Risk and Opportunity Board.
	This can be assigned to the department's AD or delegate.

Risk Title
	Short, descriptive title for the risk.

Risk Statement
	"IF-THEN" statement describing the risk.

The statement should present the possible risk event or condition ("if") and the potential outcome or consequences ("then").

Date Entered; Entered By; Date Last Modified; Last Modified By
	Automatically generated and updated.

Share Risk Externally
	``Yes`` or ``No`` depending on if the risk is shared external to Rubin Observatory.

Risk Proximity Date
	Date when risk may be realized.
	At this time, the project does not use this field.
	
	Note that this field is not shown in :numref:`Risk-Example-Risk-Identification`.

Updates/Comments
	Text field to describe and comment on updates.
	
	Note that this field is not shown in :numref:`Risk-Example-Risk-Identification`.

Parent
	Automatically generated list of associated Parent Risks of a Child Risk.

``Parent Risks`` are considered a "headline risk" to allow management to drill down to the ``Child Risk(s)`` that are of concern.
Parent Risks are not assessed directly, and they inherit the risk level of the highest-level Child Risk.


.. _Breakdown-Risk-Initial-Impact:

Risk initial impact
===================

Risks are analyzed by the ``Cost Impact`` and ``Schedule Impact`` to Rubin Observatory, and the ``Likelihood`` for it to be realized.
These are categorized into five levels of severity, as defined in :ref:`Risk-Tool-User-Guide-Risk-Tool-Tables`.
The categories are defined within the Risk Tool --- click the information button next to the field to display the information within the Risk Tool webapp.

The risk should first be analyzed under the initial condition of realization, i.e., before responses take effect.
The impact categorizations will automatically generate the :ref:`Risk Score <Breakdown-Risk-Score-Quantitative>` fields as the product of the impact and likelihood.

.. figure:: /_static/Risk-Example-Analyze-Risk-Impacts.png
    :name: Risk-Example-Analyze-Risk-Impacts

    Risk Impacts sections using an example risk.

Overall Impact
	Optional field to categorize the overall impact of the risk to Rubin Observatory before any response plans take effect.

	See :ref:`Risk-Impact-Table` for categories.

``Overall Impact`` can be used to increase the ``Impact Severity`` field in the :ref:`Risk Score <Breakdown-Risk-Score-Quantitative>`, as shown in this example (:numref:`Risk-Example-Analyze-Risk-Impacts` and :numref:`Risk-Example-Analyze-Risk-Score-and-Quantitative`).

Cost Impact
	Categorization of cost impact, relative to the Rubin Observatory ``FY Baseline`` operating budget, before any response plans take effect.

	See :ref:`Risk-Impact-Table` for categories.

Cost impacts are categorized relative to the annual baseline, even though in practice the cost of the realized risk may be felt and/or accumulated over multiple years.
You should discuss the specifics with your department's Associate Director to determine the cost impact.
Critically, this includes the ``FY Baseline`` needed for the quantitative analysis used to determine the Cost Impact category.

Schedule Impact
	Categorization of schedule impact, relative to the critical path of the Rubin Observatory's schedule (e.g., the data release cycle, the summit maintenance schedule, the start of operations, or the completion of the LSST survey) before any response plans take effect.

	See :ref:`Risk-Impact-Table` for categories.

You should discuss the specifics with your department's Associate Director to determine the schedule impact.
For example, some delays may have an inconsequential impact to the Observatory's operations if it can be absorbed into the data release cycle, while others may require extending the LSST survey or delaying a data release as an action if the risk was realized.
The latter affects the Observatory's operational critical path and crucial milestones --- these impacts are the most important ones to capture and accurately.

Likelihood
	Categorization of overall chance of risk being realized before any response plans take effect.

	See :ref:`Likelihood-Table` for categories.

Existential Risk
	``Yes`` or ``No`` if the risk is existential to NOIRLab.

You should make an initial assessment for the Rubin Observatory Risk and Opportunity Board to review, then the board will confirm if this is appropriate.

Schedule/Cost Impact Description
	Text fields to describe and comment on decision for impact categorizations.
    
    If the schedule impact or cost impact is not applicable, use the following statement in the respective Schedule/Cost Impact Description: "This risk is not expected to have an impact to the schedule/cost of Rubin Operations."


.. _Breakdown-Risk-Score-Quantitative:

Risk score and quantitative analysis 
====================================

The fields under ``Risk Score`` are automatically generated based on input selections from :ref:`risk impacts <Breakdown-Risk-Initial-Impact>`.
These are categorized into five levels of severity, as defined in :ref:`Risk-Tool-User-Guide-Risk-Tool-Tables`.
The categories are defined within the Risk Tool --- click the information button next to the field to display the information within the Risk Tool webapp.

The ``Analyze Risk Quantitative`` section will not affect values and categories; however, the section will record the impact justification and provide information needed to categorize the impacts.
In practice, you should assess and adjust the impact categorizations after completing the the ``Analyze Risk Quantitative`` section.

.. figure:: /_static/Risk-Example-Analyze-Risk-Score-and-Quantitative.png
    :name: Risk-Example-Analyze-Risk-Score-and-Quantitative

    Risk Score and Analysis Quantitative sections using an example risk.

Impact Severity
	Automatically generated category based on ``Overall Impact``, ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Impact Score
	Automatically generated value based on ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Likelihood Score
	Automatically generated value based on ``Likelihood``.

Probability
	Automatically generated value based on ``Likelihood``.

Initial Risk Score
	Automatically generated value based on ``Overall Impact``, ``Cost Impact``, ``Schedule Impact`` and ``Likelihood``.

Minimum Delay (Months); Maximum Delay (Months); Likely Delay (Months)
	Minimum, maximum and likely delay if risk is realized, in months (round to the nearest integer).

Expected Schedule Delay (Months)
	Automatically generated value based on ``Minimum Delay``, ``Maximum Delay`` and ``Likely Delay``.

Impact Time
	Date when realized risk would impact the schedule.

Impacted Event/Milestone
	Event or milestone impacted by the realized risk.

This is important, so that the meaning of the schedule delay is clear.
:numref:`Risk-Milestones-Table` includes commonly used milestones.

.. _Risk-Milestones-Table:
.. list-table:: Milestone Definitions for Risks
   :header-rows: 1

   * - Milestone Name
     - Milestone Description
   * - Start of LSST
     - Impact to the beginning of the LSST survey.
   * - LSST Survey Complete
     - Impact to the end of the LSST survey.
   * - Start of Operations
     - Impact to start of Rubin Observatory Operations.
   * - Specific Data Release (DR), Data Preview (DP), or other Data Milestone
     - Impact to one or multiple DR/DP that are explicitly specified.
       For example: DR1, DP1, prompt data products, intermediate data release data products.
   * - DRN
     - Impact to all DRs.
   * - Performance Analysis or Performance Evaluation
     - Impact to a performance analysis or evaluation at an explicitly specified stage.
       For example: performance evaluation following DR1, system-wide review after first year of operations.
   * - Annual Maintenance
     - Impact to annual maintenance activities.

Basis of Estimate
	Reference to basis of estimate capturing impact of realized risk.

Minimum Cost (US Dollars); Maximum Cost (US Dollars); Likely Cost (US Dollars)
	Minimum, maximum and likely annual cost of realized risk.

Costs should be estimated as they would occur, i.e., on an approximate, time-averaged, annual basis over the likely time period of impact and in approximate then-year dollars.
Rubin Observatory needs to know how much funding to hold in reserve **each year** in order to address risks as they are realized.

Cost estimates need only be precise to the nearest $1,000,000, although higher precision is appreciated.
This resolution is chosen because the cost estimates are multiplied by the estimated likelihood, and the product is expected to be uncertain by at least a factor of two.

Expected Cost Impact
	Automatically generated value based on the following formula:

	``Minimum Cost`` + ``Likely Cost`` |times| 4 + ``Maximum Cost`` |divide| 6

Expected Monetary Value
	Automatically generated value based on the following formula:

	[``Minimum Cost`` + ``Likely Cost`` |times| 4 + ``Maximum Cost`` |divide| 6] |times| [(``Likelihood Score`` |times| 0.20) - 0.10]

Financial Provision
	This field is not used by Rubin Observatory.

Number of Possible Occurrences
	Number of potential occurrences this risk can be realized, as an integer.


.. _Breakdown-Risk-Residual-Impact:

Risk residual impact
====================

After a risk is identified, ``Related Response Plans`` are used to address it (see :ref:`Response Plans <Risk-Tool-User-Guide-Breakdown-Plan>`).
The ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood`` analyze the realized risk impact after the plan is activated.
These are categorized into five levels of severity, as defined in :ref:`Risk-Tool-User-Guide-Risk-Tool-Tables`.
The categories are defined within the Risk Tool --- click the information button next to the field to display the information within the Risk Tool webapp.

``Related Actions`` are actions taken to implement a response plan (see :ref:`Actions <Risk-Tool-User-Guide-Breakdown-Action>`).
Actions can be associated with risk and/or responses.

The risk is analyzed under the condition of realization after the response plans take effect within this section
The impact categorizations will automatically generate the ``Residual Risk Score`` fields as the product of the impact and likelihood.

.. figure:: /_static/Risk-Example-Plans-Actions-Residual-Risk.png
    :name: Risk-Example-Plans-Actions-Residual-Risk

    Residual Risk Impacts, Response Plans and Related Actions sections using an example risk.

Plan Type
	Strategic process of controlling the identified risks via response plans.

:numref:`Response-Plan-Types` shows the four types of processes, and their implementation depends on if the risk is a threat or opportunity.
Note that a risk may still be realized after a response plan is implemented:
for example, the difference between mitigating or accepting a threat (or enhancing or ignoring an opportunity) before the risk is realized can be summarized as "do something" or "do nothing."

Some risks may include multiple response plans.
In this case, specify the plan type of the costliest present --- for threats, the plan types in order of increasing costliness are: ``Accept`` (least cost), ``Transfer``, ``Avoid``, ``Mitigate`` (greatest cost).

.. figure:: /_static/Response-Plan-Types.png
    :name: Response-Plan-Types

    Four processes and respective threat or opportunity response plan types.

Response Types for Threats
	Avoid
		Changing your strategy or plans to avoid the risk.
		This risk response strategy is about removing the threat by any means.
		That can mean changing your management plan to avoid the risk because it’s detrimental to the project/program.

	Transfer
		Passing ownership and/or liability to a third party to resolve the risk, e.g., purchase fire insurance for an unfinished building.

	Mitigate
		Reducing the probability and/or impact of the risk below a threshold of acceptability.
		Some risks cannot be avoided and need to take action to reduce the impact of the risk, e.g., work procedures and equipment designed to reduce workplace safety risks.

	Accept
		Recognizing residual risks and devising responses to control and monitor them.
		This risk response strategy consists of identifying a risk and documenting all the risk management information about it, but not taking any action unless the risk is realized.

Response Types for Opportunities
	Exploit
		Exploiting a risk to make use of the opportunity that becomes available if that risk occurs.

	Share
		Distributing the risk across multiple stakeholders (teams/projects/programs).

	Enhance
		An action that is taken to increase the chance of the opportunity occurring.

	Ignore
		Opportunities that cannot be actively addressed through other opportunity response types can be ignored, with no special measures being taken to address them.

Escalation
	``Yes`` or ``No`` if the risks is escalated to NOIRLab Directorate or other program/services for their attention.

Related Response Plan
	After selecting the associations, automatically generated list of response plans associated with this risk.
    
	This preview provides a summary of each plan's potential impact, namely the ``Residual Likelihood`` and ``Residual Impact Severity``.
	These impact categories are calculated in the :ref:`plan <Risk-Tool-User-Guide-Breakdown-Plan>` using the initial impact categories and Likelihood of the risk.

Related Issue Response
	After selecting the associations, automatically generated list of response plans associated with this risk.
	Issue Responses are not used by the project.
	
	Note that this field is not shown in :numref:`Risk-Example-Plans-Actions-Residual-Risk`.

Related Actions
	Automatically generated list of actions associated with this risk.

Residual Overall Impact
	Optional field to categorize the overall impact of the risk to Rubin Observatory after a response plan is in effect.

	See :ref:`Risk-Impact-Table` for categories.

``Residual Overall Impact`` can be used to increase the ``Residual Impact Severity`` field.

Residual Cost Impact
	Categorization of cost impact, relative to the Rubin Observatory ``FY Baseline`` operating budget, after a response plan is in effect.

	See :ref:`Risk-Impact-Table` for categories.

Cost impacts are categorized relative to the annual baseline, even though in practice the cost of the realized risk may be felt and/or accumulated over multiple years.
You should discuss the specifics with your department's Associate Director to determine the cost impact.
Critically, this includes the ``FY Baseline`` needed for the quantitative analysis used to determine the Residual Cost Impact category.

Residual Likelihood
	Categorization of overall chance of risk being realized after a response plan is in effect.

	See :ref:`Likelihood-Table` for categories.

Residual Schedule Impact
	Categorization of schedule impact, relative to the critical path of the Rubin Observatory's schedule (e.g., the data release cycle, the summit maintenance schedule, the start of operations, or the completion of the LSST survey) after a response plan is in effect.

	See :ref:`Risk-Impact-Table` for categories.

You should discuss the specifics with your department's Associate Director to determine the schedule impact.
For example, some delays may have an inconsequential impact to the Observatory's operations if it can be absorbed into the data release cycle, while others may require extending the LSST survey or delaying a data release as an action if the risk was realized.
The latter affects the Observatory's operational critical path and crucial milestones --- these impacts are the most important ones to capture and accurately.

Residual Impact Severity
	Automatically generated category based on ``Residual Overall Impact``, ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.

	See :ref:`Risk-Impact-Table` for categories.

You must include ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood`` because the residual impact scores will not include inputs from the :ref:`Breakdown-Risk-Initial-Impact` section.

Residual Impact Score
	Automatically generated value based on ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.

Residual Likelihood Score
	Automatically generated value based on ``Residual Likelihood``.

Residual Probability
	Automatically generated value based on ``Residual Likelihood``.

Residual Risk Score
	Automatically generated category based on ``Residual Overall Impact``, ``Residual Cost Impact``, ``Residual Schedule Impact`` and ``Residual Likelihood``.


.. _Breakdown-Risk-Comments-History:

Risk comments, attachments, notify list and history
===================================================

A text field is available to include additional comments on the risk and its status.
Email notifications are possible and can be customized to project/program/service group needs to notify the appropriate internal stakeholders of ongoing changes, scheduled events and distribution of reports on necessary dates or recurring timeframes.
All changes are tracked by the ``History Trail`` section to capture the history of modification by users and when the modification occurred.

.. figure:: /_static/Risk-Example-Comments-History.png
    :name: Risk-Example-Comments-History

    Risk comment, notification and History Trail sections using an example risk.

Status Description
	Text field to describe and comment the status and status changes.

Realized Risk Plan
	While this field is shown in :numref:`Risk-Example-Comments-History`, it has since been removed from the Risk Tool.

Conclusion
	Text field to describe and comment on the conclusion of a retired or depreciated risk.

Updates/Comments
	Text field to describe and comment on updates.
	These comments are logged once they are saved; see "Nov 10 2022" entry in :numref:`Risk-Example-Comments-History`.

Attachments
	Attachments may be uploaded and associated with the risk.

Notify List
	List of users on the Notify List (left) and tools to add/remove users (right) for the risk.

History Trail
	Log of all modifications to the risk, including user making the change, the nature of the change and the date/time the change was made; see entry "[16]" in :numref:`Risk-Example-Comments-History`.
