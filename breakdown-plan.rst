.. Review the README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Risk-Tool-User-Guide-Breakdown-Plan:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. This RST file is used in a higher level RST file (/index.rst). See higher level RST file for instructions to contribute and context of use.
.. This file does not contain a title, and a title is not provided because it is used in a technote.

*****
Plans
*****

.. This section should provide a brief, top-level description of the page.

This page explains and defines the fields associated with :ref:`plans <Risk-Tool-User-Guide-Breakdown-Plan>`.
Plans are also called ``responses`` or ``response plans``.

The tables which define the categories to analyze risks and plans are provided in the :ref:`Risk-Tool-User-Guide-Risk-Tool-Tables`.
The source of this information is within the Risk Tool.

This section breaks down an example plan into:

* :ref:`Breakdown-Plan-Identification` (:numref:`Plan-Example-Plan-Identification`)
* :ref:`Breakdown-Plan-Impact` (:numref:`Plan-Example-Plan-Impact`)
* :ref:`Breakdown-Plan-History` (:numref:`Plan-Example-Plan-History`)


.. _Breakdown-Plan-Identification:

Plan identification, comments, and event details
================================================

The first section is used to identify and categorize the plan and those responsible for its management.
A text field is available to include additional comments on the plan and its status.

.. figure:: /_static/Plan-Example-Plan-Identification.png
    :name: Plan-Example-Plan-Identification

    Plan identification and comment section using an example plan.

Program/Service
	``Rubin Operations``.

Response Plan ID
	Automatically generated unique identifier.

Status
	``Proposed``, ``Endorsed``, ``Active``, ``Control Process``, ``Complete``, or ``Canceled``.

Response Plan Title
	Short, descriptive title for the plan.

Response Plan Description
	Description of the plan.

Assigned To
	Owner of the plan, responsible for changes and notifications to Risk Owner(s), AD, and/or Rubin Observatory Risk and Opportunity Board.

Date Entered; Entered By; Date Last Modified; Last Modified By
	Automatically generated and updated.

Updates/Comments
	Text field to describe and comment on updates.
	These comments are logged once they are saved; see "Nov 10 2022" entry in :numref:`Plan-Example-Plan-Identification`.

Related Risks
	Automatically generated list of risks associated with this plan.

Risk Owner
	Automatically generated Risk Owner associated with the respective risk.

Related Actions
	Automatically generated list of actions associated with this plan.

Start Date / End Date - Planned
	Initially planned start and end dates for this plan.

Start Date / End Date - Actual
	Actual performed start and end dates for this plan.

Closure Event
	Event that closes an enacted plan.

Other info.
	Available text field for other information.
	It is suggested to use this field for information that will not change over time; otherwise, consider using the Updates/Comments field.


.. _Breakdown-Plan-Impact:

Plan impact to risks
====================

A plan will impact a risk via the ``Residual Risk Impact``, ``Residual Risk Score`` and ``Quantitative Risk Assessment``.
Residual Impact Score is the highest of the residual impact scores where a reduction % is applied to each impact from the risk. 

.. figure:: /_static/Plan-Example-Plan-Impact.png
    :name: Plan-Example-Plan-Impact

    Plan impact using an example plan.

% Overall Impact Reduction
	Percentage of reduction to ``Overall Impact`` of risk due to plan.

Reduction to Likelihood %
	Percentage of reduction to ``Likelihood`` of risk due to plan.

	See :ref:`Likelihood-Table` for categories.

% Cost Impact Reduction
	Percentage of reduction to ``Cost Impact`` of risk due to plan.

% Schedule Impact Reduction
	Percentage of reduction to ``Schedule Impact`` of risk due to plan.

Residual Impact Severity
	Automatically generated category based on XXX.

	See :ref:`Risk-Impact-Table` for categories.

Residual Impact Score
	Automatically generated value based on XXX.
	It is the highest of the Residual Impact Scores where a reduction percentage is applied to each impact from the risk.

Residual Likelihood Score
	Automatically generated value based on XXX.

Residual Likelihood
	Automatically generated categorization of overall chance of risk being realized after a response plan is in effect.

	See :ref:`Likelihood-Table` for categories.

Residual Probability
	Automatically generated value based on XXX.

Residual Risk Score
	Automatically generated value based on XXX.

Cost Reduction %
	Percentage of reduction to cost (quantitative).

Delay Reduction %
	Percentage of reduction to schedule (quantitative).

Response Plan Cost
	Cost of response plan.


.. _Breakdown-Plan-History:

Plan attachments, notify list and history
=========================================

A text field is available to include additional comments on the plan and its status.
Email notifications are possible and can be customized to project/program/service group needs to notify the appropriate internal stakeholders of ongoing changes, scheduled events and distribution of reports on necessary dates or recurring timeframes.
All changes are tracked by the ``History Trail`` section to capture the history of modification by users and when the modification occurred.

.. figure:: /_static/Plan-Example-Plan-History.png
    :name: Plan-Example-Plan-History

    Plan notification and History Trail sections using an example plan.

Status Description
	Text field to describe and comment the status and status changes.

Attachments
	Attachments may be uploaded and associated with the plan.

Notify List
	List of users on the Notify List (left) and tools to add/remove users (right) for the plan.

History Trail
	Log of all modifications to the plan, including user making the change, the nature of the change and the date/time the change was made; see entry "[9]" in :numref:`Plan-Example-Plan-History`.
